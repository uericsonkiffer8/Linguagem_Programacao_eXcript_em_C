    #include <stdio.h>
    #include <stdlib.h>

   int main()
   {

    int  iJ, iI;
    iJ = 17;
    iI = 60;
    int idade = 0;

    printf("\n\tDigite a idade de uma pessoa: \n\n")    ;
    scanf("%i", &idade);

    if(idade <= iJ)
    {
        printf("\n\tA idade informada eh de um jovem.\n\n")    ;
    }else{
        if(idade >= iI) {
            printf("\n\tA idade informada eh de um idoso. \n\n")    ;
        }else{
            if  ((idade > iJ)&&(idade < iI)) {
                    printf("\n\t A idade informada eh de uma pessoa na meia idade. \n\n ")  ;
            }
        }        
    }
        return 0;
    }