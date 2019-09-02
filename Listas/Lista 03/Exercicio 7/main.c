#include <stdio.h>
#include <stdlib.h>

int main()
{
    /* 07) Ler a idade de uma pessoa e informar a sua classe eleitoral.
a. Não-eleitor (abaixo de 16 anos)
b. Eleitor obrigatório (entre 18 e 65 anos)
c. Eleitor facultativo (entre 16 e 18 e maior de 65 anos) */
    int id;
    printf("Digite sua idade: ");
    scanf("%d", &id);

    if (id<16) {
        printf("Nao-eleitor");
    } else if (id>=18 && id<=65) {
    printf("Eleitor obrigatorio");
    } else if (id>16 && id<19) {
    printf("Eleitor facultativo");
    } else if (id>65) {
    printf("Eleitor facultativo");
    }
    return 0;
}
