#include <stdio.h>
#include <stdlib.h>

int main()
{
    /* 05) Programa em C que mostra os números pares. */
    int i;
    for(i=0; i<=200; i++) {
        if (i%2==0) {
            printf("\n%d\n", i);
        }
    }
    return 0;
}
