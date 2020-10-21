@echo off
::This works only on windows & matching the dir told in the section 2
::This batch file compile the SFO project with rc file and details and icons making it ready for redistibuting

cls
::Section 1: Designing
title SFO Release Version Builder
color 04
echo ==========================================================
echo 		WELCOME TO SFO RV BUILDER	            
echo ==========================================================
echo Starting the build in 5 seconds:
timeout /t 5

::Section 2: Running Git Pull
cd C:\Users\Abir_\Code\GitHub\StudyFolderOrganizer
git pull


::Section 2: Compiling
windres .\res\res.rc .\bin\res.o
g++ -c .\src\StudyFolderOrgranizer.cpp -o .\bin\StudyFolderOrgranizer.o
g++ -m32 -v .\bin\res.o .\bin\StudyFolderOrgranizer.o -o .\bin\StudyFolderOrgranizer.exe -finline-functions -static-libgcc -static-libstdc++

::Section 3: Cleanup & Openning DIR
::color 09
echo Beginning the cleanup and Openning process.......
timeout /t 5
del .\bin\StudyFolderOrgranizer.o
del .\bin\res.o

start C:\Users\Abir_\Code\GitHub\StudyFolderOrganizer\bin /NORMAL /MAX

::pause
::END 
