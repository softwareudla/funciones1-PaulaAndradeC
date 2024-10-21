#include <stdio.h>
#include "funciones.h"

void ingresarDatos(char nombres[10][30], float precios[10], int cantidad) {
    for (int i = 0; i < cantidad; i++) {
        printf("Ingrese el nombre del producto %d: ", i + 1);
        fgets(nombres[i], 30, stdin);
        for (int j = 0; j < 30; j++) {
            if (nombres[i][j] == '\n') {
                nombres[i][j] = '\0';
                break;
            }
        }
        printf("Ingrese el precio del producto %d: ", i + 1);
        scanf("%f", &precios[i]);
        while (getchar() != '\n');  // Limpia el buffer de entrada
    }
}

float precioTotal(float precios[10], int cantidad) {
    float total = 0;
    for (int i = 0; i < cantidad; i++) {
        total += precios[i];
    }
    return total;
}

int productoMasCaro(float precios[10], int cantidad) {
    int indiceCaro = 0;
    for (int i = 1; i < cantidad; i++) {
        if (precios[i] > precios[indiceCaro]) {
            indiceCaro = i;
        }
    }
    return indiceCaro;
}

int productoMasBarato(float precios[10], int cantidad) {
    int indiceBarato = 0;
    for (int i = 1; i < cantidad; i++) {
        if (precios[i] < precios[indiceBarato]) {
            indiceBarato = i;
        }
    }
    return indiceBarato;
}

float precioPromedio(float precios[10], int cantidad) {
    float total = precioTotal(precios, cantidad);
    return total / cantidad;
}

int buscarProducto(char nombres[10][30], char productoParaBuscar[30], int cantidad) {
    for (int i = 0; i < cantidad; i++) {
        int j = 0;
        while (nombres[i][j] != '\0' && productoParaBuscar[j] != '\0') {
            if (nombres[i][j] != productoParaBuscar[j]) {
                break;
            }
            j++;
        }
        if (nombres[i][j] == '\0' && productoParaBuscar[j] == '\0') {
            return i;
        }
    }
    return -1;
}
