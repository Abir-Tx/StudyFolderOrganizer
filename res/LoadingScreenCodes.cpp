#include <iostream>
#include <unistd.h> // for sleep()
#include <windows.h> //for sleep (For second one)

int main()
{

    std::cout << "Loading Please Wait";
    while (true)
    {
        sleep(1);
        std::cout << "." << std::flush;
        sleep(1);
        std::cout << "." << std::flush;
        sleep(1);
        std::cout << "." << std::flush;
        sleep(1);
        std::cout << "\b\b\b   \b\b\b" << std::flush;
    }


//Second one
     std::cout << '-' << std::flush;
    for (;;) {
        Sleep(10);
        std::cout << "\b\\" << std::flush;
        Sleep(10);
        std::cout << "\b|" << std::flush;
        Sleep(10);
        std::cout << "\b/" << std::flush;
        Sleep(10);
        std::cout << "\b-" << std::flush;
    }
}


//All these codes are from stackOverflow