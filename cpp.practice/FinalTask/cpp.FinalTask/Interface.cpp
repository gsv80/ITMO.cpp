#include "Interface.h"

void Interface::addPump(Pump* pmp) {
	pumps.push_back(pmp);
}


void Interface::printConsole() {
	for (Pump* ps : pumps)
	{
		ps->printDetails();
	}
};



void Interface::printFile(string fileName) {
	ofstream fileOut;
	fileOut.open(fileName);
	for (Pump* ps : pumps)
	{
		fileOut << ps->getModel() << "," << ps->getSize() << "," << ps->getFlow() << ", " << ps->getHead() << ", "<<ps->getBE() << std::endl;
	}
	fileOut.close();
};