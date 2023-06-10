/* 18.Um comerciante comprou um produto e quer vendê-lo com lucro de 45%
se o valor da compra for menor que 20,00; caso contrário, o lucro será
de 30%. Entrar com o valor do produto e imprimir o valor da venda.
*/


#include <stdio.h>

int main()
{
    float n, x;
    
    printf("Digite o valor do produto: ");
    scanf("%f", &n);
    
    
    printf("\nÉ divisível por: ");
    
    if(n <= 20){
        x = n + ((n / 100) * 45);
    }
    else{
        x = n + ((n / 100) * 30);
    }
    
    printf("Preço original do produto:  R$ %.2f\n", n);
    printf("Preço produto ofertado:  R$ %.2f", x);
    
}
