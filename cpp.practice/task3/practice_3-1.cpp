// task3.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <string>

int isValidSnils(std::string snils);

std::string filter(const std::string& to);

std::string checkRepeat(std::string testStr);



int main()
{
    // ***** check test task 3.1 - isValidSnils ******

    std::string strToN; 
    std::string newStr{};

    std::cout << "Enter snils number to check if it valid\n";

    std::getline(std::cin,strToN);

    //std::cout<<"### test checkRepeat: "<<checkRepeat(strToN)<<'\n';

    isValidSnils(checkRepeat(filter(strToN)));
   
}

// *************** Test Task 3.1 check Snils function ***************


int isValidSnils(std::string snils) {


    int sum{};
    int chkSum{};
    int j = size(snils);

    if (j != 11) {
        std::cout << "Snils size error\n";
        return -1;
    }

    // ****** let's create the checkSum according to rules:
    
    j = 9;
    
    for (int i{0};i < 9;i++) {
        std::cout << "### snils num: " << snils.substr(i, 1) << " ### num positiion: "<<j <<'\n';
        sum +=  std::stoi(snils.substr(i, 1)) * j;
        j--;
    }
    
    std::cout << "Snils numbers sum*position = " << sum << '\n';

    
    if (sum < 100) {
        sum = sum;
    }
    else if (sum == 101 || sum == 100) {
        sum = 0;
    }
    else {
        if (sum % 101 < 100) {
            sum = sum % 101;
        }
        else sum = 0;
    }
    std::cout << "Valid Sum in snils should be = " << sum << '\n';


    chkSum = stoi(snils.substr(9, 2));

    std::cout << "Entered number is " << (sum == chkSum ? "Valid" : "Not Valid") << '\n';

    if (sum == chkSum) {
        return 1 ;
    }
    else {
        return 0;
    }
}



// ------------------- filter string function   -----------------


std::string filter(const std::string& to)
{
    std::string final;
    char el{};
    int counter = 0;
    for (std::string::const_iterator it = to.begin(); it != to.end(); ++it)
    {
        if (!(*it >= '0' && *it <= '9') && !(*it == '-') && !(*it == ' '))
        {
            std::cout << "Wrong symbols\n";
            final =  "000";
        }
        else if (*it >= '0' && *it <= '9') {
            final += *it;
        }
    }


    //std::cout << "### final: " << final << '\n';
    return final;
}

std::string checkRepeat(std::string testStr) {

    int j = size(testStr);

    for (int i = 1; i < j - 1;i++) {
        if (testStr.substr(i,1) == testStr.substr(i-1,1)  && testStr.substr(i, 1) == testStr.substr(i + 1, 1)) 
        {
            std::cout << "Three or more repeated symbols\n";
            return "00";
        }
    
    }
    return testStr;
}