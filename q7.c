/* 7. Receber um nome e imprimir as 4 primeiras letras do nome. */


#include <stdio.h>

int main()
{
    char nome[4];
    
    printf("Digite seu nome:  ");
    scanf("%4s", nome);
    
    for(int c = 0; c < 4; c++)
    {
        printf("\n%c ", nome[c]);
    }
    
}
