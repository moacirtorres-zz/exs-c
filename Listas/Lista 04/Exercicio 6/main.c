#include <stdio.h>
#include <stdlib.h>

int main()
{
    /* 06) Escreva um aplicativo em C que recebe inteiro e mostra os n�meros pares e �mpares (separados, em duas colunas), de 1 at� esse inteiro. */
    int num, i;
    printf("Digite um numer inteiro: ");
    scanf("%d", &num);
    printf("Pares \t\t Impares");
    for(i=0; i<=num; i++) {

        if(i%2==0) {
            printf("\n%d\n", i);
        } else {
        printf("\t\t%d\n", i);
    }
    }

    return 0;
    }
