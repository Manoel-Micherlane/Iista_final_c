/*  22.Escreva um programa que pergunte o dia, mês e ano do aniversário de
uma pessoa e diga se a data é válida ou não. Caso não seja, diga o
motivo. Suponha que todos os meses têm 31 dias e que estejamos no
ano de 2023.
*/


#include <stdio.h>

int main(){

    int dia, mes, ano, err;

    err = 0;

    printf("Digite o dia do seu nascimento:  ");
    scanf("%i", &dia);

    printf("Digite o mes do seu nascimento:  ");
    scanf("%i", &mes);

    printf("Digite o ano do seu nascimento:  ");
    scanf("%i", &ano);

    if(ano > 2023)
    {
        err = 1;
    }
    else if(mes > 12 || mes < 1)
    {
        err = 2;
    }
    else if(dia > 31 || dia < 1)
    {
        err = 3;
    }

    if(err == 1)
    {
        printf("\nAno inválido\n");
    }
    else if(err == 2)
    {
        printf("\nMes inválido\n");
    }
    else if(err == 3)
    {
        printf("\nDia inválido\n");
    }
    else{
        printf("\nData Válida!\n");
    }
}
