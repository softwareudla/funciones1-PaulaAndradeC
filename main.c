#include <stdio.h>
#include "funciones.h"

int main (int argc, char *argv[]) {
    char productos[10][30]; 
    float precios[10]; 
    int cantidad = 10; 

    ingresarDatos(productos, precios, cantidad);
    
    printf("El precio total es: %.2f\n", precioTotal(precios, cantidad));
    
    int indiceCaro = productoMasCaro(precios, cantidad);
    printf("El producto más caro es: %s\n", productos[indiceCaro]);
    
    int indiceBarato = productoMasBarato(precios, cantidad);
    printf("El producto más barato es: %s\n", productos[indiceBarato]);
    
    printf("El precio promedio es: %.2f\n", precioPromedio(precios, cantidad));
    
    char productoParaBuscar[30];
    printf("Ingrese el nombre del producto a buscar: ");
    scanf("%s", productoParaBuscar); 
    
    int indiceProductoParaBuscar = buscarProducto(productos, productoParaBuscar, cantidad);
    
    if (indiceProductoParaBuscar >= 0) {
        printf("El producto %s fue encontrado en la posición %d\n", productoParaBuscar, indiceProductoParaBuscar);
    } else {
        printf("El producto %s no fue encontrado.\n", productoParaBuscar);
    }

    return 0;
}
