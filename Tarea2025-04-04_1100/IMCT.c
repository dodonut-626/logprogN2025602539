#include <stdio.h>

int main() {
    float altura, peso;
    float imc;

    printf("Proporcione su peso en kg: ");
    scanf("%f", &peso);

    printf("Proporcione su altura en metros: ");
    scanf("%f", &altura);

    imc = peso / (altura * altura);

    printf("Tu IMC es: %.2f\n", imc);

    if (imc <= 18.4) {
        printf("Categoria: Bajo peso\n");
    } else if (imc <= 24.9) {
        printf("RANGO: Normal\n");
    } else if (imc <= 29.9) {
        printf("RANGO: Sobrepeso\n");
    } else if (imc <= 34.9) {
        printf("RANGO: Obesidad clase 1\n");
    } else if (imc <= 39.9) {
        printf("RANGO: Obesidad clase 2\n");
    } else {
        printf("RANGO: Obesidad clase 3\n");
    }

    return 0;
}
