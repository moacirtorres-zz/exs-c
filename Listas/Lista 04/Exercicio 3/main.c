#include <stdio.h>
#include <stdlib.h>

int main()
{
    /* 03) Apresentar todos os números divisíveis por 4 que sejam menores que 200. */
    int i;
    for (i=0;i<=200; i++) {
        if (i%4==0) {
            printf("\n%d\n", i);
        }
    }
    return 0;
}
