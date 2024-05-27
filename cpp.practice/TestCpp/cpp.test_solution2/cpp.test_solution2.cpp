// cpp.test_solution2.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <windows.h>
using namespace std;

class Distance { 
public:
	
	Distance() : feet(0), inches(0.0), MTF(3.280833F) {
		cout << "\ndefault constructor\n";
	}

	 
	Distance(float meters) : MTF(3.280833F) {
		float fltfeet = MTF * meters;      
		feet = int(fltfeet);				
		inches = 12 * (fltfeet - feet);		 
		cout << "\nOne parameter constructor\n";
	}

	
	Distance(int ft, float in) : feet(ft), inches(in), MTF(3.280833F)
	{ }

	
	void getdist()
	{
		cout << "\nEnter feet value: ";
		cin >> feet;
		cout << "Enter inches value: ";
		cin >> inches;
	}

	
	void showdist() const {
		cout << feet << "\'-" << inches << '\"';
	}

	
	Distance operator+ (Distance) const;

	/*explicit*/ operator float() const {
		float fracfeet = inches / 12;	
		fracfeet += static_cast<float>(feet); 
		return fracfeet / MTF;	
	}

	void operator= (Distance);

private:
	const float MTF;     
	int feet;
	float inches;

};

void Distance::operator= (Distance dist) {
	Distance::feet = dist.feet;
	Distance::inches = dist.inches;
}

Distance Distance::operator+ (Distance d2) const {
	int f = feet + d2.feet;	
	float i = inches + d2.inches; 
	if (i >= 12.0)	
	{
		i -= 12.0;	
		f++;	
	}
	return Distance(f, i);     
}

int main()
{
	SetConsoleOutputCP(1251);
	SetConsoleCP(1251);

	float mtrs;
	Distance dist1 = 2.35F; 

	Distance dist101; 
	cout << "\ndist101 = ";
	dist101.showdist();
	
	cout << "\ndist1 = ";
	dist1.showdist();

	cout << "\ndist101 = ";
	dist101.showdist();
	mtrs = static_cast<float>(dist1); 
	cout << "\ndist1 = " << mtrs << " meters\n";
	Distance dist2(5, 10.25); 

	mtrs = dist2; 
	cout << "\ndist2 = " << mtrs << " meters\n";

	
	cout << "\ndist2 = " << mtrs << " meters\n";
	Distance dist11 = dist1 + dist2;

	Distance testDist;
	testDist = dist2;
	cout << "\ntestDist = " << static_cast<float>(testDist) << " meters\n";

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
