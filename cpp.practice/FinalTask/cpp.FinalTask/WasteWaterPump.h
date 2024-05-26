#pragma once
#include "Pump.h"

using  std::string;


class WasteWaterPump :
    public Pump
{
private:
	double impellerThroulet;


public:
	WasteWaterPump(const string& model,  const string& size, double flow, double head, double bestEfficiency, double impellerThroulet);

	void printDetails() override;
};

