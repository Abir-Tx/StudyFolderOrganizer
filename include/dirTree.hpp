#if !defined(DIRTREE_H)
#define DIRTREE_H
#include <iostream>
#include <iomanip>
#include <fstream>
#include <iostream>

void dirTree()
{
    using namespace std;
    string driveLetterHolder;

    ifstream driveLetterReader("C:\\SFO\\Data\\DriveLetterKeeper.dat");

    while(getline(driveLetterReader, driveLetterHolder))
    {
        driveLetterHolder = driveLetterHolder;
    }

    //Starting the dir tree
    system("cls");
    system("color 03");
    cout<<setw(75)<<setfill(' ')<<"Directory Tree Viewer"<<endl<<endl;

    cout<<"Printing the folders structure view inside the selected drive: "<<endl;
    std::cout<<std::endl;
    string treeDir = "tree /f "+driveLetterHolder+":\\\"University Study\"";
    system(treeDir.c_str());
}
#endif // DIRTREE_H