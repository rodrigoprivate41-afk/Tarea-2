#include <stdio.h>

int main() 
{
    int num;
    int positivos = 0, negativos = 0, nulos = 0;
    int i;

    for (i = 1; i <= 100; i++)
      {
        printf("Ingresa el numero %d: ", i);
        scanf("%d", &num);

        if (num > 0) 
        {
            positivos++;
        } 
        else if (num < 0) 
        {
            negativos++;
        } 
          else
          {
            nulos++;
          }
    }

    printf("\nCantidad de positivos: %d\n", positivos);
    printf("Cantidad de negativos: %d\n", negativos);
    printf("Cantidad de nulos: %d\n", nulos);

    return 0;
}
