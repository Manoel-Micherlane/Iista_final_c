/* 21.Construa um programa que peça os lados de um triângulo e mostre o
tipo do triângulo: como isósceles, escaleno ou equilátero.
*/



#include <stdio.h>

int main(){
    
    int l1, l2, l3;
    
    printf("\nDigite o valor do primeiro lado:  ");
    scanf("%i", &l1);
    
    printf("\nDigite o valor do segundo lado:  ");
    scanf("%i", &l2);
    
    printf("\nDigite o valor do terceiro lado:  ");
    scanf("%i", &l3);
    
    printf("\n");
    if(l1 == l2 && l1 == l3)
    {
        printf("É um triângulo equilátero! \n");
    }
    else if( l1 != l2 && l1 != l3)
    {
        printf("É um triângulo escaleno! \n");
    }
    else
    {
        printf("É um triângulo Isósceles! \n");
    }
}
