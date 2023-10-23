#include <stdio.h>
// Se arma la estrucura base
int main()
{
    // Se inicia las variables
    int n, sum = 0;
    printf("Ingrese un numero entero: ");
    // hacemos que lea las variables
    scanf("%d", &n);
    // se inicia el for para el trabajo de suma
    for (int i = 1; i <= n; i++)
    {
        sum += i;
    }
    // se imprime el resultado
    printf("La suma de todos los enteros comprendidos entre 1 y %d es %d.\n", n, sum);
    return 0;
}