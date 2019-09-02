#include <stdio.h>
#include <stdlib.h>

int main()
{
    /* 03) Ler 2 números inteiros e soma-los. Se a soma for maior que 10, mostrar o resultado da soma. */
    int n1, n2;
    printf("Digite um numero: ");
    scanf("%d", &n1);
    printf("Digite um numero: ");
    scanf("%d", &n2);

    if(n1+n2>10) {
        printf("Soma eh %d", n1+n2);
    }
    return 0;
}
