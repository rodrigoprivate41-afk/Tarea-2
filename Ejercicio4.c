#include <stdio.h>

int main() {
    double capital, tasa, montofinal;

    printf("Ingresa la cantidad invertida: ");
    scanf("%lf", &capital);

    printf("Ingresa la tasa de interes mensual: ");
    scanf("%lf", &tasa);

    montofinal = capital + (capital * tasa);

    printf("\nMonto al finalizar el mes: %.2f\n", montofinal);

    return 0;
}
