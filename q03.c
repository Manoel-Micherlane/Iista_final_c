/*3. Fazer um programa que pergunta um valor em metros e imprime o
correspondente em decímetros, centímetros e milímetros.
*/


#include <stdio.h>

int main()
{
    float m;
    
    printf("Digite o valor em metros:  ");
    scanf("%f", &m);
    
    printf("\nMetros = %.2f\nDecímetros = %.2f\nCentímetros = %.2f\nMilímetros = %.2f\n", m, (m * 10), (m * 100), (m * 1000));
}
