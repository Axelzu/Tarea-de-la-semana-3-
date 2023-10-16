int main() {
    int num1, num2;
    printf("Ingrese el primer número entero: ");
    scanf("%d", &num1);
    printf("Ingrese el segundo número entero: ");
    scanf("%d", &num2);
    int num1_primos = contar_digitos_primos(abs(num1));
    int num2_primos = contar_digitos_primos(abs(num2));

    if (num1_primos > num2_primos) {
        printf("El primer número %d tiene más dígitos primos que el segundo número %d.\n", num1, num2);
    } else if (num1_primos < num2_primos) {
        printf("El segundo número %d tiene más dígitos primos que el primer número %d.\n", num2, num1);
    } else {
        printf("Ambos números tienen la misma cantidad de dígitos primos.\n");
    }
    return 0;
}