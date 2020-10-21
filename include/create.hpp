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

std::vector<std::string> labSubjects;
int labSubjectsNumber;
std::string labSubjectsName;

int gotoLabOrTheory;

void createFolder(std::string driveLetter)
{
    std::cout << "Which year: ";
    std::cin >> year;
    /* if (year<1 || year > 4 )     //Can't do this as year is string value
    {
        std::cout<<"Year cannot be more than 4 or less than 1"
    } */

    std::cout << "Enter Semester Number: ";
    std::cin >> semester;

    std::string parentDir = driveLetter + ":\\University Study\\Study Materials\\";

    //Year Creation
    std::string yearPath = parentDir + year;

    _mkdir(yearPath.append("st Year").c_str());

    //Semester Folder Creation
    std::string semesterPath = parentDir + year + "st Year\\" + semester;

    _mkdir(semesterPath.append("th Semester").c_str());


    do
    {
        std::cout << "Lab or Theory: " << std::endl;
        std::cout << "1. Lab" << std::endl;
        std::cout << "2. Theory" << std::endl;

        int theoryOrLab = 0;
        std::cout<<"Enter your choice: ";
        std::cin >> theoryOrLab;

        switch (theoryOrLab)
        {
            case 1:
            {
                std::cout << "How many Lab subjects have you got: ";
                std::cin >> labSubjectsNumber;

                for (int i = 0; i < labSubjectsNumber; i++)
                {
                    std::cout << "Enter Lab Subject no " << (i + 1) << " name: ";
                    std::cin >> labSubjectsName;
                    labSubjects.push_back(labSubjectsName);
                }

                // folder creation:
                system("cls");
                //Lab Creation
                std::string labPath = parentDir + year + "st Year\\" + semester + "th Semester\\" + "Lab";

                _mkdir(labPath.c_str());

                //Subject creation
                for (int i = 0; i < labSubjectsNumber; i++)
                {
                    std::string labSubjectPath = parentDir + year + "st Year\\" +
                                                semester + "th Semester\\" + "Lab\\" + labSubjects[i];

                    _mkdir(labSubjectPath.c_str());
                }

                //Term creation
                for (int i = 0; i < labSubjectsNumber; i++)
                {
                    std::string labMidTermPath = parentDir + year + "st Year\\" +
                                            semester + "th Semester\\" + "Lab\\" + labSubjects[i] + "\\Mid-Term";
                    _mkdir(labMidTermPath.c_str());
                }
                for (int i = 0; i < labSubjectsNumber; i++)
                {
                    std::string labFinalTermPath = parentDir + year + "st Year\\" +
                                                semester + "th Semester\\" + "Lab\\" + labSubjects[i] + "\\Final";
                    _mkdir(labFinalTermPath.c_str());
                }
                break;
            }
            case 2:
            {
                std::cout << "How Many Theory Subjects have you got: ";
                std::cin >> subjectNumber;
                std::cout << "Do you want to manually specify folders under terms sections?" << std::endl;
                std::vector<std::string> yesNoOption;
                yesNoOption.push_back("Yes");
                yesNoOption.push_back("No");

                for (int i = 0; i < yesNoOption.size(); i++)
                {
                    std::cout << (i + 1) << ". " << yesNoOption[i] << std::endl;
                }
                int choice;
                std::cout<<"Enter your choice: ";
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
                    std::cout << "(Going with automatic creation....)";
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
                system("cls");
                std::cout << "Creating the folders......" << std::endl;

                //Theory Creation
                std::string theoryPath = parentDir + year + "st Year\\" + semester + "th Semester\\" + "Theory";

                _mkdir(theoryPath.c_str());

                //Subject creation
                for (int i = 0; i < subjects.size(); i++)
                {
                    std::string subjectPath = parentDir + year + "st Year\\" +
                                            semester + "th Semester\\" + "Theory\\" + subjects[i];

                    _mkdir(subjectPath.c_str());
                }

                //Term creation
                for (int i = 0; i < subjects.size(); i++)
                {
                    std::string midTermPath = parentDir + year + "st Year\\" +
                                            semester + "th Semester\\" + "Theory\\" + subjects[i] + "\\Mid-Term";
                    _mkdir(midTermPath.c_str());
                }
                for (int i = 0; i < subjects.size(); i++)
                {
                    std::string finalTermPath = parentDir + year + "st Year\\" +
                                                semester + "th Semester\\" + "Theory\\" + subjects[i] + "\\Final";
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
                            std::string midTermPath = parentDir + year + "st Year\\" +
                                                    semester + "th Semester\\" + "Theory\\" + subjects[i] + "\\Mid-Term\\" + selectedFoldersName[j];
                            _mkdir(midTermPath.c_str());

                            std::string finalTermPath = parentDir + year + "st Year\\" +
                                                        semester + "th Semester\\" + "Theory\\" + subjects[i] + "\\Final\\" + selectedFoldersName[j];
                            _mkdir(finalTermPath.c_str());
                        }
                        k++;
                    }
                }
                break;
            }
            default:
            {
                std::cout << "Invalid Choice";
                break;
            }
        }
            std::cout<<"SUCCESSFULLY executed the requested tasks"<<std::endl;
            std::cout<<std::endl;
            system("color 09");
            std::cout<<std::endl;
            std::cout<<std::endl;
            std::cout<<"Do you want to create Theory subjects as well?";
            std::cout<<std::endl;
            std::cout<<"1. Yes, take me there";
            std::cout<<std::endl;
            std::cout<<"2. No, I want to exit";
            std::cout<<std::endl;
            std::cout<<std::endl;
            std::cout<<"Your choice: ";
            std::cin>>gotoLabOrTheory;
    } while (gotoLabOrTheory == 1);


}
#endif // CREATE_H