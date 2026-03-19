#Make Encounters .json
#Takes information from excel sheet and prepares .h file for custom pokemon
import time
import openpyxl as pyxl

from openpyxl.utils import get_column_letter
from openpyxl.workbook import Workbook
from openpyxl import load_workbook

start = time.time()

#Globals for execution
Debug = 1
WriteOrAdd = 'w'
GenName = "Evo"
FileName = "wild_encounters.json"
PkmnData = load_workbook('encounter-data-evolved.xlsx')
SheetName = "final-encounter-data"

if SheetName in PkmnData.sheetnames:
    PkmnDataFile = PkmnData[SheetName]
else:
    print(f"No sheet found")
    print(f"{PkmnData.sheetnames}")

CurrentFamily = ""
CurrentSpecies = ""
CurrentSpeciesCptl = ""
Attribute = ""

PkmnData = load_workbook('encounter-data-evolved.xlsx')
#SheetName = "encounter-data-low-level-parse"
SheetName = "next-data"


if SheetName in PkmnData.sheetnames:
    PkmnDataFile = PkmnData[SheetName]
else:
    print(f"No sheet found")
    print(f"{PkmnData.sheetnames}")



with open(FileName, WriteOrAdd) as file:
