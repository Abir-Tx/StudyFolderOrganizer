#if !defined(HOME_H)
#define HOME_H

#include <iostream>
#include <vector>
void home(){
    std::cout<<"Your Options: "<<std::endl;

    std::vector<std::string> homeOptions = {"Create Mode", "About"};

    for (int i = 0; i < homeOptions.size(); i++)
    {
        std::cout<<(i+1)<<homeOptions[i]<<std::endl;
    }
    std::cout<<"Your choice: "<<std::endl;
    
}

#endif // HOME_H
