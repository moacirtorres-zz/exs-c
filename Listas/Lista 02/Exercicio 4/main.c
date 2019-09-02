#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
#include <math.h>

int main()
{
    /* 04) Informar tres números inteiros e imprimir a média. */

    int a, b, c;

    printf("Digite um numero: ");
    scanf("%d", &a);
    printf("Digite um numero: ");
    scanf("%d", &b);
    printf("Digite um numero: ");
    scanf("%d", &c);

    printf("\n\n A media eh %d", (a+b+c)/3);


    return 0;
}
