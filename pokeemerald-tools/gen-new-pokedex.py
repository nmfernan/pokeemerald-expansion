#Generate specific region and national dex entries
#Requires you to replace the EXISTING Dex with the regional dex result
#Append completely new pokemon to national dex (just makes it easier so other people can work with your game)

import openpyxl as pyxl

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

with open("test_pokedex.h", WriteOrAdd) as file:
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
       
#     file.write("//National Dex Start\n")
#     for species in PkmnDataFile.iter_rows(min_row=2, max_row=PkmnDataFile.max_row, min_col=PkmnDataFile.min_column, max_col=PkmnDataFile.max_column):
#         for data in species:
#             if PkmnDataFile.cell(row = PkmnDataFile.min_row, column = data.column).value == ".natDexNeeded" and data.value == 1:
#                 file.write("\t" + National + "_DEX_" + PkmnDataFile.cell(row = data.row, column = PkmnDataFile.min_column).value + ",\n")
    
    file.write("\n//" + Region + " Dex Start\n")
    for species in PkmnDataFile.iter_rows(min_row=2, max_row=PkmnDataFile.max_row, min_col=1, max_col=1):
        for data in species:
            if PkmnDataFile.cell(row = PkmnDataFile.min_row, column = data.column).value == ".speciesName":
                file.write("\t" + Region + "_DEX_" + data.value + ",\n")
    
#     file.write("\n//" + Region + " to National Dex Start\n")
#     for species in PkmnDataFile.iter_rows(min_row=2, max_row=PkmnDataFile.max_row, min_col=PkmnDataFile.min_column, max_col=PkmnDataFile.max_column):
#         for data in species:
#             if PkmnDataFile.cell(row = PkmnDataFile.min_row, column = data.column).value == ".natDexNeeded" and data.value == 1:
#                 file.write("\t"+ Region + "_TO_" + National + "(" + PkmnDataFile.cell(row = data.row, column = PkmnDataFile.min_column).value + "),\n")
    
    
    file.write("//end of program")