#include <stdio.h>
#include <stdlib.h>

int main()
{
    /* 5. Faça um programa que lê um vetor de 3 elementos e uma matriz
de 3 x 3 elementos. Em seguida o programa deve fazer a
multiplicação do vetor pelas colunas da matriz. */

    int vetor[3];
    int matriz[3][3];
    int i, j, k;

    for (i=0; i<3; i++)
    {
        for (j=0; j<3; j++)
        {
            printf("Elemento [%d][%d] = \n", i, j);
            scanf("%d", &matriz[i][j]);
        }
    }


    for (i=0; i<3; i++)
    {
        printf("Vetor [%d] = ", i);
        scanf("%d", &vetor[i]);
    }



    for (i=0; i<3; i++)
    {
        for (j=0; j<3; j++)
        {
            matriz[i][j] = vetor[i]*matriz[i][j];
        }
    }


    for (i=0; i<3; i++)
    {
        for (j=0; j<3; j++)
        {
            printf("%d\t", matriz[i][j]);
        }
    }


}


