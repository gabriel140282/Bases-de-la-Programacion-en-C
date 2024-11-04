#include "constantes.h"
#include <iostream>

using namespace std;

void constantes_simbolicas() {

    const double PI = 3.14;
    const int RADIO = 5;


    double area = PI * RADIO * RADIO;
    double circunferencia = 2 * PI * RADIO;

    cout << "Radio del i: " << RADIO << endl;
    cout << "Area del circulo: " << area << endl;
    cout << "Circunferencia del circulo: " << circunferencia << endl;
}

void tipo_void() {
        cout << "Mensaje desde funcion void" << endl;
}
