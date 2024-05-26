#include "SemiSubmersiblePump.h"
#include <iostream>
#include <fstream>

using  std::string;
using  std::cout;

SemiSubmersiblePump::SemiSubmersiblePump(const string& model, const string& size, double flow, double head, double bestEfficiency, double submergencyDepth)
    : Pump(model, size, flow, head, bestEfficiency), submergencyDepth(submergencyDepth) {}

void SemiSubmersiblePump::printDetails()
{
    std::cout << "Pump model " << model << ", Rated Flow " << flow << " m3/hr and Rated Head: " << head << "m, with Efficiency: " << bestEfficiency << "%. Submergency part length " << submergencyDepth << "m." << std::endl;
}