#include <iostream>
#include "sintaxis.h"

void sintaxis() {
    int a = 10;
    double b = 20.5;
    char c = 'C';
    bool d = true;

    std::cout << "int: " << a << "\n";
    std::cout << "double: " << b << "\n";
    std::cout << "char: " << c << "\n";
    std::cout << "bool: " << std::boolalpha << d << "\n";
}