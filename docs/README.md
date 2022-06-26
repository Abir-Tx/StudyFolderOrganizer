# StudyFolderOrganizer

[![Download Study Folder Organizer](https://img.shields.io/sourceforge/dm/studyfolderorganizer.svg)](https://sourceforge.net/projects/studyfolderorganizer/files/latest/download) [![C/C++ CI](https://github.com/Abir-Tx/StudyFolderOrganizer/actions/workflows/c-cpp.yml/badge.svg)](https://github.com/Abir-Tx/StudyFolderOrganizer/actions/workflows/c-cpp.yml)

![SFO Icon](https://raw.githubusercontent.com/Abir-Tx/StudyFolderOrganizer/main/res/SFO_v2.ico)

## About The Tool 
A console app for creating folders inside a drive in a structured and organized way for study purpose. It creates all the folders based on the user input at once so this saves the time of creating folders and managing them manually as a student. **Study Folder Organizer** is a command line tool to organize the life of a student. This tool helps to make a well structured directory of folders using year>semester>terms pattern for each subject. Creating these folders and managing the files after the end of every semester takes a lot of time. That's why I created this tool.

## New GUI Version
A new Graphical version of this project & tool is currently being developed and is available for download.
- Visit [this](https://github.com/Abir-Tx/StudyFolderOrganizer-GUI) link to get the tool

## Requirements
- The tool works only on Windows platforms (I have only tested it with **Windows 10** so far)
- x86 architecture cpu
- The executing user should have rw (Read, Write) permission for the drive which he/she wants to create folder

## Download Instructions
* Go to the **Release** section of this repo and select the version of your choice.
* Then just download the **StudyFolderOrgranizer_v1.0.exe** (The Version you like) on your Windows machine and run it.
* After opening the tool just enter in the create mode & then provide the Drive letter of your drive in which you want to keep your study files.


***Alternatively you can click here to download the latest version***-
> - [Latest Release & Source ](https://github.com/Abir-Tx/StudyFolderOrganizer/releases/latest)
> - **Click below to direct download the Latest tool**
> [![Download Now](https://github.com/Abir-Tx/StudyFolderOrganizer/blob/main/etc/SFO%20Readme%20Download%20Logo.png?raw=true)](https://github.com/Abir-Tx/StudyFolderOrganizer/releases/download/v2.0.0/StudyFolderOrgranizer_v2.0.0.zip)


## Compiling From Source
If `make` program is installed & added to your **Windows Path** then compiling is as easy as just clicking a button. 

- First clone the repo & change the directory to the cloned repo location
- Then at the root of the project run `make build` command and the project will be compiled and the compiled bin will be placed at ***bin*** folder. You can also run `make` to build & run at once

> For & Tested on Windows


## Troubleshooting
* > Some functionalities of the tool is not working/giving message like 'Directory Not Found'
    
    The app needs **Admisitative** permission to properly display all the functionality. If you get this kind of error try running the app as **Administrator**. In general, the app gets this permission when installing.



> If you find any bug or if you have any suggestions please create a new issue [here](https://github.com/Abir-Tx/StudyFolderOrganizer/issues/new/choose) or mail me at this >
> <abirtx@yandex.com>.
> #### All Contributions made & Rights Reserved By @Abir-Tx 
