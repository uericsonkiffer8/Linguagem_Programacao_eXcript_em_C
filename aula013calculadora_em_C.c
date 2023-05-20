#include <stdio.h>
#include <stdlib.h>

// ==========               =============
// ==========               =============

int main ()
{
    int num1, num2, soma, sub, multi, div;

    printf("Calculadora 1.0\n");
    printf("Digite os dois numeros a serem calculados: \n");
    scanf("%i%i", &num1, &num2);

    soma = num1 + num2;
    sub = num1 - num2;
    multi = num1 * num2;
    div = num1/num2;

    printf("A Soma entre num1 e num2 e': %i\n", soma);
    printf("A Sub entre num1 e num2 e': %i\n", sub);
    printf("A Multi entre num1 e num2 e': %i\n", multi);
    printf("A Div entre num1 e num2 e': %i\n", div);
    return 0;
}