#include <stdio.h>

int main() {
    int numero, suma;
    printf("Ingrese un número entero: ");
    scanf("%d", &numero);
    suma = numero * (numero + 1) / 2;
    return 0;
}
