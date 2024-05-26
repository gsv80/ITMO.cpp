#pragma once
#include "Pump.h"
#include <vector>
#include <fstream>
#include <iostream>

using std::ofstream;
using std::string;
using std::vector;

class Interface {

private:
	vector<Pump*> pumps;

public:


	void addPump(Pump* pump);
	void printConsole();
	void printFile(string fileName);
};