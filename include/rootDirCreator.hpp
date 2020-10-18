#if !defined (ROOTDIRCREATOR_H)
#define ROOTDIRCREATOR_H
#include <iostream>
#include <iomanip>
#include <direct.h>
#include <vector>
#include "../include/driveLetterTaker.hpp"

void rootDirCreator()
{

    using namespace std;
    string rootDir = driveLetter+":\\University Study";
    _mkdir(rootDir.c_str());
    string childDir = driveLetter+":\\University Study\\Study Materials";
    _mkdir(childDir.c_str());
}
#endif // ROOTDIRCREATOR_H