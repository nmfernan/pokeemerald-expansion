#Tool for creating new gen.h files for emerald expansion
#Takes information from excel sheet and prepares .h file for custom pokemon
import openpyxl as pyxl

from openpyxl.workbook import Workbook
from openpyxl import load_workbook

#Globals for making header, opening data, debug prints, etc
Debug = 1
WriteOrAdd = 'w'
GenName = "pkmnevolved"
PkmnData = load_workbook('pkmndata.xlsx')
PkmnDataFile = PkmnData.active

#Header Description for files, etc
Header ="""//gen file for """ + GenName + """
#ifdef __INTELLISENSE__
const struct SpeciesInfo gSpeciesInfo""" + GenName + """[] =
{
#endif"""

#Definiton of species information in array format for adding to .h file when iterating through data values
SpeciesStructAttributes = []
for row in PkmnDataFile.iter_rows(min_row=1, max_row=1, min_col=1, max_col=PkmnDataFile.max_column):
    for data in row:
        SpeciesStructAttributes.append(str(data.value))
        #print(data.value)

with open('test.h', WriteOrAdd) as file:
    #Print high level information about datafile being accessed
    if Debug:
        print(f"First row for species {PkmnDataFile.min_row}")
        print(f"Last row for species {PkmnDataFile.max_row}")
        print(f"First column of species-data {PkmnDataFile.min_column}")
        print(f"Last column of species-data  {PkmnDataFile.max_column}")
    
    #Write top level information to species file
    file.write(Header +  "\n")           

    #Begin writing species information to .h file
    if Debug == 1:
        for species in PkmnDataFile.iter_rows(min_row=2, max_row=5, min_col=1, max_col=PkmnDataFile.max_column):
        #for species in PkmnDataFile.iter_rows(min_row=1, max_row=PkmnDataFile.max_row, min_col=1, max_col=PkmnDataFile.max_column):
            if species[PkmnDataFile.max_column-1].value == 1:
                print("New Species Found")
                file.write("#if P_FAMILY_" + species[PkmnDataFile.min_column-1].value + "\n")
            file.write("\t[SPECIES_" + species[PkmnDataFile.min_column - 1].value + "] =\n")
            file.write("\t{\n")
            for data in species:
                file.write("\t\t" + SpeciesStructAttributes[data.column-1] + " = " + str(data.value) + ",\n")
                
                
            #for data in species:
                #print(data.value)
    
    elif Debug == 0:
        for species in PkmnDataFile.rows:
            for data in species:
                if data.max_column.value == 1:
                    print("New Species Found")
                print(data.value)

    if Debug:
        file.write("//end of program")
