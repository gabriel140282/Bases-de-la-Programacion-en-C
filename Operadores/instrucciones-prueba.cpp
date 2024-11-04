#include <iostream>

using namespace std;

int instrucciones_prueba() {
    int edad;

    cout << "Por favor ingresa tu edad: ";
    cin >> edad;

    if (edad >= 18) {
        cout << "Eres mayor de edad.\n";
    } else {
        cout << "Eres menor de edad.\n";
    }

    return 0;
}

float operadores() {

    float num1,num2,suma,resta,mult,division;
    cout << "Por favor ingrese un numero: "; cin >> num1;
    cout << "Por favor ingrese otro numero: "; cin >> num2;

    suma = num1 + num2;
    resta = num1 - num2;
    mult = num1 * num2;
    division = num1 / num2;

    cout << num1 << " + " << num2 << " = "<<suma<<endl;
    cout << num1 << " - " << num2 << " = "<<resta<<endl;
    cout << num1 << " * " << num2 << " = "<<mult<<endl;
    cout << num1 << " / " << num2 << " = "<<division<<endl;
    return 0;
}