//
// Created by NAVA on 09/09/2025.
//

#include <stdio.h>
#include "aleatorio.h"

int valorCarta ();//prototipo de nuestra funcion

int main () {
    initAleatorio();//funcion sacada de aleatorio.c que servira como srand


    return 0;
}

int valorCarta() {
    int valor = 1;
    valor = rand () % 13 + 1;
    return valor;

}

