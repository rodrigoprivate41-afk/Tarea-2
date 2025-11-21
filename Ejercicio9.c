#include <stdio.h>

int main() 
{
    int N, i;

    printf("Ingresa un numero entero: ");
    scanf("%d", &N);

    printf("\nTabla de multiplicar del %d:\n", N);

    for (i = 1; i <= 10; i++) 
    {
        printf("%d x %d = %d\n", N, i, N * i);
    }

    return 0;
}
