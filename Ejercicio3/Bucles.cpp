#include <iostream>
#include "Bucles.h"

void bucles() {
    //Bucle for
    for (int i = 1; i <= 10; i++) {
        std::cout << i << " ";
    }

    //Bucle while
    int i=0,a;
    std::cout << std::endl << "Ingrese la tabla que desea imprimir: ";
    std::cin >> a;
    while (i<=12) {
        std::cout <<a << "x" << i <<"="<<a*i << std::endl;
        i++;
    }
    //Bucle while
    int b=0,c;
    std::cout << std::endl << "Ingrese la tabla que desea imprimir: ";
    std::cin >> c;
    //Bucle do
    do {
        std::cout << b << "x" << c <<"="<< c*b << std::endl;
        b++;
    }while (b!=13); //Solo defino otro tipo de condicion para que se observe la diferencia en los bucles y los modos en los que se los puede ver

    //Instrucciones de salto
    int d=0;
    std::cout << "Saltos" << std::endl;
    for (d = 1; d<= 10; d++) {
        std::cout << d << " ";
        if (d == 5) {
            break;
        }
    }
}