#ifndef FUNCIONES_H
#define FUNCIONES_H

void ingresarDatos(char nombres[10][30], float precios[10], int cantidad);
float precioTotal(float precios[10], int cantidad);
int productoMasCaro(float precios[10], int cantidad);
int productoMasBarato(float precios[10], int cantidad);
float precioPromedio(float precios[10], int cantidad);
int buscarProducto(char nombres[10][30], char productoParaBuscar[30], int cantidad);

#endif