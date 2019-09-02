#include <stdio.h>
#include <stdlib.h>

int main()
{
    /* 03) Receber um valor qualquer do teclado e imprimir esse valor com reajuste de 10%.. */

    float valor;
    printf("Digite um valor: ");
    scanf("%f", &valor);

    printf("\n\n O valor eh %f e seu reajusta com 10%% eh %.2f", valor, valor*1.10);
    return 0;
}
