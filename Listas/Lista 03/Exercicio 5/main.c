#include <stdio.h>
#include <stdlib.h>

int main()
{
    /* 05) Ler um número e imprimir: maior que 20, igual a 20 ou menor que 20. */
    int num;
    printf("Digite um numero: ");
    scanf("%d", &num);
    if(num==20) {
        printf("Numero igual a 20");
    } else if (num>20) {
    printf("Numero maior que 20");
    } else if (num<20) {
    printf("Numero menor que 20");
    }
    return 0;
}
