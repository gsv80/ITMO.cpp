#include "WasteWaterPump.h"
#include <iostream>
#include <fstream>

using  std::string;
using  std::cout;


WasteWaterPump::WasteWaterPump(const string& model, const string& size, double flow, double head, double bestEfficiency, double impellerThroulet)
    : Pump(model, size, flow, head, bestEfficiency), impellerThroulet(impellerThroulet) {}

void WasteWaterPump::printDetails()
{
    std::cout << "Pump model " << model << ", Rated Flow " << flow << " m3/hr and Rated Head: " << head << "m, with Efficiency: " << bestEfficiency << "%. Impeller throulet "<< impellerThroulet<<"mm." << std::endl;
}