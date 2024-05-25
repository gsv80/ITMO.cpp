// practice15-1.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <string>
#include <map>

struct StudentGrade
{
    std::string name;
    char grade;

    StudentGrade(std::string name, char grade)
    {
        this->name = name;
        this->grade = grade;
    }
};

int main()
{
    const char gradeA = 'A';
    const char gradeB = 'B';
    const char gradeC = 'C';
    const char gradeD = 'D';
    const char gradeF = 'F';

    StudentGrade ivan("Ivan", gradeC);
    StudentGrade petr("Petr", gradeB);
    StudentGrade sergey("Sergey", gradeA);
    StudentGrade elena("Elena", gradeD);

    std::map<std::string, char> studMap;
    studMap[ivan.name] = ivan.grade;
    studMap[petr.name] = petr.grade;
    studMap[sergey.name] = sergey.grade;
    studMap[elena.name] = elena.grade;

    for (auto item = studMap.begin(); item != studMap.end(); item++)
    {
        std::cout << item->first << ": " << item->second << std::endl;
    }

    return 0;
}



// Run program: Ctrl + F5 or Debug > Start Without Debugging menu
// Debug program: F5 or Debug > Start Debugging menu

// Tips for Getting Started: 
//   1. Use the Solution Explorer window to add/manage files
//   2. Use the Team Explorer window to connect to source control
//   3. Use the Output window to see build output and other messages
//   4. Use the Error List window to view errors
//   5. Go to Project > Add New Item to create new code files, or Project > Add Existing Item to add existing code files to the project
//   6. In the future, to open this project again, go to File > Open > Project and select the .sln file
