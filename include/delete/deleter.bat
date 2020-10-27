@echo off
title Study Folder Deleter
color 04

:: Main Section
FOR /F "tokens=* delims=" %%x in (C:\\SFO\\Data\\DriveLetterKeeper.dat) DO set driveHolder=%%x
@REM Reades the text file and stores in the Var driveHolder


@REM Deleting the Folder
if NOT EXIST %driveHolder%:\\"University Study" GOTO warn

if exist %driveHolder%:\\"University Study" GOTO delete



: delete
rmdir %driveHolder%:\\"University Study" /S /Q
msg %username% "The Directory has been deleted successfully"
EXIT /B 0

: warn
@REM cscript msg.vbs "This will be shown in a popup."
msg %username% "The Directory has not been created yet ! Current Username %username%"
exit
EXIT /B 0

pause