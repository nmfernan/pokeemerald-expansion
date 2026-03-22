#Tool for creating new gen.h files for emerald expansion
#Takes information from excel sheet and prepares .h file for custom pokemon
import os
import re
import shutil
import openpyxl as pyxl

from openpyxl.workbook import Workbook
from openpyxl import load_workbook

Debug = 0
Clean = 1

FrontSprite = "front.png"
BackSprite = "back.png"
Icon = "icon.png"
InputFolderPath = "Sprites-MASTER/"
FrontSpritePath = "FrontSprite"
FrontSpriteShinyPath = "FrontSpriteShiny"
BackSpritePath = "BackSprite"
BackSpriteShinyPath = "BackSpriteShiny"
IconPath = "Icon"
OutputFolderPath = "graphics"

SpecialCases = ["NIDORAN_M",#Nidoran_m
                "NIDORAN_F",#Nidoran_f
                "MR_MIME",#mr mime
                "MR_JEST",#mr jest
                "MR_FOOL"]#mr fool

#Globals for making header, opening data, debug prints, etc
PkmnData = load_workbook('pkmndata.xlsx')
PkmnDataFile = PkmnData['sanity-data']

# print(f"FrontSprite Dir: {os.path.isdir(InputFolderPath + FrontSpritePath)}")
# print(f"BackSprite Dir: {os.path.isdir(InputFolderPath + BackSpritePath)}")
# print(f"FrontSpriteShiny Dir: {os.path.isdir(InputFolderPath + FrontSpriteShinyPath)}")
# print(f"BackSpriteShiny Dir: {os.path.isdir(InputFolderPath + BackSpriteShinyPath)}")
# print(f"Icon Dir: {os.path.isdir(InputFolderPath + IconPath)}\n")
# os.makedirs(OutputFolderPath, exist_ok = True)

if Clean == 1:
    print(os.listdir())