/* 6. Fazer um programa que solicite 2 números e informe:
a. A soma dos números;
b. O produto do primeiro número pelo quadrado do segundo;
c. O quadrado do primeiro número;
d. A raiz quadrada da soma dos quadrados;
e. O seno da diferença do primeiro número pelo segundo;
*/


#include <stdio.h>
#include <math.h>

int main()
{
    float a, b, x, y;
    
    printf("Digite o primeiro número:  ");
    scanf("%f", &a);
    
    printf("Digite o segundo número:  ");
    scanf("%f", &b);
    
    x = sqrt((a * a) + (b * b));
    y = sin(a-b);
    
    printf("\n%f\n%f\n%f\n%f\n%f\n", (a+b), (a * b *b), (a * a), x, y);
}
