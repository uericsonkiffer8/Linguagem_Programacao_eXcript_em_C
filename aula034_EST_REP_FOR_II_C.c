#include <stdio.h>
#include <stdlib.h>

int main ()
{
  /*
    for( parte1; parte2; part3)

    parte1 -> inicializacao
    parte2 -> condicao
    parte3 -> atualizacao

  */

 for (int a = 0, b =10; a <= 10; ++a, --b){
        printf("%i", a);
        printf(" - ");
        printf("%i\n", b); 

 }  
    return 0;
}