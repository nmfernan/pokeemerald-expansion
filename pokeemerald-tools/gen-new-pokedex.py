#Generate specific region and national dex entries
#Requires you to replace the EXISTING Dex with the regional dex result
#Append completely new pokemon to national dex (just makes it easier so other people can work with your game)

import openpyxl as pyxl

from openpyxl.utils import get_column_letter
from openpyxl.workbook import Workbook
from openpyxl import load_workbook

Debug = 1
WriteOrAdd = 'w'
GenName = "pkmnevolved"
PkmnData = load_workbook('pkmndata.xlsx')
PkmnDataFile = PkmnData['sanity-data']
Region = "KANTO"
National = "NATIONAL"
#SpeciesIndex = 1573 #based on mega_glimmora being 1572
SpeciesIndex = 0 #based on making new species.h

#Print high level information about datafile being accessed
if Debug:
    print(f"First row for species {PkmnDataFile.min_row}")
    print(f"Last row for species {PkmnDataFile.max_row}")
    print(f"First column of species-data ")
    print(f"Last column of species-data  ")
    print(f"First column of tutor-data #{PkmnDataFile.min_column}, Letter:{get_column_letter(PkmnDataFile.min_column)}")
    print(f"Last column of tutor-data  #{PkmnDataFile.max_column}, Letter:{get_column_letter(PkmnDataFile.max_column)}")

with open("species.h", WriteOrAdd) as file:
    file.write("//Species File Update\n")
    file.write("#ifndef GUARD_CONSTANTS_SPECIES_H\n")
    file.write("#define GUARD_CONSTANTS_SPECIES_H\n\n")
    file.write(f"#define SPECIES_NONE \t\t {SpeciesIndex} \n")
    SpeciesIndex += 1
    
    for species in PkmnDataFile.iter_rows(min_row=2, max_row=PkmnDataFile.max_row, min_col=1, max_col=1):
        for data in species:
#             if PkmnDataFile.cell(row = PkmnDataFile.min_row, column = data.column).value == ".natDexNeeded" and data.value == 1:
#                 file.write(f"\t#define SPECIES_ {PkmnDataFile.cell(row = data.row, column = PkmnDataFile.min_column).value} \t\t {SpeciesIndex} \n")
#                 SpeciesIndex += 1
            file.write(f"#define SPECIES_{PkmnDataFile.cell(row = data.row, column = PkmnDataFile.min_column).value}\t\t{SpeciesIndex}\n")
            SpeciesIndex += 1
    
    file.write(f"\n#define SPECIES_EGG\t\t{SpeciesIndex}\n")
    file.write(f"#define NUM_SPECIES SPECIES_EGG\n")
    file.write(f"#define SPECIES_SHINY_TAG 5000\n")
    file.write(f"#endif  // GUARD_CONSTANTS_SPECIES_H\n")
    
    file.write("//end of program")       

with open("pokedex.h", WriteOrAdd) as file:   
    file.write("//National Dex Start\n")
    file.write("#ifndef GUARD_CONSTANTS_POKEDEX_H\n")
    file.write("#define GUARD_CONSTANTS_POKEDEX_H\n\n")
    file.write("// National Pokédex order\n")
    file.write("// These constants are NOT disabled by P_GEN_X_POKEMON to keep pokedex_orders.h clean.\n")
    file.write("enum NationalDexOrder\n{\n")
    file.write("\tNATIONAL_DEX_NONE\n")
    file.write("\t//" + National + " Dex Start\n")

    for species in PkmnDataFile.iter_rows(min_row=2, max_row=PkmnDataFile.max_row, min_col=1, max_col=1):
        for data in species:
            #if PkmnDataFile.cell(row = PkmnDataFile.min_row, column = data.column).value == ".natDexNeeded" and data.value == 1:
            file.write("\t" + National + "_DEX_" + PkmnDataFile.cell(row = data.row, column = PkmnDataFile.min_column).value + ",\n")
        
    file.write("};\n\n")
    file.write(f"#define NATIONAL_DEX_COUNT NATIONAL_DEX_{PkmnDataFile.cell(PkmnDataFile.max_row,PkmnDataFile.min_column).value}\n")
    file.write(f"#define POKEMON_SLOTS_NUMBER NATIONAL_DEX_COUNT + 1\n")
    
    
    file.write("// Kanto Pokédex order\n\n")
    file.write("enum KantoDexOrder\n{\n")
    file.write("\tKANTO_DEX_NONE\n")
    file.write("\t//" + Region + " Dex Start\n")

    for species in PkmnDataFile.iter_rows(min_row=2, max_row=PkmnDataFile.max_row, min_col=1, max_col=1):
        for data in species:
            if PkmnDataFile.cell(row = PkmnDataFile.min_row, column = data.column).value == ".speciesName":
                file.write("\t" + Region + "_DEX_" + data.value + ",\n")

    file.write("};\n\n")
    file.write(f"#define KANTO_DEX_COUNT (KANTO_DEX_{PkmnDataFile.cell(PkmnDataFile.max_row,PkmnDataFile.min_column).value} + 1)\n")
    file.write(f"#define HOENN_DEX_COUNT 1\n\n")
    file.write(f"#define REGIONAL_DEX_COUNT (IS_FRLG ? KANTO_DEX_COUNT : HOENN_DEX_COUNT)\n\n")
    
    file.write("#define DECAGRAMS_IN_POUND             4536\n")
    file.write("#define CM_PER_INCH                    2.54\n")
    file.write("#define CM_PER_INCH_FACTOR             (CM_PER_INCH * 100)\n")
    file.write("#define INCHES_IN_FOOT                 12\n")
    file.write("#define INCHES_IN_ONE_AND_HALF_FOOT    (INCHES_IN_FOOT * 1.5)\n")
    file.write("#define INCHES_IN_FOOT_FACTOR          (INCHES_IN_FOOT * 10)\n\n")
    
    file.write("#define WEIGHT_HEIGHT_STR_LEN          16\n")
    file.write("#define WEIGHT_HEIGHT_STR_MEM          (WEIGHT_HEIGHT_STR_LEN * sizeof(u8))\n\n")
    
    file.write("#define DEX_HEADER_X                   96\n")
    file.write("#define DEX_Y_TOP                      57\n")
    file.write("#define DEX_Y_BOTTOM                   73\n")
    file.write("#define DEX_MEASUREMENT_X              129\n\n")
    
    file.write("#define DEX_HGSS_HEADER_X_PADDING      59\n")
    file.write("#define DEX_HGSS_Y_TOP_PADDING         7\n") 
    file.write("#define DEX_HGSS_Y_BOTTOM_PADDING      4\n")
    file.write("#define DEX_HGSS_MEASUREMENT_X_PADDING 51\n\n")

    file.write("enum\n{\n\tDEX_MODE_HOENN,\n")
    file.write("\tDEX_MODE_NATIONAL\n};\n\n")
    
    file.write("enum\n{\n\tFLAG_GET_SEEN,\n")
    file.write("\tFLAG_GET_CAUGHT,\n")
    file.write("\tFLAG_SET_SEEN,\n")
    file.write("\tFLAG_SET_CAUGHT\n};\n\n")
    file.write("#endif")
    
#     file.write("\n//" + Region + " to National Dex Start\n")
#     for species in PkmnDataFile.iter_rows(min_row=2, max_row=PkmnDataFile.max_row, min_col=PkmnDataFile.min_column, max_col=PkmnDataFile.max_column):
#         for data in species:
#             if PkmnDataFile.cell(row = PkmnDataFile.min_row, column = data.column).value == ".natDexNeeded" and data.value == 1:
#                 file.write("\t"+ Region + "_TO_" + National + "(" + PkmnDataFile.cell(row = data.row, column = PkmnDataFile.min_column).value + "),\n")
    
    
    file.write("//end of program")