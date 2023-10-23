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
    for (int i = 2; i * i <= n; i++)
    { // Si el numero es mayor que 1, el bucle comienza en 2 y
        // continua hasta la raiz cuadrada del numero ingresado, ya que ningun factor de un numero
        // puede ser mayor que su raiz cuadrada
        if (n % i == 0)
        { // Si el numero es divisible por algun numero entre 2 y su raiz cuadrada,
            // entonces no es primo y el programa imprime que el numero no es primo
            printf("%d no es primo.\n", n);
            return 0;
        }
    }

    return 0;
}
