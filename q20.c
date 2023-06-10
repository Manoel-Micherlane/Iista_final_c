/*20.Faça um programa que leia 3 número inteiro e os imprima em ordem
crescente.
*/


#include <stdio.h>

int main()
{
    int a, b, c, n1, n2, n3;
    
    printf("Digite o primeiro número:  ");
    scanf("%i", &a);
    
    printf("Digite o segundo número:  ");
    scanf("%i", &b);
    
    printf("Digite o terceiro número:  ");
    scanf("%i", &c);
    
    if(a >= b && a >= c)
    {
        if(b >= c)
        {
            n2 = b;
            n3 = c;
        }
        else
        {
            n2 = c;
            n3 = b;
        }
        
        n1 = a;
    }
    else if(b >= a && b >= c)
    {
        if(a >= c)
        {
            n2 = a;
            n3 = c;
        }
        else
        {
            n2 = c;
            n3 = a;
        }
        
        n1 = b;
    } 
    else if(c >= a && c >= b)
    {
        if(a >= b)
        {
            n2 = a;
            n3 = b;
        }
        else
        {
            n2 = b;
            n3 = a;
        }
        
        n1 = c;
    }
    
    printf("%i, %i, %i", n3, n2, n1);
}

