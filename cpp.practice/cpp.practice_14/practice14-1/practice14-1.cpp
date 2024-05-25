// practice14-1.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>


template<class T>
T getAvg(const T arr[], const int& size);

int main()
{
	int intArr[] = { 17,4,1,10,4,7,5,10,1 };
	double doubleArr[] = { 9.09, 11.02, 18.72, 12.72, 2.28, 7.88, 3.49, 3.22, 1.41 };
	long int longArr[] = { -2990, -2344, 3319,-3361, 462, -3692, -1324, 2203, 3664 };
	char charArr[] = "char";

	int intSize = sizeof(intArr) / sizeof(intArr[0]);
	int doubleSize = sizeof(doubleArr) / sizeof(doubleArr[0]);
	int longSize = sizeof(longArr) / sizeof(longArr[0]);
	int charSize = sizeof(charArr) / sizeof(charArr[0]) - 1;

	auto intAvg = getAvg(intArr, intSize);
	auto doubleAvg = getAvg(doubleArr, doubleSize);
	auto longAvg = getAvg(longArr, longSize);
	auto charAvg = getAvg(charArr, charSize);

	std::cout << "Int average: " << intAvg << std::endl;
	std::cout << "Double average: " << doubleAvg << std::endl;
	std::cout << "Long average: " << longAvg << std::endl;
	std::cout << "Char average: " << charAvg << std::endl;
}

template<class T>
T getAvg(const T arr[], const int& size)
{
	T sum = (T)0;
	for (int i = 0; i < size; i++)
	{
		sum += arr[i];
	}
	return sum / size;
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
