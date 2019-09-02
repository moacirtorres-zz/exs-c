#include <stdio.h>
#include <stdlib.h>

int main()
{
    /* 02) Ler um número e se for maior que 20 imprimir a metade desse numero. */
    float num;
    printf("Digite um numero: ");
    scanf("%f", &num);

    if (num>20) {
        printf("%.2f", num/2);
    }
    return 0;
}
