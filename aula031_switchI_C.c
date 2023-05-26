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
    printf("Digite um valor entre 0 e 9\n");
    int i; 
    scanf("%i", &i);

    switch(i) {
    case 0:
    printf("\tA opcao digitada foi 'zero'");
    break;
    case 1:
    printf("\tA opcao digitada foi 'um'");
    break;
    case 2:
    printf("\tA opcao digitada foi 'dois'");
    break;
    case 3:
    printf("\tA opcao digitada foi 'tres'");
    break;
    case 4:
    printf("\tA opcao digitada foi 'quatro'");
    break;
    case 5:
    printf("\tA opcao digitada foi 'cinco'");
    break;
    case 6:
    printf("\tA opcao digitada foi 'seis'");
    break;
    case 7:
    printf("\tA opcao digitada foi 'sete'");
    break;
    case 8:
    printf("\tA opcao digitada foi 'oito'");
    break;
    case 9:
    printf("\tA opcao digitada foi 'nove'");
    break;   
    default:
        printf("\tA opcao 'default'\n");

    }
  
        return 0;

}