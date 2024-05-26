#pragma once
#include <fstream>
#include <vector>
#include <string>



class Pump
{
protected:
    std::string model;
    std::string size;
    double flow;
    double head;
    double bestEfficiency;


public:
    Pump(const std::string& model, const std::string& size, double flow, double head, double bestEfficiency);

    virtual void printDetails() = 0;


    void setModel(const std::string& model);
    void setSize(const std::string& size);
    void setFlow(double flow);
    void setHead(double head);
    void setBE(double bestEfficiency);


    std::string getModel() const;
    std::string getSize() const;
    double getFlow() const;
    double getHead() const;
    double getBE() const;


};

