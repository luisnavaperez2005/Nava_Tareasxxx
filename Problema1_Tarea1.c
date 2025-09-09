//
// Created by NAVA on 09/09/2025.
//

#include <stdio.h>
#include "aleatorio.h"

char obtenerPaloAleatorio ();//Se hace el prototipo de la Funcion

int main () {
    initAleatorio();//Se llama la funcion de "aleatorio.h" que es srand

    return 0;
}

char obtenerPaloAleatorio () {
    int valor = 1;
    char palo;
    valor = numeroAleatorio(4);//Se llama la funcion de "aleatorio.h" que es rand con maximo 4
    switch (valor) {
        case 0:
            palo = 'p';
            break;
        case 1:
            palo = 't';
            break;
        case 2:
            palo = 'd';
            break;
        case 3:
            palo = 'c';
            break;
    }
    return palo;
}
