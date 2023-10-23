#include <stdio.h>

int main()
{
    int i, j, resultado;
    for (i = 1; i <= 10; i++)
    {
        // Se define que comienza del 1 hasta el 10
        printf("Tabla de multiplicar del %d:\n", i);
        for (j = 1; j <= 10; j++)
        {
            // se realiza una multiplicacion del numero nuemo
            resultado = i * j;
            printf("%d x %d = %d\n", i, j, resultado);
            // Se imprime el resultado final
        }
        printf("\n");
    }
    return 0;
}