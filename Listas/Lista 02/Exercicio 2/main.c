#include <stdio.h>
#include <stdlib.h>

int main()
{
    /* 02) Ler um número inteiro e imprimir seu sucessor e seu antecessor. */

    int num;
    printf("Digite um numero inteiro: ");
    scanf("%d", &num);

    printf("\n\n O numero digitado foi %d, seu antecessor eh %d e seu sucesor eh %d", num, num-1, num+1);
    return 0;
}
