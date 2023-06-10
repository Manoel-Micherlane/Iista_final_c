?*  24.Informe o tipo de carro (A, B e C) e a distância rodada em km, então
mostre o consumo estimado, conforme o tipo, sendo (A=8, B=9 e C=12)
km/litro.
*/
  
  
#include <stdio.h>

int main()
{
    char car;
    float km, lit;

    printf("\nInforme qual o tipo de carro (a, b, c):  \n");
    scanf("%c", &car);

    printf("\nInforme quantos quilômetros rodados:  \n");
    scanf("%f", &km);


    switch (car){
        case 'a':
            lit = 8 * km;
            break;
        case 'b':
            lit = 9 * km;
            break;
        case 'c':
            lit = 12 * km;
            break;
    }

    printf("\n %.2f Litros consumidos\n\n", lit);
}
