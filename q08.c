/* 8. Informar um preço de um produto e calcular novo preço com desconto
de 9%.*/


#include <stdio.h>

int main()
{
    float preco1, preco2;
    
    printf("Digite o preço do produto:  ");
    scanf("%f", &preco1);
    
    preco2  = preco1 - ((preco1/100) * 9);
    
    printf("Preço original:  R$ %.2f\nPreço com desconto: R$%.2f", preco1, preco2);
    
}
