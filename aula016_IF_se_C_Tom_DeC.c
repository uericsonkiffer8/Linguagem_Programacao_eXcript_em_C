#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>

// ==========               =============
// ==========               =============

int main ()
{
    char c;
    printf("Digite um caractere em letra minuscula: ");
    scanf( "%c", &c );

    if( c>= 'a')
    {
        printf("\n\t segue a letra que voce digitou em maiuscula: > %c < \n\n",
                toupper( c ) );

    }

    return 0;
}