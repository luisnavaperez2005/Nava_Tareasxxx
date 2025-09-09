//
// Created by NAVA on 09/09/2025.
//

#include <stdio.h>
#include "aleatorio.h"//libreria aleatorio local

int valorCarta();//Se hace prototipo de la funcion valorCarta
char obtenerPaloAleatorio();//Se hace prototipo de la funcion obtenerPaloAleatorio
void mostrarCarta (int valor, char palo);//Se hace prototipo de la nueva funcion mostrarCarta

int main () {
    initAleatorio();// Funcion sacada de nuestra libreria local aleatorio que servira como srand


    return 0;
}

int valorCarta() {
    int valor = numeroAleatorioConRango(1, 13);  // 1 a 13
    return valor;
}

char obtenerPaloAleatorio() {
    int valor = numeroAleatorio(3);  // 0 a 3
    char palo;

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
            palo ='c';
            break;
    }
    return palo;
}

void mostrarCarta(int valor, char palo) {
    switch (valor) {
        case 1:
            printf("A %c\n", palo);
            break;
        case 11:
            printf("J %c\n", palo);
            break;
        case 12:
            printf("Q %c\n", palo);
            break;
        case 13:
            printf("K %c\n", palo);
            break;
        default:
            printf("%d %c\n", valor, palo);
            break;
    }
}


