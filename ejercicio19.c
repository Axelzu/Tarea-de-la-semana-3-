#include <stdio.h>


int esPrimo(int numero) {
    int i;
    if (numero <= 1) {
        return 0;
    }
   for (i = 2; i * i <= numero; i++) {
        if (numero % i == 0) {
            return 0;
        }
    }
    return 1;
}
int main() {
    int numero;
    printf("Ingrese un número entero: ");
    scanf("%d", &numero);
    if (esPrimo(numero)) {
        printf("%d es un número primo.\n", numero);
    } else {
        printf("%d no es un número primo.\n", numero);
    }

    return 0;
}
