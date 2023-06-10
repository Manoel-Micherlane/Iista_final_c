/*
17.Receber um número do teclado e informar se ele é divisível por 10, por
5, por 2 ou se não é divisível por nenhum destes.
*/


#include <stdio.h>

int main()
{
    int n, x;
    
    printf("Digite um número: ");
    scanf("%i", &n);
    
    
    printf("\nÉ divisível por: ");
    
    if((n % 2) == 0){
        printf(" 2 ");
        x++;
    }
     
    if((n % 5) == 0){
        printf(" 5 ");
        x++;
        
    }
    
    if((n % 10) == 0){
        printf(" 10 ");
        x++;
    }
    
    if(x == 0){
        printf("Nenhum desses.");
    }
}

