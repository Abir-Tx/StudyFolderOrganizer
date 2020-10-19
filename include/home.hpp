#if !defined(HOME_H)
#define HOME_H

#include <iostream>
#include <vector>
#include <direct.h>
#include <iomanip>

//User Defined Headers
#include "../include/create.hpp"
#include "../include/driveLetterTaker.hpp"
#include "../include/rootDirCreator.hpp"
#include "../include/abut.hpp"

void homeDesign()
{
    std::string title = "Study Folder Organizer";
    std::cout << std::setw(80) << std::setfill(' ') << title << std::endl
              << std::endl;
}

void home()
{
    system("cls");
    homeDesign();

    std::cout << "Your Options: " << std::endl;

    std::vector<std::string> homeOptions = {"Create Mode", "About"};

    for (int i = 0; i < homeOptions.size(); i++)
    {
        std::cout << (i + 1) << ". " << homeOptions[i] << std::endl;
    }
    std::cout << "Your choice: " << std::endl;
    int choice;
    std::cin >> choice;
    std::cout << std::endl;

    switch (choice)
    {
    case 1:
    {
        driveTaker();
        rootDirCreator();
        createFolder(driveLetter);
    }
    break;
    case 2:
        about();
        break;
    default:
        std::cout << "Invalid";
        break;
    }
}

#endif // HOME_H
