#if !defined (DRIVELETTERTAKER_H)
#define DRIVELETTERTAKER_H
#include <iostream>
#include <iomanip>
#include <fstream>
#include <direct.h>

//Global Variables:
static std::string driveLetter;
void driveTaker()
{  
    std::cout<<std::endl;
    std::cout<<std::endl;
    
    std::cout << "What is your drive letter: ";
    std::cin >> driveLetter;

    //Keeping the data in a file for using it in other funcs
    /* //Creating the appData folder:
    _mkdir("C:\\SFO");
    _mkdir("C:\\SFO\\Data"); */                         //Depreciating this method beacuse of using installation method

    //File operation:
    std::ofstream driveLetterKeeper("C:\\Program Files (x86)\\Abir-Tx\\SFO\\data\\DriveLetterKeeper.dat");
    driveLetterKeeper<<driveLetter;
    driveLetterKeeper.close();
}

#endif // DRIVELETTERTAKER_H