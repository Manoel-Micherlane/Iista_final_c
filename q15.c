
/* 15.Faça um programa que receba a idade de uma pessoa e mostre na
saída em qual categoria ela se encontra:
● 10-14 infantil
● 15-17 juvenil
● 18-25 adulto
*/



#include <stdio.h>

int main()
{
    int idade;
    
    printf("Digite a sua idade:  ");
    scanf("%i", &idade);
    
    if(idade >= 10 && idade <= 14){
        printf("Infantil.");
    }
    else if(idade >= 15 && idade <= 17){
        printf("Juvenil.");
    }
    else if(idade >= 18 && idade <= 25){
        printf("Adulto.");
    }
}
