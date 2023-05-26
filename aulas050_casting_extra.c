#include <stdio.h>
#include <stdlib.h>

int main ()
{
    int a = 3;
    int b = 2;
    double pontos = (double)a / (double)b;
    printf("%f\n", pontos);

    double pi = 3.1415;
    int piconvertido = (int)pi;
    printf("%f %d\n", pi, piconvertido);
    return 0;
}

