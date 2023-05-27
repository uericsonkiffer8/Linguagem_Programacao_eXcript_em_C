#include <stdio.h>
#include <stdlib.h>

int main ()
{
    /*
        >>> OPERADORES DE ATRIBUICAO <<< 
     Soma -> +=
     Subtracao -> -+
     Multiplicacao -> *=
     Divisao -> /=
     Modulo -> %=
    */

    int i = 1;
    printf("%i\n", i);
    printf( "%i\n", ++i );
    i++;
    printf("%i\n", i++);

    system("cls");
       
    int i2 = 5;
    printf("%i\n", i2);
    printf("%i\n", --i2 );
    i2--;
    printf("%i\n", i2--);

    /*
        1) Incremento\
        ---------------> Pre ou Pos
        2) Decremento/

        Pre -> O valor sera incrementado/Decrementado
        na instrucao em que a variavel estiver contida;
        Pos -> O valor sera incrementado/Decrementado na
        instrucao seguinte a que contenha a variavel contida;
    */

    int x = 0;
    x = x + 1; // incrementar qts unidades desejarmos;
    x += 1; // incrementar qts unidades desejarmos;
    ++x; // Op. incremento, so podemos incrementar uma unica und.         
    
    system("cls");

    printf("%i\n", x);

        return 0;
}