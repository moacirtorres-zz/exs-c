#include <stdio.h>
#include <stdlib.h>

int main()
{
    /* 04) Ler 2 números inteiros e soma-los. Se a soma for maior que 20, mostrar o resultado da soma mais 8 senão mostrar o resultado da soma menos 5. */
    int n1, n2;
    printf("Digite um numero: ");
    scanf("%d", &n1);
    printf("Digite um numero: ");
    scanf("%d", &n2);

    if(n1+n2>20) {
        printf("Soma eh %d", (n1+n2)-5);
    }
    return 0;
}

