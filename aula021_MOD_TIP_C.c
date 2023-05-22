#include <stdio.h>
#include <stdlib.h>


int main (){
/*
        1) char
        2) int
        3) float
        4) double
        5) void - vazio

        1) singed   -> + e -
        2) unsinged -> +
        3) long     -> Aumentar a capacidade de armazenamento da nossa variável;
        4) short    -> Diminur o tamanho do armazenamento na nossa varíavel;
*/
    int i = 10  ;
    unsigned short int u;
        printf("\t\n\n%i -> variavel (u) \t\n\n", sizeof(u))   ;
        printf("\t\n\n%i -> variavel (i) \t\n\n", sizeof(i))   ;
    return 0;
}