#include <stdio.h>
// Se arma primero la estructura base del proyecto
int main()
{
    // Inicialos la variable
    int n;
    printf("Ingrese un numero entero: ");
    // hacemos que lea la variable que se le pedira ingresar
    scanf("%d", &n);
    printf("Los enteros comprendidos entre 1 y %d son:\n", n);
    // Se le escribe lo que se se va a mostrar
    for (int i = 1; i <= n; i++)
    {
        printf("%d ", i);
    }
    printf("\n");
    return 0;
}