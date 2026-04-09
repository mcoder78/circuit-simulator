#ifndef CIRCUIT_H
#define CIRCUIT_H

#include <vector>
#include <string>

class Resistor {
public:
    double resistance;
    Resistor(double r) : resistance(r) {}
};

class Circuit {
private:
    std::vector<Resistor> resistors;
public:
    void addResistor(double r);
    double getTotalResistance();
    void display();
};

#endif
