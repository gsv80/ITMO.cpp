#include <iostream>

template<class T>
T getAvg(const T arr[], const int& size);

int main()
{
	int intArr[] = { 17,4,1,10,4,7,5,10,1 };
	double doubleArr[] = { 9.09, 11.02, 18.72, 12.72, 2.28, 7.88, 3.49, 3.22, 1.41};
	long int longArr[] = {-2990, -2344, 3319,-3361, 462, -3692, -1324, 2203, 3664 };
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