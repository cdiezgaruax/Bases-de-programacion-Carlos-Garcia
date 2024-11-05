#include <iostream>
#include <string>

void utilidad_variables() {
std::string nombre;
int edad;

std::cout << "Por favor ingresa tu nombre: ";
std::cin >> nombre;

std::cout << "Por favor ingresa tu edad: ";
std::cin >> edad;

std::cout << "Hola, " << nombre << "! Tienes " << edad << " años.\n";
}