#include <stdio.h>
#include <stdlib.h>

int main ()
{
/*
switch (expressao){
    case (expressao-cost):
        break;
    case (true)
        break;
    default:
    // Não há necessidade de colocarmos um break;
    
}
*/
    printf("Digite um valor entre 0 e 9\n>>> ");
    int i; 
    scanf("%i", &i);

    switch(i) {
    case 0:
    printf("\t 'zero'\n");
    break;
    case 1: printf("\nvoce\n");
    case 2: printf("\ndigitou\n");
    case 3: printf("\num num.\n");
    //break;
    case 4: printf("\nentre\n");
    case 5: printf("\n1 e 5\n");

    printf("\tVoce digitou um num. entre 1 e 5\n");
    //break;

    case 6:
    printf("\tA opcao digitada foi 'seis'\n");
    //break;
    case 7:
    printf("\tA opcao digitada foi 'sete'\n");
    break;
    case 8:
    printf("\tA opcao digitada foi 'oito'\n");
    break;
    case 9:
    printf("\tA opcao digitada foi 'nove'\n");
    break;

    case 45:
    printf("\tA opcao digitada foi 'quarenta e cinco'\n");   
    break;
    default:
        // A nossa instrucao default sera executada caso
        // 1) Caso nenhum intem seja satisfatorio
        // 2) Nao haja  a instrucao break
        
       printf("\tA opcao 'default'\n");

    }
  
        return 0;

}