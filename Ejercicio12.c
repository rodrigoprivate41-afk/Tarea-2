#include <stdio.h>

int main() 
{
    int N, i = 1;
    int producto = 1;

    printf("Ingresa el valor de N: ");
    scanf("%d", &N);

    while (i <= N)
      {
        producto *= i;
        i++;
      }

    printf("\nEl producto de los %d primeros numeros naturales es: %d\n", N, producto);

    return 0;
}
