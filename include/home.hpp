#if !defined(HOME_H)
#define HOME_H

#include "alib.hpp"
#include <direct.h>
#include <iomanip>
#include <iostream>
#include <vector>

// User Defined Headers
#include "../include/abut.hpp"
#include "../include/create.hpp"
#include "../include/delete/delete.hpp"
#include "../include/dirTree.hpp"
#include "../include/driveLetterTaker.hpp"
#include "../include/rootDirCreator.hpp"

void homeDesign() {
    system("color 04");
    system("title Study Folder Organizer");
    std::string title = "Study Folder Organizer";

    alib::decorateMe("Study Folder Organizer", 2, "_", true);
}

void home() {
    system("cls");
    homeDesign();

    std::cout << "Your Options: " << std::endl;

    std::vector<std::string> homeOptions = {
        "Create Mode", "About", "Directory Tree", "Delete Mode", "Exit"};

    for (int i = 0; i < homeOptions.size(); i++) {
        std::cout << (i + 1) << ". " << homeOptions[i] << std::endl;
    }
    std::cout << "Your choice: ";
    int choice;
    std::cin >> choice;
    std::cout << std::endl;

    switch (choice) {
    case 1: {
        system("cls");
        std::cout << std::setw(80) << std::setfill(' ') << "Create Mode";
        std::cout << std::endl;

        driveTaker();
        rootDirCreator();
        createFolder(driveLetter);
    } break;
    case 2:
        about();
        break;
    case 3:
        dirTree();
        break;
    case 4:
        deleteCreated();
        break;
    case 5:
        system("cls");
        system("color 04");
        std::cout << "Exitin the program.......";
        exit(0);
        break;
    default:
        std::cout << "Invalid";
        break;
    }
}

#endif // HOME_H
