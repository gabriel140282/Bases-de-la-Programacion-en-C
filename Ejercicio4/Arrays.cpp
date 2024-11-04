#include <iostream>
#include "Arrays.h"

void arrays() {
    int i=0;
    int array[10];
    std::cout<<std::endl<<"Arreglos"<<std::endl;

    for (i = 0; i < 10; i++) {
        array[i] = i + 1;
    }

    for(i=0;i<10;i++) {
        std::cout<<array[i]<<" ";
    }
}