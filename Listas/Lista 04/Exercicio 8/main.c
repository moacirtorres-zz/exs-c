#include <stdio.h>
#include <stdlib.h>

int main()
{
    /* 08) Escreva um programa que pergunta um n�mero ao usu�rio, e mostra sua tabuada completa (de 1 at� 10). */
    int tabuada, i;
    printf("Digite um numero para tabuada: ");
    scanf("%d", &tabuada);

    for (i=0; i<=10; i++) {
        printf("%d X %d = %d\n", tabuada, i, tabuada*i);
    }
    return 0;
}
