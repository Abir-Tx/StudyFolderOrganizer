/* A C++ source code file by Mushfiqur Rahman Abir. This terminal app is for
windows only. I am making this for personal usage case.
Anyone can modify this codes to meet their needs if they like the idea of the
software

Library Informations:
https://github.com/Abir-Tx/StudyFolderOrganizer/blob/main/docs/libs.md
*/

#include "../include/home.hpp"
#include <iostream>

int main() {
    int choice;
    do {
        home();
        std::cout << std::endl;
        std::cout << "Press 1 to go to homepage again & others to Exit: ";
        std::cin >> choice;
    } while (choice == 1);
    if (choice != 1) {
        system("cls");
        system("color 04");
        std::cout << "Exitin the program.......";
        exit(0);
    }
}