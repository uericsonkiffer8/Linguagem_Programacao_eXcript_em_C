#include <stdio.h>
#include <stdlib.h>
#include <conio.h>

int main()
{
    float num1, num2, resultado;
    char op = '0';

    do{
        num1 = num2 = resultado = 0;

        //imprimindo as  opcoes da nossa calculadora
        printf("\n    (1) somar\n") ;
        printf("    (2) subtrair\n") ;
        printf("    (3) multiplicar\n") ;
        printf("    (4) divisao\n") ;
        printf("    (0) sair do programa\n") ;
        
        printf("\nInforme a operacao:\n " ) ;
        printf("\t\t\t>>> ") ;
        op = getche();
        printf("\n") ;

        if( op != '0')
        {
            printf("Digite o primeiro numero:\t>>> ") ;
            scanf("%f", &num1) ;
            printf("Digite o primeiro numero:\t>>> ") ;
            scanf("%f", &num2) ;

            if ( op == '1')
            {
                resultado = num1 + num2;
            }else{
                if( op == '2'){
                    resultado = num1 - num2;
                }else{
                    if( op == '3'){
                        resultado = num1 * num2;    
                    }else{
                        if( op == '4'){
                        resultado = num1 / num2;
                        }
                    }
                }

            }
        }    
        
        printf("\nO resultado e' : \t\t>>>%f\n", resultado) ;
        
        // system("pause");    // Parar o programa
        
        printf("\n\nPressione uma tecla para realizar uma nova operacao: \n");
        getch() ;
        system("cls");      // Limpar a tela
    
    }while (op != '0') ;

    return 0;
}
