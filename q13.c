/* 13.Para doar sangue é necessário ter entre 18 e 67 anos. Faça um
aplicativo que pergunte a idade de uma pessoa e diga se ela pode doar
sangue ou não.
*/


#include <stdio.h>

int main()
{
    int idade;
    
    printf("Digite a sua idade:  ");
    scanf("%i", &idade);
    
    if(idade >= 18 && idade <= 67){
        printf("Está apto para doar sangue.");
    }
    else{
        printf("Não está apto para doar sangue");
    }
}
