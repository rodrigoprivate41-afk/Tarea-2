#include <stdio.h>

int main() 
{
    int n, i, buscar, contador = 0;

    printf("¿Cuantos elementos tendra el arreglo?: ");
    scanf("%d", &n);

    int arreglo[n];

    for (i = 0; i < n; i++)
      {
        printf("Ingresa el elemento %d: ", i + 1);
        scanf("%d", &arreglo[i]);
      }

    printf("\nIngresa el numero que deseas buscar: ");
    scanf("%d", &buscar);

    for (i = 0; i < n; i++) 
    {
        if (arreglo[i] == buscar) 
        {
            contador++;
        }
    }

    printf("\nEl numero %d aparece %d veces en el arreglo.\n", buscar, contador);

    return 0;
}
