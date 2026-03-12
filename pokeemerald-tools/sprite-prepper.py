#Tool for creating new gen.h files for emerald expansion
#Takes information from excel sheet and prepares .h file for custom pokemon
import os
import re
import shutil
import openpyxl as pyxl

from openpyxl.workbook import Workbook
from openpyxl import load_workbook

FrontSprite = "front.png"
BackSprite = "back.png"
Icon = "icon.png"
#FolderPath = "graphics"

#Globals for making header, opening data, debug prints, etc
PkmnData = load_workbook('/home/nicksnax/pokeemerald-expansion/pokeemerald-tools/pkmndata.xlsx')
PkmnDataFile = PkmnData['sanity-data']

#print(os.walk('.'))

root_directory = "."
print(f"FrontSprite Dir: {os.path.isdir("./FrontSprite")}")
print(f"BackSprite Dir: {os.path.isdir("./BackSprite")}")
print(f"FrontSpriteShiny Dir: {os.path.isdir("./FrontSpriteShiny")}")
print(f"BackSpriteShiny Dir: {os.path.isdir("./BackSpriteShiny")}")
print(f"Icon Dir: {os.path.isdir("./Icon")}\n")
os.makedirs("graphics", exist_ok = True)

#Step through source file and see if sprite files have a matching sprite
#for species in PkmnDataFile.iter_rows(min_row=2, max_row=2, min_col=1, max_col=1):
for species in PkmnDataFile.iter_rows(min_row=2, max_row=PkmnDataFile.max_row, min_col=1, max_col=1):
    for data in species:
        for file in os.listdir("./FrontSprite"):
            fileSplit = re.split(r"[_.]",file)
            #print(fileSplit)
            for word in fileSplit:
                if data.value == word:
                    os.makedirs(f"graphics/{data.value.lower()}", exist_ok = True)
                    shutil.copy(f"FrontSprite/{file}", f"graphics/{data.value.lower()}/front.png")
#         for file in os.listdir("./FrontSpriteShiny"):
#             if data.value in file:
#                 os.makedirs(f"graphics/{data.value.lower()}", exist_ok = True)
#                 shutil.copy(f"FrontSpriteShiny/{file}", f"graphics/{data.value.lower()}/front-shiny.png")
#         for file in os.listdir("./BackSprite"):
#             if data.value in file:
#                 os.makedirs(f"graphics/{data.value.lower()}", exist_ok = True)
#                 shutil.copy(f"BackSprite/{file}", f"graphics/{data.value.lower()}/back.png")
        for file in os.listdir("./BackSpriteShiny"):#backsprite copy name is still shiny due to palette generation of make
            fileSplit = re.split(r"[_.]",file)
            #print(fileSplit)
            for word in fileSplit:
                if data.value == word:
                    os.makedirs(f"graphics/{data.value.lower()}", exist_ok = True)
                    shutil.copy(f"BackSpriteShiny/{file}", f"graphics/{data.value.lower()}/back.png")
        for file in os.listdir("./Icon"):
            fileSplit = re.split(r"[_.]",file)
            #print(fileSplit)
            for word in fileSplit:
                if data.value == word:
                    os.makedirs(f"graphics/{data.value.lower()}", exist_ok = True)
                    shutil.copy(f"Icon/{file}", f"graphics/{data.value.lower()}/icon.png")
