#include <stdio.h>
#include <stdlib.h>
#include <string.h>
int main()



{
char nome[61];
char sexo;
int id;
    /* 01) Ler nome, sexo e idade. Se sexo for feminino e idade menor que 25. Imprimir o nome da pessoa e a palavra ACEITA. Caso contrario imprimir NAO ACEITA. */
    printf("Digite sua nome: ");
    scanf("%s", &nome);
    printf("Digite seu sexo (M ou F): ");
    scanf(" %c", &sexo);
    printf("Digite sua idade: ");
    scanf("%d", &id);



    if( sexo == 'F' && id<25) {
        printf("Cara %s, voce foi aceita!", nome);
    } else {
    printf("Nao aceita");
    }
}
