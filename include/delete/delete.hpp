#if !defined(DELTE_H)
#define DELTE_H
#include "alib.hpp"
#include <direct.h>
#include <iomanip>
#include <iostream>

void deleteCreated() {
    system("cls");
    alib::decorateMe("Delete Mode", 1, "-", true);
    std::cout << std::endl;

    std::cout << "Are you sure you want to delete the whole directory "
              "including files?\n";
    std::cout << std::endl;
    bool isSure;
    std::string options[2] = {"Yes", "No"};
    for (int i = 0; i < 2; i++) {
        std::cout << (i + 1) << ". " << options[i];
        std::cout << std::endl;
    }
    std::cout << std::endl;

    std::cout << rang::fg::blue << "Your choice: ";
    int choice;
    std::cin >> choice;
    std::cout << rang::fg::reset << std::endl;

    if (choice == 1) {
        isSure = true;
    } else {
        isSure = false;
    }

    // Main script calling
    if (isSure) {
        system("cls");
        std::cout << "Directory Deletion Started . . . . . . . . . . \n\n";
        system("wscript ..\\include\\delete\\deleterLauncher.vbs");
        std::cout
                << "########################-- Task Completed ! Successfully "
                "Deleted all the folders recursively --########################";
        std::cout << std::endl;
        std::cout << std::endl;
    } else if (isSure == false) {
        system("cls");
        std::cout << "Deletion cancelled. Nothing deleted !";
        std::cout << std::endl;

    } else {
        std::cout << "Inavlid Error Occured";
        std::cout << std::endl;
    }
}
#endif // DELTE_H
