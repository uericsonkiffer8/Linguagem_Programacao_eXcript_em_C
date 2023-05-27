#include <stdio.h>
#include <stdlib.h>

int main ()
{
int  i = 10 + (10 - 50);
/*
    ==ASSOCIACAO DA ESQUEDA PARA DIREITA==
    1) ()
    2) *, /, %
    3) +, -
    4) <, <=, >, >=
    5) ==, !=

    ==ASSOCIACAO DA DIREITA PARA ESQUERDA==
    1) --, ++
    2) =, +=, -=, *=, /=, %=
    
    a = (b = (c = 1));
   
    */

   int a , b , c ;
   a = (b = (c = 1)) ;
   printf("%i\n", a);
   printf("%i\n", b);
   printf("%i\n", c);
    return 0;
}