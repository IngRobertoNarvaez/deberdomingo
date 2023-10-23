#include <stdio.h>

int main()
{
    int n;
    printf("Ingrese un numero entero: "); // Se solicita al usuario que ingrese un numero entero
    scanf("%d", &n);                      // Se lee el numero entero ingresado por el usuario
    if (n <= 1)
    { // Si el numero es menor o igual a 1, entonces no es primo
        printf("%d no es primo.\n", n);
        return 0;
    }

    return 0;
}
