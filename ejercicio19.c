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
