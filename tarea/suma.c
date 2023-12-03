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
// aqui es para la suma entre las 2 matrices
void sumarMatrices(int filas, int columnas, int matriz1[filas][columnas], int matriz2[filas][columnas], int resultado[filas][columnas]) {
    for (int i = 0; i < filas; i++) {
        for (int j = 0; j < columnas; j++) {
            resultado[i][j] = matriz1[i][j] + matriz2[i][j];
        }
    }
}
int main() {
    int filas, columnas;

    printf("Ingrese el número de filas de las matrices: ");
    scanf("%d", &filas);
    printf("Ingrese el número de columnas de las matrices: ");
    scanf("%d", &columnas);

    int matriz1[filas][columnas];
    int matriz2[filas][columnas];
    int resultado[filas][columnas];

    inicializarMatriz(filas, columnas, matriz1);
    inicializarMatriz(filas, columnas, matriz2);

    printf("Matriz 1:\n");
    mostrarMatriz(filas, columnas, matriz1);

    printf("Matriz 2:\n");
    mostrarMatriz(filas, columnas, matriz2);

    sumarMatrices(filas, columnas, matriz1, matriz2, resultado);

    printf("Matriz Resultado:\n");
    mostrarMatriz(filas, columnas, resultado);

    return 0;
}