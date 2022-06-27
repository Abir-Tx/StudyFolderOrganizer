#if !defined(ABOUT_H)
#define ABOUT_H
#include "alib.hpp"
#include <iomanip>
#include <iostream>

void about() {
    system("cls");
    alib::decorateMe("About SFO", 1, "-", true);

    std::cout << "SFO stands for Study Folder Organizer. Developed & managed "
              "by Mushfiqur Rahman Abir. "
              << "This small tool allows to manage a student's university's "
              "digital files in a organized way."
              << "This app creates a structured directory to specified drive "
              "for managing and keeping files";
    std::cout << std::endl;
    std::cout << std::endl;
    std::cout << std::endl;
}
#endif // ABOUT_H