#include <stdio.h>

int main() {
    int numero, i;
    printf("Ingrese un número entero: ");
    scanf("%d", &numero);
    printf("Los enteros comprendidos entre 1 y %d son:\n", numero);
     for (i = 1; i <= numero; i++) {
        printf("%d ", i);
    }
    printf("\n");

    return 0;

}
