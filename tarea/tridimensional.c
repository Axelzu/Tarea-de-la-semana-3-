#include <stdio.h>
//arreglo para inicializar la matriz con ceros 
void inicializarArreglo(int x, int y, int z, int arreglo[x][y][z]) {
    for (int i = 0; i < x; i++) {
        for (int j = 0; j < y; j++) {
            for (int k = 0; k < z; k++) {
                arreglo[i][j][k] = 0;
            }
        }
    }
}
// aqui el arreglo para que la ultima matriz nos de 1
void marcarUltimaMatriz(int x, int y, int z, int arreglo[x][y][z]) {
    for (int j = 0; j < y; j++) {
        for (int k = 0; k < z; k++) {
            arreglo[x-1][j][k] = 1;
        }
    }
}
// mostrara el arreglo tridimensional 
void mostrarArregloTridimensional(int x, int y, int z, int arreglo[x][y][z]) {
    for (int i = 0; i < x; i++) {
        for (int j = 0; j < y; j++) {
            for (int k = 0; k < z; k++) {
                printf("%d ", arreglo[i][j][k]);
            }
            printf("\n");
        }
        printf("\n");
    }
}
int main() {
    int x, y, z;
    
    printf("Ingrese las dimensiones del arreglo tridimensional:\n");
    printf("x: ");
    scanf("%d", &x);
    printf("y: ");
    scanf("%d", &y);
    printf("z: ");
    scanf("%d", &z);
    int arreglo[x][y][z];
    
    inicializarArreglo(x, y, z, arreglo);
    marcarUltimaMatriz(x, y, z, arreglo);
    mostrarArregloTridimensional(x, y, z, arreglo);

    return 0;
}