#make palettes
from Pylette import extract_colors

palette = extract_colors(image='graphics.pokemon.sprites.front_12_CHARIATHAN.png', palette_size = 16, mode = 'MedianCut')
for color in palette.colors:
#    print(f"Hex: {color.hex},RGB: {color.rgb}")
    print(f"{color.rgb}")

palette = extract_colors(image='graphics.pokemon.sprites.front_12_CHARIATHAN.png', palette_size = 16, mode = 'KMeans')
for color in palette.colors:
    print(f"Hex: {color.hex},RGB: {color.rgb}")