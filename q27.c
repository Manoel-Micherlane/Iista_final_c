/*  27.Escreva um programa que pergunta um número ao usuário, e mostra
sua tabuada completa (de 1 até 10).
*/



#include <stdio.h>

int main()
{
    int n;
    int x = 1;

    printf("Digite um número:  ");
    scanf("%i", &n);


    while(x < 11){
        printf("%i x %i = %i\n", n, x, (x * n));
        x++;
    }

}
