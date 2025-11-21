#include <stdio.h>

int main()
{
    int n, i, suma = 0;

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
        suma += arreglo[i];
    }

    printf("\nLa suma de los elementos del arreglo es: %d\n", suma);

    return 0;
}
