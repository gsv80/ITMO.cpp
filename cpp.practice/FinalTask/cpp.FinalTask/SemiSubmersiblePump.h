#pragma once
#include "Pump.h"
using std::string;

class SemiSubmersiblePump :
    public Pump
{
private:
	double submergencyDepth;


public:
	SemiSubmersiblePump(const string& model, const string& size, double flow, double head, double bestEfficiency, double submergencyDepth);

	void printDetails() override;
};

