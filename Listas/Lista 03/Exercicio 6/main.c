#include <stdio.h>
#include <stdlib.h>

int main()
{
    /* 06) Receber um número do teclado e informar se ele é divisível por 10, por 5, por 2 ou se não é divisível por nenhum destes. */

    int num;
    printf("Digite um numero: ");
    scanf("%d", &num);

    if (num%10 == 0 && num%2 == 0 && num%5 == 0) {
        printf("Numero divisivel por 10, 5 e 2");
    } else if (num%10 == 0 && num%2 == 0) {
    printf("Numero divisivel por 10, 2");
    } else if (num%10 == 0 && num%5 == 0) {
    printf("Numero divisivel por 10, 5");
    } else if (num%5 == 0) {
    printf("Numero divisivel por 5");
    } else if (num%2 == 0) {
    printf("Numero divisivel por 2");
    }
    return 0;
}
