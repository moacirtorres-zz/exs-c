#include <stdio.h>
#include <stdlib.h>

int main()
{
    /* 01) Escrever seu nome na tela 10 vezes. Um nome por linha. */
    int i;
    char nome[61];
    for (i=0; i<=10; i++) {
        printf("Escreva seu nome: \n");
        scanf("%s", &nome);
        printf("\n%s\n", nome);
    }
    return 0;
}
