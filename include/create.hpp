#if !defined(CREATE_H)
#define CREATE_H
#include <iostream>
#include <iomanip>
#include <vector>
#include <direct.h>

//variables
std::string semester;
int subjectNumber;
std::vector<std::string> subjects;
std::string subjectName;

void createFolder()
{
    std::cout << "Enter Semester Number: ";
    std::cin >> semester;
    std::cout << "How Many Subjects have you got: ";
    std::cin >> subjectNumber;

    for (int i = 0; i < subjectNumber; i++)
    {
        std::cout << "Enter subject no " << (i + 1) << " name: ";
        std::cin >> subjectName;
        subjects.push_back(subjectName);
    }

    // creating folders
    std::cout << "Creating the folders......" << std::endl;
    system("cls");

    //Semester Folder Creation
    std::string semesterPath = "D:\\University Study\\Study Materials\\1st Year\\" + semester;

    _mkdir(semesterPath.append("th Semester").c_str());

    //Subject creation
    for (int i = 0; i < subjects.size(); i++)
    {
        std::string subjectPath = "D:\\University Study\\Study Materials\\1st Year\\" +
                                  semester + "th Semester\\" + subjects[i] ; 

        _mkdir(subjectPath.c_str());
    }
}
#endif // CREATE_H