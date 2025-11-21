#include <stdio.h>

int main() 
{
    int n, i;
    int positivos = 0, negativos = 0, nulos = 0;

    printf("¿Cuantos elementos tendra el arreglo?: ");
    scanf("%d", &n);

    int arreglo[n];

    for (i = 0; i < n; i++) 
    {
        printf("Ingresa el elemento %d: ", i + 1);
        scanf("%d", &arreglo[i]);
    }

    for (i = 0; i < n; i++) 
    {
        if (arreglo[i] > 0)
        {
            positivos++;
        } 
        else if (arreglo[i] < 0) 
        {
            negativos++;
        }
        else 
        {
            nulos++;
        }
    }

    printf("\nPositivos: %d\n", positivos);
    printf("Negativos: %d\n", negativos);
    printf("Nulos: %d\n", nulos);

    return 0;
}
