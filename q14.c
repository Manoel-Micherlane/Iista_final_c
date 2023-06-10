/* 14.Escreva um programa que recebe um inteiro e diga se é par ou ímpar.
*/


#include <stdio.h>

int main()
{
    int n;
    
    printf("Digite um número:  ");
    scanf("%i", &n);
    
    if ((n % 2) == 0){
        printf("É um númro par.");
    }
    else{
        printf("É um número ímpar.");
    }
}
