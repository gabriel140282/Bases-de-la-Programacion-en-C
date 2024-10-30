#include <iostream>
using namespace std;

int main() {
    int numero;

    while (true) {  // Bucle infinito
        cout << "Ingresa un numero (0 para salir): ";
        cin >> numero;

        if (numero == 0) {
            break;  // Sale del bucle cuando el número es 0
        }

        cout << "Ingresaste el numero: " << numero << "\n";
    }

    cout << "Has salido del bucle.\n";
    return 0;
}