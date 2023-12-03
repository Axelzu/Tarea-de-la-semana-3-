#include <stdio.h>
#include <stdlib.h>
#include <time.h>
//aqui es para inicializar la matriz con numeros aleatorios entre o y 100
void inicializarMatriz(int filas, int columnas, int matriz[filas][columnas]) {
    srand(time(NULL));
    for (int i = 0; i < filas; i++) {
        for (int j = 0; j < columnas; j++) {
            matriz[i][j] = rand() % 101;
        }
    }
}
// aqui se imprime la matriz 
void mostrarMatriz(int filas, int columnas, int matriz[filas][columnas]) {
    for (int i = 0; i < filas; i++) {
        for (int j = 0; j < columnas; j++) {
            printf("%d ", matriz[i][j]);
        }
        printf("\n");
    }
}