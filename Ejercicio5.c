#include <stdio.h>

int main()
{
    double compra, total;

    printf("Ingresa el monto de la compra: ");
    scanf("%lf", &compra);

    if (compra > 2500) 
    {
        total = compra - (compra * 0.08);
    }
    else
    {
        total = compra;
    }

    printf("\nTotal a pagar: %.2f\n", total);

    return 0;
}
