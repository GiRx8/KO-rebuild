#!/usr/bin/env python3
import struct
import json
import os
import sys

# UI Types mapping
UI_TYPES = {
    0: "BASE",
    1: "BUTTON",
    2: "STATIC",
    3: "PROGRESS",
    4: "IMAGE",
    5: "SCROLLBAR",
    6: "STRING",
    7: "TRACKBAR",
    8: "EDIT",
    9: "AREA",
    10: "TOOLTIP",
    11: "ICON",
    12: "ICON_MANAGER",
    13: "ICONSLOT",
    14: "LIST"
}

UI_TYPE_IDS = {v: k for k, v in UI_TYPES.items()}

class BinaryReader:
    def __init__(self, data):
        self.data = data
        self.offset = 0

    def read(self, fmt):
        size = struct.calcsize(fmt)
        if self.offset + size > len(self.data):
            raise EOFError("Read out of bounds")
        res = struct.unpack_from(fmt, self.data, self.offset)
        self.offset += size
        return res

    def read_bytes(self, n):
        if self.offset + n > len(self.data):
            raise EOFError("Read out of bounds")
        res = self.data[self.offset:self.offset+n]
        self.offset += n
        return res

    def read_string(self):
        length = self.read("<i")[0]
        if length < 0:
            raise ValueError(f"Invalid string length: {length}")
        if length == 0:
            return ""
        return self.read_bytes(length).decode('ansi', errors='replace')

class BinaryWriter:
    def __init__(self):
        self.data = bytearray()

    def write(self, fmt, *args):
        self.data.extend(struct.pack(fmt, *args))

    def write_bytes(self, b):
        self.data.extend(b)

    def write_string(self, s):
        if not s:
            self.write("<i", 0)
        else:
            b = s.encode('ansi', errors='replace')
            self.write("<i", len(b))
            self.write_bytes(b)

def parse_ui_base(reader, version, has_sounds):
    obj = {}
    obj["name"] = reader.read_string()
    
    if version >= 1264:
        children_count, unknown = reader.read("<hh")
        obj["unknown_version_val"] = unknown
    else:
        children_count = reader.read("<i")[0]
        
    children = []
    for _ in range(children_count):
        child_type_id = reader.read("<i")[0]
        child_type = UI_TYPES.get(child_type_id, f"UNKNOWN_{child_type_id}")
        child_obj = parse_ui_object(reader, child_type, version, has_sounds)
        children.append(child_obj)
    obj["children"] = children
    
    obj["id"] = reader.read_string()
    
    l, t, r, b = reader.read("<iiii")
    obj["region"] = {"left": l, "top": t, "right": r, "bottom": b}
    
    l, t, r, b = reader.read("<iiii")
    obj["movable"] = {"left": l, "top": t, "right": r, "bottom": b}
    
    obj["style"] = reader.read("<I")[0]
    obj["reserved"] = reader.read("<I")[0]
    obj["tooltip"] = reader.read_string()
    
    if has_sounds:
        obj["open_sound"] = reader.read_string()
        obj["close_sound"] = reader.read_string()
    else:
        obj["open_sound"] = ""
        obj["close_sound"] = ""
        
    return obj

def parse_ui_object(reader, ui_type, version, has_sounds):
    obj = {"type": ui_type}
    base_data = parse_ui_base(reader, version, has_sounds)
    obj.update(base_data)
    
    if ui_type == "IMAGE":
        obj["texture_file"] = reader.read_string()
        l, t, r, b = reader.read("<ffff")
        obj["uv_rect"] = {"left": l, "top": t, "right": r, "bottom": b}
        obj["anim_frame"] = reader.read("<f")[0]
        
    elif ui_type == "BUTTON":
        l, t, r, b = reader.read("<iiii")
        obj["click_rect"] = {"left": l, "top": t, "right": r, "bottom": b}
        if has_sounds:
            obj["sound_on"] = reader.read_string()
            obj["sound_click"] = reader.read_string()
        else:
            obj["sound_on"] = ""
            obj["sound_click"] = ""
            
    elif ui_type == "STATIC":
        if has_sounds:
            obj["sound_click"] = reader.read_string()
        else:
            obj["sound_click"] = ""
            
    elif ui_type == "STRING":
        obj["font_name"] = reader.read_string()
        if obj["font_name"]:
            obj["font_height"] = reader.read("<I")[0]
            obj["font_flags"] = reader.read("<I")[0]
        obj["color"] = reader.read("<I")[0]
        obj["text"] = reader.read_string()
        if version >= 1264:
            obj["line_spacing"] = reader.read("<i")[0]
            
    elif ui_type == "EDIT":
        if has_sounds:
            obj["sound_click"] = reader.read_string()
            obj["sound_typing"] = reader.read_string()
        else:
            obj["sound_click"] = ""
            obj["sound_typing"] = ""
            
    elif ui_type == "AREA":
        obj["area_type"] = reader.read("<i")[0]
        
    elif ui_type == "LIST":
        obj["font_name"] = reader.read_string()
        if obj["font_name"]:
            obj["font_height"] = reader.read("<I")[0]
            obj["color"] = reader.read("<I")[0]
            obj["font_bold"] = reader.read("<i")[0]
            obj["font_italic"] = reader.read("<i")[0]
            
    return obj

def write_ui_base(writer, obj, version, has_sounds):
    writer.write_string(obj["name"])
    
    children = obj.get("children", [])
    if version >= 1264:
        writer.write("<hh", len(children), obj.get("unknown_version_val", 1))
    else:
        writer.write("<i", len(children))
        
    for child in children:
        child_type = child["type"]
        child_type_id = UI_TYPE_IDS.get(child_type, 0)
        writer.write("<i", child_type_id)
        write_ui_object(writer, child, version, has_sounds)
        
    writer.write_string(obj["id"])
    
    r = obj["region"]
    writer.write("<iiii", r["left"], r["top"], r["right"], r["bottom"])
    
    m = obj["movable"]
    writer.write("<iiii", m["left"], m["top"], m["right"], m["bottom"])
    
    writer.write("<I", obj["style"])
    writer.write("<I", obj["reserved"])
    
    writer.write_string(obj["tooltip"])
    if has_sounds:
        writer.write_string(obj["open_sound"])
        writer.write_string(obj["close_sound"])

def write_ui_object(writer, obj, version, has_sounds):
    ui_type = obj["type"]
    write_ui_base(writer, obj, version, has_sounds)
    
    if ui_type == "IMAGE":
        writer.write_string(obj["texture_file"])
        uv = obj["uv_rect"]
        writer.write("<ffff", uv["left"], uv["top"], uv["right"], uv["bottom"])
        writer.write("<f", obj["anim_frame"])
        
    elif ui_type == "BUTTON":
        cr = obj["click_rect"]
        writer.write("<iiii", cr["left"], cr["top"], cr["right"], cr["bottom"])
        if has_sounds:
            writer.write_string(obj["sound_on"])
            writer.write_string(obj["sound_click"])
        
    elif ui_type == "STATIC":
        if has_sounds:
            writer.write_string(obj["sound_click"])
        
    elif ui_type == "STRING":
        writer.write_string(obj["font_name"])
        if obj["font_name"]:
            writer.write("<I", obj["font_height"])
            writer.write("<I", obj["font_flags"])
        writer.write("<I", obj["color"])
        writer.write_string(obj["text"])
        if version >= 1264:
            writer.write("<i", obj["line_spacing"])
            
    elif ui_type == "EDIT":
        if has_sounds:
            writer.write_string(obj["sound_click"])
            writer.write_string(obj["sound_typing"])
        
    elif ui_type == "AREA":
        writer.write("<i", obj["area_type"])
        
    elif ui_type == "LIST":
        writer.write_string(obj["font_name"])
        if obj["font_name"]:
            writer.write("<I", obj["font_height"])
            writer.write("<I", obj["color"])
            writer.write("<i", obj["font_bold"])
            writer.write("<i", obj["font_italic"])

def decompile_uif(uif_path):
    with open(uif_path, "rb") as f:
        data = f.read()
        
    combinations = [
        (1264, True),
        (1264, False),
        (1098, True),
        (1098, False)
    ]
    for version, has_sounds in combinations:
        try:
            reader = BinaryReader(data)
            root = parse_ui_object(reader, "BASE", version, has_sounds)
            if reader.offset == len(data):
                return root, version, has_sounds
        except Exception:
            continue
            
    raise RuntimeError("Failed to parse UIF with any supported version combination")

def compile_uif(root, version, has_sounds, output_path):
    writer = BinaryWriter()
    write_ui_object(writer, root, version, has_sounds)
    with open(output_path, "wb") as f:
        f.write(writer.data)

def main():
    if len(sys.argv) < 3:
        print("Knight Online UI Tool - Decompile/Compile UIF Files")
        print("Usage:")
        print("  python uif_tool.py decompile <file.uif> [file.json]")
        print("  python uif_tool.py compile <file.json> [file.uif]")
        sys.exit(1)
        
    cmd = sys.argv[1].lower()
    src = sys.argv[2]
    
    if cmd == "decompile":
        dst = sys.argv[3] if len(sys.argv) > 3 else src + ".json"
        print(f"Decompiling {src} -> {dst}...")
        try:
            root, version, has_sounds = decompile_uif(src)
            meta = {
                "_uif_metadata": {
                    "version": version,
                    "has_sounds": has_sounds
                }
            }
            # Insert metadata at the top of the json
            root_with_meta = {}
            root_with_meta.update(meta)
            root_with_meta.update(root)
            
            with open(dst, "w", encoding="utf-8") as f:
                json.dump(root_with_meta, f, indent=4, ensure_ascii=False)
            print("Successfully decompiled!")
        except Exception as e:
            print(f"Error: {e}")
            sys.exit(1)
            
    elif cmd == "compile":
        dst = sys.argv[3] if len(sys.argv) > 3 else (src[:-5] if src.endswith(".json") else src + ".uif")
        print(f"Compiling {src} -> {dst}...")
        try:
            with open(src, "r", encoding="utf-8") as f:
                root_with_meta = json.load(f)
                
            meta = root_with_meta.pop("_uif_metadata", {"version": 1264, "has_sounds": True})
            version = meta.get("version", 1264)
            has_sounds = meta.get("has_sounds", True)
            
            compile_uif(root_with_meta, version, has_sounds, dst)
            print("Successfully compiled!")
        except Exception as e:
            print(f"Error: {e}")
            sys.exit(1)
    else:
        print(f"Unknown command: {cmd}")
        sys.exit(1)

if __name__ == "__main__":
    main()
