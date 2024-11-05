#include <iostream>
#include "buclewhile.h"

void bucle_while() {
    int number, i = 1;

    std::cout << "Enter a number: ";
    std::cin >> number;

    while (i <= 10) {
        std::cout << number << " * " << i << " = " << number * i << std::endl;
        i++;
    }
