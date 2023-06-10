
/* 9. Informe o tempo gasto numa viagem (em horas), a velocidade média e
mostre a distância percorrida.
*/

#include <stdio.h>

int main() {
    float t, v, d;

    printf("Digite o tempo gasto na viagem (em horas): ");
    scanf("%f", &t);

    printf("Digite a velocidade média (em km/h): ");
    scanf("%f", &ve);

    d = t * v;

    printf("Distância percorrida: %.2f km\h", d);

    return 0;
}
