/* 23.Faça um programa que diz quantos dias um mês possui.
*/


#include <stdio.h>

int main()
{
    int mes;

    printf("Digite o mês desejado: ");
    scanf("%i", &mes);

    switch (mes){
        case 2:
            printf("\n28/29 dias\n");
            break;
        case 4:
            printf("\n30\n");
            break;
        case 6:
            printf("\n30\n");
            break;
        case 9:
            printf("\n30\n");
            break;
        case 11:
            printf("\n30\n");
            break;
        default :
            printf("\n31\n");
            break;
    }
}
