    #include <stdio.h>
    #include <stdlib.h>

    int main ( )
    {
    //&&
    //(true)&&(true);

    int i = 40;
    int cond = (i > 20)&&(i < 100)  ;
        printf("\t\n%i\n\n", cond)  ;
         printf("\t\n%i\n\n", !cond)  ;
    
    //||
    //(true)||(false)   -> 1 ok (true)
    //(false||(true)    -> 1 ok (true)
    //(true)||(true)    -> 1 ok (true)
    //(false)||(false)  -> 0 ok (false)
    
    system("cls")   ;

    int x = 10  ;
    int cond2 = 0   ;
    cond2 = (x==10)||(x<1)  ;
    printf("\t\n%i\n\n", cond2) ;

    cond2 = (x==0)||(x!=1000)  ;
    printf("\t\n%i\n\n", cond2) ;

    cond2 = (x==10)||(x!=0)  ;
    printf("\t\n%i\n\n", cond2) ;

    cond2 = (x!=10)||(x==0)  ;
    printf("\t\n%i\n\n", cond2) ;
        
        return 0;

    }