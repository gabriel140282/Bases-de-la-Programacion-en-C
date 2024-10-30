#include <iostream>

int main() {
    int numero;

    while (true) {  // Bucle infinito
        std::cout << "Ingresa un número (0 para salir): ";
        std::cin >> numero;

        if (numero == 0) {
            break;  // Sale del bucle cuando el número es 0
        }

        std::cout << "Ingresaste el número: " << numero << "\n";
    }

    std::cout << "Has salido del bucle.\n";
    return 0;
}