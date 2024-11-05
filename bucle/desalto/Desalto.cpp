#include <iostream>
#include "Desalto.h"

void desalto() {
    int number;

    std::cout << "Enter a number (enter -1 to exit): ";
    while (true) {
        std::cin >> number;
        if (number == -1) {
            break;
        }
        std::cout << "You entered: " << number << std::endl;
        std::cout << "Enter another number (enter -1 to exit): ";
    }

    std::cout << "Exited the loop." << std::endl;
}