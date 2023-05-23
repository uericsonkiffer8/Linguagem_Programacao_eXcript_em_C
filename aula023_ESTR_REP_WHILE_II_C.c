#include <stdio.h>
#include <stdlib.h>

int main ()
{
    int x = 1;
    int valDigitado = 0;

    printf("Informe a qtd de X que vc deseja repetir a instrucao: \n");
    scanf("%i", &valDigitado);

    while( x < valDigitado) {
        printf("\t%i\n\n", x * 10);
        x = x + 1;
    }
    return 0;
}