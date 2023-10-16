#include <stdio.h>

int main() {
    int numero, suma;
    printf("Ingrese un número entero: ");
    scanf("%d", &numero);
    suma = numero * (numero + 1) / 2;
    printf("La suma de todos los enteros entre 1 y %d es: %d\n", numero, suma);
    return 0;
}
