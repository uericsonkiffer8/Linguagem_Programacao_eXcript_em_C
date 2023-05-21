#include <stdio.h>
#include <stdlib.h>


// ==========               =============
// ==========               =============

int main ()
{
    int i = 10;

  /* if(5==5) // Comparacao
   {

   } else{

   }
   */

    // printf("\n\t%i\n", i!=1);
     printf( "Digite um numero != 5 : \n" );
     scanf( "%i", &i );

            if(i!=5)
            {
                printf("\nA expressao e':\n"); 
                printf("TRUE");
            }else{
                printf("\nA expressao e':\n"); 
                printf("FALSE\n");
            }

    //! é um sinal de negação, igual a expressao NOT

    /*
    1) positivo -> 1
    2) negativo -> 0   
    */

   // == comparacao positiva 
   // != comparacao negativa

    return 0;
}