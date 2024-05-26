// cpp.FinalTask.cpp : This file contains the 'main' function. Program execution begins and ends there.
//
#include "WasteWaterPump.h"
#include "SemiSubmersiblePump.h"
#include "Interface.h"

#include <iostream>

int main()
{

	Interface newInterface;

	

	WasteWaterPump wwp_1( "100WQ", "100WQ100-20-11(I)", 100.0, 20.0, 65.0, 37.5);
	WasteWaterPump wwp_2("150WQ", "150WQ100-20-11(I)", 100.0, 20.0, 65.0, 37.5);
	SemiSubmersiblePump ssp_1("VTP", "400VTP", 1100.0, 36.0, 74.6, 3.0);
	SemiSubmersiblePump ssp_2("VTP", "500VTP", 1300.0, 36.0, 74.6, 3.0);

	newInterface.addPump(&wwp_1);
	newInterface.addPump(&wwp_2);
	newInterface.addPump(&ssp_1);
	newInterface.addPump(&ssp_2);
	
	newInterface.printConsole();


	newInterface.printFile("output.txt");
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
