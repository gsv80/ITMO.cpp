#include "Pump.h"

Pump::Pump(const std::string& model, const std::string& size, double flow, double head, double bestEfficiency) : model(model), size(size), flow(flow), head(head), bestEfficiency(bestEfficiency) {}

void Pump::setModel(const std::string& model) {
    this->model = model;
}

void Pump::setSize(const std::string& size) {
    this->size = size;
}

void Pump::setFlow(double flow) {
    this->flow = flow;
}
void Pump::setHead(double head) {
    this->head = head;
}
void Pump::setBE(double be) {
    this->bestEfficiency = be;
}
std::string Pump::getModel() const {
    return model;
}
std::string Pump::getSize() const {
    return size;
}
double Pump::getFlow() const {
    return flow;
}
double Pump::getHead() const {
    return head;
}
double Pump::getBE() const {
    return bestEfficiency;
}

