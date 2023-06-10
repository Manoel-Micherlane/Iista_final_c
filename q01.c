/*1. Escreva um programa que pergunte o raio de uma circunferência, e em
seguida mostre o diâmetro, comprimento e área da circunferência.
*/


#include <stdio.h>

int main()
{
    float r, dia, per, area;
    
    printf("Digite o raio da circunferência:  ");
    scanf("%f", &r);
    
    dia = 2 * r;
    per = 2 * 3.14159265359 * r;
    area = 3.14159265359 * r * r;
    
    printf("\nRaio = %f\nDiâmetro = %f\nPerímetro = %f\nÁrea = %f\n", r, dia, per, area);
}
