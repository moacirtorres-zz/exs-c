#include <stdio.h>
#include <stdlib.h>



int main(void){

char tecla[0];

printf("Aperte a tecla para ver seu valor:");

tecla[0] = getche();

printf("\nValor ASCII:%d\nValor em Hexa:%x",tecla[0],tecla[0]);

}
