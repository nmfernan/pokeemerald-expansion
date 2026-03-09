from pypalex.Extractor import Extractor
from pypalex.file_utils import save_palettes

extractor = Extractor()
extractor.load("graphics.pokemon.sprites.front_1_BULBASAUR.png")
extractor.set_color_format("rgb")
extractor.run()

adaptive_palettes = extractor.generate_adaptive_palettes(light_palette_name="light", dark_palette_name="dark")
save_palettes(
    adaptive_palettes,
    image_name="my_palette",
    output_path="/home/nicksnax/pokeemerald-expansion/pokeemerald-tools/",
    export_file_format="json",
    export_color_format="rgb"
)