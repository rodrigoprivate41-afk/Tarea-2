#include <stdio.h>

int main()
{
    int a, b;

    printf("Ingresa el primer numero: ");
    scanf("%d", &a);

    printf("Ingresa el segundo numero: ");
    scanf("%d", &b);

    if (a != 0 && b % a == 0) 
        {
        printf("\n%d es divisor de %d\n", a, b);
        } 
    else if (b != 0 && a % b == 0)
        {
        printf("\n%d es divisor de %d\n", b, a);
        } 
        else 
        {
        printf("\nNinguno es divisor del otro\n");
        }

    return 0;
}
