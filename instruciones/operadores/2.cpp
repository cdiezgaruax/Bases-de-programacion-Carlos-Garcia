
#include <iostream>
#include "2.h"

void operadores() {
    int a = 10, b = 3;

    // Operadores aritméticos
    std::cout << "Operadores aritméticos:\n";
    std::cout << "a + b = " << (a + b) << "\n";
    std::cout << "a - b = " << (a - b) << "\n";
    std::cout << "a * b = " << (a * b) << "\n";
    std::cout << "a / b = " << (a / b) << "\n";
    std::cout << "a % b = " << (a % b) << "\n";

    // Operadores de comparación
    std::cout << "\nOperadores de comparación:\n";
    std::cout << "a == b: " << (a == b) << "\n";
    std::cout << "a != b: " << (a != b) << "\n";
    std::cout << "a < b: " << (a < b) << "\n";
    std::cout << "a > b: " << (a > b) << "\n";
    std::cout << "a <= b: " << (a <= b) << "\n";
    std::cout << "a >= b: " << (a >= b) << "\n";

    // Operadores lógicos
    std::cout << "\nOperadores lógicos:\n";
    std::cout << "(a > 5 && b < 5): " << ((a > 5) && (b < 5)) << "\n";
    std::cout << "(a > 5 || b > 5): " << ((a > 5) || (b > 5)) << "\n";
    std::cout << "!(a == b): " << (!(a == b)) << "\n";
}