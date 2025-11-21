#include <stdio.h>

int main() 
{
    double sueldo, sueldo_nuevo;

    printf("Ingresa el sueldo del trabajador: ");
    scanf("%lf", &sueldo);

    if (sueldo < 1000)
    {
        sueldo_nuevo = sueldo + (sueldo * 0.15);  
    } 
    else
    {
        sueldo_nuevo = sueldo + (sueldo * 0.12);
    }

    printf("\nSueldo con aumento: %.2f\n", sueldo_nuevo);

    return 0;
}
