#include "Distance.h"
#include <string>
#include <iostream>


class Distance
{
private:
	int feet;
	float inches;
public:

	Distance() : feet(0), inches(0.0) { }

	Distance(int ft, float in) : feet(ft), inches(in) { }

	void getdist()
	{
		std::cout << "\nEnter feet : ";
		std::cin >> feet;
		std::cout << "\nEnter inches : ";
		std::cin >> inches;
	}
	void showdist()
	{
		std::cout << feet << "\'-" << inches << "\"\n";

	}
	
	
	Distance Distance::operator+(const Distance& d2) const
	{
		int f = feet + d2.feet;
		float i = inches + d2.inches;
		if (i >= 12.0)
		{
			i -= 12.0;
			f++;
		}
		return Distance(f, i);
	}
};