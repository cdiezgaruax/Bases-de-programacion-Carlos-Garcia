#include <iostream>
#include "bucledo.h"

void bucledo() {
    int number, i = 1;

    std::cout << "Enter a number: ";
    std::cin >> number;

    do {
        std::cout << number << " * " << i << " = " << number * i << std::endl;
        i++;
    } while (i <= 10);
}