#include <stdio.h>

int main() {
    double dolares, pesos;
    const double CAMBIO = 11.96;

    printf("Ingresa la cantidad en dolares: ");
    scanf("%lf", &dolares);

    pesos = dolares * CAMBIO;

    printf("\nEquivalente en pesos: %.2f\n", pesos);

    return 0;
}
