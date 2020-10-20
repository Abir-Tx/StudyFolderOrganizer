#if !defined (DRIVELETTERTAKER_H)
#define DRIVELETTERTAKER_H
#include <iostream>
#include <iomanip>

//Global Variables:
static std::string driveLetter;
void driveTaker()
{  
    std::cout<<std::endl;
    std::cout<<std::endl;
    
    std::cout << "What is your drive letter: ";
    std::cin >> driveLetter;
}

#endif // DRIVELETTERTAKER_H