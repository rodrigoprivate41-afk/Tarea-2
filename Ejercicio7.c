#include <stdio.h>

int main() 
{
    double distancia_ida, distancia_total, precio, precio_final;
    int dias;
    const double precio_km = 0.23;

    printf("Ingresa la distancia de ida en km: ");
    scanf("%lf", &distancia_ida);

    printf("Ingresa los dias de estancia: ");
    scanf("%d", &dias);

    distancia_total = distancia_ida * 2;          
    precio = distancia_total * precio_km;         

    if (dias > 7 && distancia_total > 800)
    {
        precio_final = precio - (precio * 0.30);  
    }
    
    else
    {
        precio_final = precio;
    }

    printf("\nPrecio del ticket: %.2f\n", precio_final);

    return 0;
}
