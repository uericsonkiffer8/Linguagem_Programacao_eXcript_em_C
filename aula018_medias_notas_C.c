#include <stdio.h>
#include <stdlib.h>


int main (){

    float nota1, nota2, nota3, nota4, media;
    nota1 = nota2 = nota3 = nota4 = media = 0;

    printf("==========  MEDIA ESCOLAR ==========\n\n");
    printf("Digite sua 1a nota bimentral: \n\n");
    scanf("%f", &nota1);
    printf("Digite sua 2a nota bimentral: \n\n");
    scanf("%f", &nota2);
    printf("Digite sua 3a nota bimentral: \n\n");
    scanf("%f", &nota3);
    printf("Digite sua 4a nota bimentral: \n\n");
    scanf("%f", &nota4);
    
    media = (nota1 + nota2 + nota3 + nota4) / 4;

    printf("A sua media escolar foi de: %f\n", media);

    if(media >= 7)
    {
        printf("\tVoce foi aprovado.\n");
    }else{
        printf("\tVoce foi reprovado!\n");
    }

    return 0;
}