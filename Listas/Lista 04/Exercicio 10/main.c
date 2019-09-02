#include <stdio.h>
#include <stdlib.h>

int main()
{
    int pato, i;
    printf("Digite o numero de patos: ");
    scanf("%d", &pato);

    for (i=pato; i>=1; i--) {

    printf("\n%d patinhos foram passear\nAlem das montanhas\nPara brincar\nA mamae gritou: Qua, qua, qua\nMas so %d patinhos voltaram de la\n", i, i-1);

    if (i == 1) {
      printf("\n\nA mamae patinha foi procurar\nAlem das montanhas\nNa beira do mar\n A mamae gritou: Qua, qua, qua, qua\n E os %d patinhos voltaram de la", pato);
    }

    }

    return 0;
}
