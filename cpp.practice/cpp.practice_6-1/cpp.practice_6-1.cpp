// cpp.practice_6-1.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <fstream>
#include <string>
#include <vector>



int main()
{
	std::string str;
	std::ofstream out("test.txt", std::ios::out | std::ios::binary);
	if (!out) {
		std::cout << "File openning is not available";
		return 1;
	}

	std::cout << "Enter text, in the end press '*'. \n";
	std::getline(std::cin, str, '*');

	out << str;
	out.close();


}

