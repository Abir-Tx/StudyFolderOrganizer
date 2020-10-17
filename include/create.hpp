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
std::vector<std::string> selectedFoldersName;
int selectedFoldersNumber;
bool isManualCreationChoice = false;

void createFolder()
{
    std::cout << "Enter Semester Number: ";
    std::cin >> semester;
    std::cout << "How Many Subjects have you got: ";
    std::cin >> subjectNumber;



    std::cout << "Do you want to manually specify folders under terms sections?" << std::endl;
    std::string yesNoOption = {"Yes", "No"};
    for (int i = 0; i < yesNoOption.size(); i++)
    {
        std::cout << (i + 1) << ". " << yesNoOption[i] << std::endl;
    }
    int choice;
    std::cin >> choice;
    if (choice == 1)
    {
        manualCreationChoice = true;
    }
    else if (choice == 2)
    {
        isManualCreationChoice = false;
    }
    else
    {
        std::cout << "Bad input. Going with automatic creation" << std::endl;
        isManualCreationChoice = true;
    }

    if (isManualCreationChoice == true)
    {
        std::cout << "How many folders you wanna create inside the Term Folders (Lessons Excluded): ";
        std::cin >> selectedFoldersNumber;
        for (int i = 0; i < selectedFolderNumber; i++)
        {
            std::cout << "Enter name of folder no: " << (i + 1);
            std::cin >> selectedFoldersName;
            subjects.push_back(selectedFoldersName);
        }
    }
    else
    {
        std::cout << "Going with automatic creation";
        std::cout << std::endl;
        //Preloading the lessons folder
        selectedFolders.push_back("Lessons");
    }



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
                                  semester + "th Semester\\" + subjects[i];

        _mkdir(subjectPath.c_str());
    }

    //Term creation
    for (int i = 0; i < subjects.size(); i++)
    {
        std::string midTermPath = "D:\\University Study\\Study Materials\\1st Year\\" +
                                  semester + "th Semester\\" + subjects[i] + "\\Mid-Term";
        _mkdir(midTermPath.c_str());
    }
    for (int i = 0; i < subjects.size(); i++)
    {
        std::string finalTermPath = "D:\\University Study\\Study Materials\\1st Year\\" +
                                    semester + "th Semester\\" + subjects[i] + "\\Final";
        _mkdir(finalTermPath.c_str());
    }

    //Inside Term Folders Creation

    for (int i = 0; i < selectedFoldersNumber; i++)
    {
        std::string midTermPath = "D:\\University Study\\Study Materials\\1st Year\\" +
                                  semester + "th Semester\\" + subjects[i] + "\\Mid-Term\\" + selectedFolders[i];
        _mkdir(midTermPath.c_str());
    }
}
#endif // CREATE_H