#include "circuit.h"
#include <iostream>

void Circuit::addResistor(double r) {
    resistors.push_back(Resistor(r));
}

double Circuit::getTotalResistance() {
    double total = 0;
    for (auto& r : resistors) {
        total += r.resistance;
    }
    return total;
}

void Circuit::display() {
    std::cout << "Circuit Resistors: ";
    for (auto& r : resistors) {
        std::cout << r.resistance << "Ω ";
    }
    std::cout << "\nTotal Resistance: " << getTotalResistance() << "Ω\n";
}
