#include <stdio.h>
#include <stdlib.h>

int main()
{
    /* 08) Ler 2 valores e somar os dois. Caso a soma seja maior que 10, mostrar a soma. */
    int n1, n2;
    printf("Digite um valor: ");
    scanf("%d", &n1);
    printf("Digite um valor: ");
    scanf("%d", &n2);

    if (n1+n2>10) {
        printf("%d", n1+n2);
    }
    return 0;
}
