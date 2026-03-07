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

with open('test.h', WriteOrAdd) as file:
    file.write(Header +  "\n")
    if 
    file.write(
    if Debug:
        file.write("//end of program")
