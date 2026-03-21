#Tool for creating new gen.h files for emerald expansion
#Takes information from excel sheet and prepares .h file for custom pokemon
import time
import openpyxl as pyxl

from openpyxl.utils import get_column_letter
from openpyxl.workbook import Workbook
from openpyxl import load_workbook

#Globals for making header, opening data, debug prints, etc
Debug = 0
WriteOrAdd = 'w'

FileName = "battles.xlsx"
GenName = "PkmnEvolved"

PkmnData = load_workbook('trainer-data.xlsx')
#SheetName = "low-level-data-raw"
SheetName = "low-level-data-final"

if SheetName in PkmnData.sheetnames:
    PkmnDataFile = PkmnData[SheetName]
else:
    print(f"No sheet found")
    print(f"{PkmnData.sheetnames}")

if Debug:
    print(f"First row for species {PkmnDataFile.min_row}")
    print(f"Last row for species {PkmnDataFile.max_row}")
    print(f"First column of species-data {PkmnDataFile.min_column}")
    print(f"Last column of species-data  {PkmnDataFile.max_column}")
    print(f"First column of tutor-data #{PkmnDataFile.min_column}, Letter:{get_column_letter(PkmnDataFile.min_column)}")
    print(f"Last column of tutor-data  #{PkmnDataFile.max_column}, Letter:{get_column_letter(PkmnDataFile.max_column)}")    

start = time.time()

for row in PkmnDataFile.iter_rows(min_row=2, max_row=PkmnDataFile.max_row, min_col=PkmnDataFile.min_column, max_col=1):
#for row in PkmnDataFile.iter_rows(min_row=2, max_row=5, min_col=PkmnDataFile.min_column, max_col=1):
    data = str(row[0].value)
    data = data.split(",")
    print(data)
    if data[0] == "NEW_TRAINER":
#        for item in data:
        print("new trainer")
        continue
    else:
#        for item in data:
        print("new mon")
        continue

end = time.time()
PkmnData.save(FileName)
PkmnData.close()
print(f"{end-start} seconds")
print("Program completed")
