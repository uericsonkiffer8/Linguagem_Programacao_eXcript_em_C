#include <stdio.h>
#include <stdlib.h>

int main ()
{
int x = 0;
// x = x + 1 é      igual a      // x += 1;

while(x <= 11) {
        printf("\tmsg\n");
        x += 1;
}
/*
    1) += -> soma
    2) -= -> sub
    3) *= -> multi
    4) /= -> div
    5) %= -> resto
*/
    printf("\n\n");
    
    int i = 50;
    printf("\t\tSoma\t(+):\t%i\n", i+=100);
    printf("\t\tSub\t(-): \t%i\n", i-=50);
    printf("\t\tMulti\t(*):\t%i\n", i*=3);
    printf("\t\tDiv\t(/):  \t%i\n", i/=3);
    printf("\t\tResto\t(%%):\t%i\n", i%=3);
    printf("\n\n");
    printf("\tThanks for making it this far,\n\t\t\tand don't forget to subscribe.\n\t\tThat's all, folks\n");
    printf("\n\n");
    return 0;
}