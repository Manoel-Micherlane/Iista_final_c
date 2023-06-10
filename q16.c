/*
16.Ler 1 número. Se positivo, imprimir raiz quadrada se não eleve o
quadrado.
*/


#include <stdio.h>
#include <math.h>

int main()
{
    float n, x;
    
    printf("Digite um número: ");
    scanf("%f", &n);
    
    if(n >= 0)
    {
        x = sqrt(n);

    }
    else{
        x = n * n;
    }
    
    printf("\n%.2f", x);
}

