/*2. Ler um número inteiro e imprimir seu sucessor e seu antecessor.
*/

#include <stdio.h>

int main()
{
    int i;
    
    printf("Digite um número:  ");
    scanf("%i", &i);
    
    printf("\nAntecessor = %i\nSucessor = %i\n", (i - 1), (i + 1));
}
