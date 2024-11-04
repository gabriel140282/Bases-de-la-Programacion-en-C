#include "Funciones.h"
#include <iostream>
#include <string>

using namespace std;
//Funcion de suma
int funcion_suma (int a,int b) {
    int sum=0;
    sum=a+b;
    return sum;
}


//Funcion que retorna un valor
int retorno(int a) {
    return a*a;
}
/* En esta funcion solo pedimos que ingrese 2 valores de tipo entero desde el main para poder retornar un valor entero*/


//Funcion que no retorna ningun valor
void palabra() {
    cout<<"Hola a todos"<<endl;
}
/*Esta funcion lo unico de lo que se encarga es de imprimir un mensaje mas no de devolver algun tipo de valor*/

void muestra(int a) {
    cout << "Tu edad es: " << a<<endl;
}

void muestra (string a) {
    cout << "Tu nombre es: " << a<<endl;
}

