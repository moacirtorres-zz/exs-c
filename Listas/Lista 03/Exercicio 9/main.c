#include <stdio.h>
#include <stdlib.h>

int main()
{
    /* 09) Ler um número inteiro e verificar se está compreendido entre 20 e 80. Se tiver, imprimir “parabéns”, senão imprimir “chimpanzé”. */
    int num;
    printf("Digite um numero: ");
    scanf("%d", &num);

    if (num>=20 && num<81) {
        printf("Parabens");
    } else {
    printf("Chimpanzé");
    }
    return 0;
}
