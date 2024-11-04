#include "punteros.h"
#include <iostream>

using namespace std;

void punteros_variables() {
    int a = 10;
    double b = 7;
    char c = 'R';

    int* ptrA = &a;
    double* ptrB = &b;
    char* ptrC = &c;

    cout << "Los valores originales son:" << endl;
    cout << "a = " << a << ", b = " << b << ", c = " << c << endl;

    //Cambiamos el valor de las variables apuntando al espacio en memoria de cada una
    *ptrA = 20;
    *ptrB = 4.5;
    *ptrC = 'S';

    //Imprimimos los nuevos valores modificados
    cout << "Los nuevos valores son:" << endl;
    cout << "a = " << a << ", b = " << b << ", c = " << c << endl;

}

void punteros_arrays() {
    int tamanio = 5;
    int array[tamanio] = {1, 2, 3, 4, 5}; //Inicializo un array con la variable tamanio, que es 5

    int* ptr = array; //Asigno el puntero a la variable array

    cout << "Valores originales del array:" << endl;
    for (int i = 0; i < tamanio; i++) {
        cout << "array[" << i << "] = " << *(ptr + i) << endl; //Imprimo los valores originales de cada puntero
    }

    for (int i = 0; i < tamanio; i++) {
        *(ptr + i) *= 2; //Multiplico por 2 el valor de cada puntero de los elementos de la lista
    }

    cout << "\nNuevos valores del array despues de la modificacion:" << endl;
    for (int i = 0; i < tamanio; i++) {
        cout << "array[" << i << "] = " << *(ptr + i) << endl; //Imprimo los valores finales de cada puntero
    }

}

int asignacion_memoria() {
    int tamanio;

    cout << "Ingrese el tamanio del array: ";
    cin >> tamanio;

    int* array = new int[tamanio]; /* El new int lo que hace es reservar un espacio dinámico de memoria para la
                                    variable tamanio. Se usa en los casos en los que no conocemos el espacio en
                                    memoria de antemano. */

    if (array == nullptr) {
        cerr << "Error al asignar memoria." << endl;
        return 1;
    }

    cout << "Ingrese " << tamanio << " valores:" << endl;
    for (int i = 0; i < tamanio; i++) {
        cout << "array[" << i << "] = ";
        cin >> array[i];
    }

    cout << "\nValores ingresados en el array:" << endl;
    for (int i = 0; i < tamanio; i++) {
        cout << "array[" << i << "] = " << array[i] << endl;
    }

    delete[] array; //Libera el espacio dinámico de memoria que ha sido asignado al anterior new int.

}

void aritmetica_punteros() {
    int array[] = {10, 20, 30, 40, 50};
    int tamanio = sizeof(array) / sizeof(array[0]); //

    int* ptr = array;

    cout << "Valores del array usando aritmetica de punteros:" << endl;
    for (int i = 0; i < tamanio; i++) {
        cout << "array[" << i << "] = " << *(ptr + i) << endl;
    }

    cout << "\nModificando los valores del array:" << endl;
    for (int i = 0; i < tamanio; i++) {
        *(ptr + i) += 5;
    }

    cout << "\nNuevos valores del array:" << endl;
    for (int i = 0; i < tamanio; i++) {
        cout << "array[" << i << "] = " << *(ptr + i) << endl;
    }

    cout << "\nDirecciones de memoria de los elementos del array:" << endl;
    for (int i = 0; i < tamanio; i++) {
        cout << "Direccion de array[" << i << "] = " << (ptr + i) << endl; //Imprimo las direcciones de memoria de cada elemento del array
    }
}

void punteros_punteros() {
    int tamanio;

    cout << "Ingrese el tamanio del array: ";
    cin >> tamanio;

    int** ptrToPtr = new int*[tamanio]; //Asigno un puntero sobre otro

    for (int i = 0; i < tamanio; i++) {
        ptrToPtr[i] = new int;
    }

    cout << "Ingrese " << tamanio << " valores:" << endl;
    for (int i = 0; i < tamanio; i++) {
        cout << "Valor " << (i + 1) << ": ";
        cin >> *ptrToPtr[i];
    }

    cout << "\nValores ingresados en el array:" << endl;
    for (int i = 0; i < tamanio; i++) {
        cout << "Valor " << (i + 1) << ": " << *ptrToPtr[i] << endl;
    }

    for (int i = 0; i < tamanio; i++) {
        delete ptrToPtr[i];
    }
    delete[] ptrToPtr;

}