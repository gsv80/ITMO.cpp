// cpp.practice_5-4.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>

int main(int argc, char *argv[])
{
    
    std::cout << "### argc " << argc << '\n';
    if (argc < 4) {
        std::cout << 0 << '\n'; 
        return 0; 
    }

    if (!(strncmp(argv[1], "-a", 2)==0) && !(strncmp(argv[1], "-m", 2)==0)) {
        std::cout << argv[1] <<" is wrong flag. " << '\n';
        return 0;

    }
    for (int i{ 0 };i < argc; i++) {
        std::cout << "Argument " << i << " : " << argv[i] << std::endl;
        
    }

    std::string operation = argv[1];

    

    if (operation == "-m") {
        std::cout << atoi(argv[3])*atoi(argv[2]);
    }
    else if (operation=="-a") {
        std::cout << atoi(argv[3]) + atoi(argv[2]);
    }
    else {
        std::cout << 0 << '\n';
    }


    return 0;
}



// Run program: Ctrl + F5 or Debug > Start Without Debugging menu
// Debug program: F5 or Debug > Start Debugging menu


