#include <stdio.h>
#include <stdlib.h>

int main()
{
    /* 02) Apresentar os quadrados dos números inteiros de 15 a 200. */
    int quadrado, i;
    for (i=15; i<=200; i++) {
        quadrado = i*i;
        printf("\n%d\n", quadrado);
    }
}
