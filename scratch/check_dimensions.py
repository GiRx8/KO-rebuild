import os
from PIL import Image

icons_dir = 'assets/Client/ui/icons'
if os.path.exists(icons_dir):
    files = [f for f in os.listdir(icons_dir) if f.endswith('.png')][:5]
    print("Checking non-transparent bounding box for icons:")
    for file in files:
        path = os.path.join(icons_dir, file)
        try:
            img = Image.open(path)
            # Get bounding box of non-zero alpha channel
            bbox = img.getbbox()
            print(f"  {file}: Size {img.size}, Bounding Box {bbox}")
        except Exception as e:
            print(f"  Error reading {file}: {e}")
else:
    print("Icons directory does not exist.")
