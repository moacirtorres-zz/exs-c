#include <stdio.h>
#include <stdlib.h>

int main()
{
    /* 07) Escreva um programa em C que solicita 10 números ao usuário, através de um laço while, e ao final mostre qual destes números é o maior. */

    int i=0, num, maior;
    while (i<=10) {
        printf("Digite um numero: ");
        scanf("%d", &num);

        if (num>maior) {
            maior = num;
        }
        i++;
    }
    printf("O maior numero eh %d", num);
}
