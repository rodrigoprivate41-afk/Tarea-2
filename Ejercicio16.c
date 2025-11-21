#include <stdio.h>

int main()
{
    int pares[100];
    int i, num = 2;
  
    for (i = 0; i < 100; i++)
      {
        pares[i] = num;
        num += 2;
      }

    printf("Los primeros 100 numeros pares son:\n");
    for (i = 0; i < 100; i++) 
    {
        printf("%d ", pares[i]);
    }

    printf("\n");

    return 0;
}
