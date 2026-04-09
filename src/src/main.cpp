#include "circuit.h"
#include <iostream>

int main() {
    Circuit circuit;
    
    circuit.addResistor(10);
    circuit.addResistor(20);
    circuit.addResistor(30);
    
    circuit.display();
    
    return 0;
}
