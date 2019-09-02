#include <stdio.h>
#include <stdlib.h>

int main()
{
    /* 04) Programa em C que mostra os números ímpares. */
    int i;
    for(i=0; i<=200; i++) {
        if (i%2==1) {
            printf("\n%d\n", i);
        }
    }
    return 0;
}
