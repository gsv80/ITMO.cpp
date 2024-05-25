// cpp.lesson8.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <string>

class  Student
{
public:
	void set_name(std::string student_name) 
	{
		name = student_name;
	}

	std::string get_name()
	{
		return name;
	}

	void set_last_name(std::string student_last_name)
	{
		last_name = student_last_name;
	}
	std::string get_last_name()
	{
		return last_name;
	}

	void set_scores(int students_scores [])
	{
		for (int i = 0;i < 5;i++) {
			scores[i] = students_scores[i];
		}
	}

	void set_average_score(double ball) {
		average_score = ball;
	}

	double get_average_score() 
	{
		return average_score;
	}

	// Student();
	//~ Student();

private:
	int scores[5];
	double average_score;
	std::string name;
	std::string last_name;

};

 /*Student:: Student()
{
}*/

 /*Student::~ Student()
{
}*/

int main()
{
	Student student01;
	std::string name;
	std::string last_name;

	int scores[5];

	std::cout << "Enter Name: ";
	std::getline(std::cin, name);

	std::cout << "Enter Last Name: ";
	std::getline(std::cin, last_name);

	int scores_sum = 0;
	for (int i=0;i<5;i++)
	{
		std::cout << "Enter student`s score #"<<i+1<<":";
		std::cin >> scores[i];
		scores_sum += scores[i];
	}

	double average_scores = scores_sum / 5.0;
	student01.set_name(name);
	student01.set_last_name(last_name);
	student01.set_scores(scores);
	student01.set_average_score(average_scores);

	std::cout << "Average ball for student " << student01.get_last_name() << " " << student01.get_name() << " is " << student01.get_average_score()<<std::endl;

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
