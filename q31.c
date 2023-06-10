/* 31. Imprimir a tabuada de multiplicação de 0 a 10 de um número escolhido pelo
usuário.
*/


#include <stdio.h>

int main()
{
    int n;

    printf("Digite um número:  ");
    scanf("%i", &n);
    printf("\n");

    for(int c = 0; c < 11; c++){
        printf("%i x %i = %i\n", n, c, (n*c));
    }
}

