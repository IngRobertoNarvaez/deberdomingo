#include <stdio.h>

// Funcion para determinar si un numero es primo
int es_primo(int n)
{
    if (n <= 1)
    {
        return 0;
    }
    for (int i = 2; i * i <= n; i++)
    {
        if (n % i == 0)
        {
            return 0;
        }
    }
    return 1;
}

int main()
{
    int num1, num2, digito, contador1 = 0, contador2 = 0;
    printf("Ingrese dos numeros enteros: ");
    scanf("%d %d", &num1, &num2);
    // Determinar la cantidad de digitos primos en el primer numero
    while (num1 > 0)
    {
        digito = num1 % 10;
        for (int i = 2; i <= digito; i++)
        {
            if (digito % i == 0 && es_primo(i))
            {
                contador1++;
            }
        }
        num1 /= 10;
    }

    // Determinar la cantidad de digitos primos en el segundo numero
    while (num2 > 0)
    {
        digito = num2 % 10;
        for (int i = 2; i <= digito; i++)
        {
            if (digito % i == 0 && es_primo(i))
            {
                contador2++;
            }
        }
        num2 /= 10;
    }

    return 0;
}
