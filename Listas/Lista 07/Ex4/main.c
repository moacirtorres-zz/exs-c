#include <stdio.h>
#include <stdlib.h>

int main()
{
    /* 4. Faça um programa que lê uma matriz de 3 x 3 elementos usando
um comando for, multiplica cada elemento por 5 e imprime o
resultado. */

int matriz[3][3];
int i, j;

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
    for (j=0; j<3; j++)
    {
        matriz[i][j] = matriz[i][j]*5;
    }
}

for (i=0; i<3; i++)
{
    for (j=0; j<3; j++)
    {
        printf("%d \t", matriz[i][j]);
    }
}

}
