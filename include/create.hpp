#if !defined(CREATE_H)
#define CREATE_H
#include <iostream>
#include <iomanip>
#include <vector>
#include <direct.h>

//variables
std::string year;
std::string semester;
int subjectNumber;
std::vector<std::string> subjects;
std::string subjectName;

std::vector<std::string> selectedFoldersName;
std::string termFoldersName;
int selectedFoldersNumber;
bool isManualCreationChoice = false;

void createFolder()
{
    std::cout<<"Which year: ";
    std::cin>>year;
    /* if (year<1 || year > 4 )     //Can't do this as year is string value
    {
        std::cout<<"Year cannot be more than 4 or less than 1"
    } */

    std::cout << "Enter Semester Number: ";
    std::cin >> semester;
    std::cout << "How Many Subjects have you got: ";
    std::cin >> subjectNumber;

    std::cout << "Lab or Theory: " << std::endl;
    std::cout << "1. Lab" << std::endl;
    std::cout << "2. Theory" << std::endl;

    int theoryOrLab;
    std::cin >> theoryOrLab;

    if (theoryOrLab == 2)   //THEORY
    {
        std::cout << "Do you want to manually specify folders under terms sections?" << std::endl;
        std::vector<std::string> yesNoOption;
        yesNoOption.push_back("Yes");
        yesNoOption.push_back("No");

        for (int i = 0; i < yesNoOption.size(); i++)
        {
            std::cout << (i + 1) << ". " << yesNoOption[i] << std::endl;
        }
        int choice;
        std::cin >> choice;
        if (choice == 1)
        {
            isManualCreationChoice = true;
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
            for (int i = 0; i < selectedFoldersNumber; i++)
            {
                std::cout << "Enter name of folder no " << (i + 1) << ": ";
                std::cin >> termFoldersName;
                selectedFoldersName.push_back(termFoldersName);
            }
        }
        else
        {
            std::cout << "Going with automatic creation";
            std::cout << std::endl;
            //Preloading the lessons folder
            selectedFoldersNumber = 1;
            selectedFoldersName.push_back("Lessons");
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
        
        //Year Creation
        std::string yearPath = "D:\\University Study\\Study Materials\\"+year;

        _mkdir(yearPath.append("st Year").c_str());

        //Semester Folder Creation
        std::string semesterPath = "D:\\University Study\\Study Materials\\"+year+"st Year\\" + semester;

        _mkdir(semesterPath.append("th Semester").c_str());

        //Theory Creation
        std::string theoryPath = "D:\\University Study\\Study Materials\\"+year+"st Year\\" + semester+ "th Semester\\" + "Theory";

        _mkdir(theoryPath.c_str());

        //Subject creation
        for (int i = 0; i < subjects.size(); i++)
        {
            std::string subjectPath = "D:\\University Study\\Study Materials\\"+year+"st Year\\" +
                                      semester + "th Semester\\" + "Theory\\" + subjects[i];

            _mkdir(subjectPath.c_str());
        }

        //Term creation
        for (int i = 0; i < subjects.size(); i++)
        {
            std::string midTermPath = "D:\\University Study\\Study Materials\\"+year+"st Year\\" +
                                      semester + "th Semester\\"  + "Theory\\" + subjects[i] + "\\Mid-Term";
            _mkdir(midTermPath.c_str());
        }
        for (int i = 0; i < subjects.size(); i++)
        {
            std::string finalTermPath = "D:\\University Study\\Study Materials\\"+year+"st Year\\" +
                                        semester + "th Semester\\"  + "Theory\\" + subjects[i] + "\\Final";
            _mkdir(finalTermPath.c_str());
        }

        //Inside Term Folders Creation

        for (int i = 0; i < subjects.size(); i++)
        {
            int k = 0;
            while (k != selectedFoldersNumber)
            {
                for (int j = 0; j < selectedFoldersNumber; j++)
                {
                    std::string midTermPath = "D:\\University Study\\Study Materials\\"+year+"st Year\\" +
                                              semester + "th Semester\\"  + "Theory\\" + subjects[i] + "\\Mid-Term\\" + selectedFoldersName[j];
                    _mkdir(midTermPath.c_str());

                    std::string finalTermPath = "D:\\University Study\\Study Materials\\"+year+"st Year\\" +
                                                semester + "th Semester\\"  + "Theory\\" + subjects[i] + "\\Final\\" + selectedFoldersName[j];
                    _mkdir(finalTermPath.c_str());
                }
                k++;
            }
        }
    }
}
#endif // CREATE_H