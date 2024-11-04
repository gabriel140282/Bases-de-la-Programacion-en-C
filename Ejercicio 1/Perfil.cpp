#include "Perfil.h"
#include <iostream>
using namespace std;

void perfil()
{
    string nombre;
    int edad;

    cout << "Por favor ingresa tu nombre: ";
    cin >> nombre;

    cout << "Por favor ingresa tu edad: ";
    cin >> edad;

    cout << "Hola, " << nombre << "! Tienes " << edad << " vueltas al sol.\n";
}