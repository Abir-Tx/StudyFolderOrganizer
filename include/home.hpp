#if !defined(HOME_H)
#define HOME_H

#include <iostream>
#include <vector>
#include <direct.h>

//User Defined Headers
#include "../include/create.hpp"
void home()
{
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
        createFolder();
    }
    break;
    default:
        std::cout << "Invalid";
        break;
    }
}

#endif // HOME_H
