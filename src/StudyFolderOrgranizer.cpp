/* A C++ source code file by Mushfiqur Rahman Abir. This terminal app is for windows only. I am making this for personal usage case. 
Anyone can modify this codes to meet their needs if they like the idea of the software */

#include <iostream>
#include <iomanip>
#include "../include/home.h"


void homeDesign(){
    std::string title = "Study Folder Organizer";
    std::cout<<std::setw(80)<<std::setfill(' ')<<title<<std::endl<<std::endl;
}

int main(){
    homeDesign();
    home();
    system("pause");
}
