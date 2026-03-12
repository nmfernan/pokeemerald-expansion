#bulk prep text for sprites
import openpyxl as pyxl

from openpyxl.workbook import Workbook
from openpyxl import load_workbook

Debug = 1
WriteOrAdd = 'w'
Anim = False
GenName = "pkmnevolved"
PkmnData = load_workbook('pkmndata.xlsx')
PkmnDataFile = PkmnData['sanity-data']

with open("test_graphics.h", WriteOrAdd) as file:
    file.write("//data prep start\n")
    #for species in PkmnDataFile.iter_rows(min_row=2, max_row=PkmnDataFile.max_row, min_col=PkmnDataFile.min_column, max_col=PkmnDataFile.max_column):
    for species in PkmnDataFile.iter_rows(min_row=2, max_row=13, min_col=PkmnDataFile.min_column, max_col=PkmnDataFile.max_column):
        for data in species:
            if PkmnDataFile.cell(row = PkmnDataFile.min_row, column = data.column).value == ".natDexNeeded" and data.value == 1:
                fixCase = PkmnDataFile.cell(row = data.row, column = PkmnDataFile.min_column).value
                fixCase = fixCase[0] + fixCase[1:len(fixCase)].lower()
                
                if Anim == True:
                    file.write("\t const u32 gMonFrontPic_" + fixCase + "[] = INCBIN_U32(\"graphics/pokemon/" + fixCase.lower() + "/anim_front.4bpp.smol\");\n")
                else:
                    file.write("\t const u32 gMonFrontPic_" + fixCase + "[] = INCBIN_U32(\"graphics/pokemon/" + fixCase.lower() + "/front.4bpp.smol\");\n")
                
                file.write("\t const u32 gMonBackPic_" + fixCase + "[] = INCBIN_U32(\"graphics/pokemon/" + fixCase.lower() + "/back.4bpp.smol\");\n")
                file.write("\t const u16 gMonPalette_" + fixCase + "[] = INCBIN_U16(\"graphics/pokemon/" + fixCase.lower() + "/front.gbapal\");\n")
                file.write("\t const u16 gMonShinyPalette_" + fixCase + "[] = INCBIN_U16(\"graphics/pokemon/" + fixCase.lower() + "/back.gbapal\");\n")
                file.write("\t const u8 gMonIcon_" + fixCase + "[] = INCBIN_U8(\"graphics/pokemon/" + fixCase.lower() + "/icon.4bpp\");\n")
                file.write("\t const u8 gMonFootprint_" + fixCase + "[] = INCBIN_U8(\"graphics/pokemon/" + fixCase.lower() + "/footprint.1bpp\");\n")
                file.write("\n")

#might be needed in future to generate animations, etc
                
#        for data in species:
#            if PkmnDataFile.cell(row = PkmnDataFile.min_row, column = data.column).value == ".natDexNeeded" and data.value == 1:
#                fixCase = PkmnDataFile.cell(row = data.row, column = PkmnDataFile.min_column).value
#                fixCase = fixCase[0] + fixCase[1:len(fixCase)].lower()
#                file.write("SINGLE_ANIMATION(" + fixCase + ");\n")
#                file.write("\n")

#const u32 gMonFrontPic_Mewthree[] = INCBIN_U32("graphics/pokemon/mewthree/anim_front.4bpp.lz");
#const u32 gMonBackPic_Mewthree[] = INCBIN_U32("graphics/pokemon/mewthree/back.4bpp.lz");
#const u16 gMonPalette_Mewthree[] = INCBIN_U16("graphics/pokemon/mewthree/normal.gbapal");
#const u16 gMonShinyPalette_Mewthree[] = INCBIN_U16("graphics/pokemon/mewthree/shiny.gbapal");
#const u8 gMonIcon_Mewthree[] = INCBIN_U8("graphics/pokemon/mewthree/icon.4bpp");
#const u8 gMonFootprint_Mewthree[] = INCBIN_U8("graphics/pokemon/mewthree/footprint.1bpp");                