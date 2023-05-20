#include <stdio.h>
#include <stdlib.h>

// ==========                 ==========
// ========== www.eXcript.com ==========
// ==========                 ==========

int main()
{
    int num1, num2;
    num1 = 15;
    num2 = 30;

    int soma = num1 + num2;
    printf( "O resultado da soma e': %i\n", soma );

    int sub = num2 - num1;
    printf( "O resulado da sub e': %i\n", sub );

    int mult = num1 * num2;
    printf( "O resultado da mult e': %i\n", mult );

    int div = num2/num1;
    printf( "O resultado da div e': %i\n ", div );
    return 0;
}