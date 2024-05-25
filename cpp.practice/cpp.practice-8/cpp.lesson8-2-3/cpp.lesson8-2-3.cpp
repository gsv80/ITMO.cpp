// cpp.lesson8-2-3.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <string>
#include "Student.h"

int main()
{

    std::string name;
    std::string last_name;


    std::cout << "Name : ";
    std::getline(std::cin, name);

    std::cout << "Last Name : ";
    std::getline(std::cin, last_name);

    Student *student = new Student(name, last_name);
    

    int scores[5];
    int scores_sum=0;

    for (int i = 0;i < 5;i++) 
    {
        std::cout << "Score #" << i + 1 << ": ";
        std::cin >> scores[i];
        scores_sum += scores[i];
    }

    student -> set_scores(scores);
    double average_score = scores_sum / 5.0;

    student -> set_average_score(average_score);

    std::cout << "Average ball for student " << student-> get_last_name() << " " << student->get_name() << " is " << student ->get_average_score() << std::endl;
    delete student;
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
