#include "ejreferencias.h"
#include <iostream>

using namespace std;

void modificarValor(int& ref) {
    ref += 10; // Incrementa el valor de la variable original en 10
    int numero;

    cout << "Ingrese un numero: ";
    cin >> numero;

    cout << "El valor original es: " << numero << endl;

    modificarValor(numero);

    cout << "El valor modificado es: " << numero << endl;
}