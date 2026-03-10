#make palettes
from Pylette import extract_colors

palette = extract_colors(image='graphics.pokemon.sprites.front_1_BULBASAUR.png', palette_size = 15, mode = 'MedianCut')
for color in palette.colors:
    print(f"Hex: {color.hex},RGB: {color.rgb}")
    
palette = extract_colors(image='graphics.pokemon.sprites.front_1_BULBASAUR.png', palette_size = 15, mode = 'KMeans')
for color in palette.colors:
    print(f"Hex: {color.hex},RGB: {color.rgb}")