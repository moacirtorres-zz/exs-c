#include <stdio.h>
#include <stdlib.h>

int main()
{
    /* 05) Informe o tempo gasto numa viagem (em horas), a velocidade média e calcule o consumo. */

    float tempo, vm, distancia, kmh=10;
    printf("Informe o tempo gasto na viagem em horas: ");
    scanf("%f", &tempo);
    printf("Informe a velocidade media em km/h: ");
    scanf("%f", &vm);

    distancia = vm*tempo;
    printf("O consumo foi de %.2f litros", distancia/kmh);

    return 0;
}
