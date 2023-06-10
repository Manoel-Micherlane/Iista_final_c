/*  28.Ler a idade e o peso de 15 pessoas. Calcular e imprimir as médias de
peso das pessoas da mesma faixa etária e quantas são de cada faixa
etária. As faixas de 1 a 10 anos, de 11-20, de 21-30 e maiores de 30.*/



#include <stdio.h>

int main()
{
    int x = 1;
    int idade;
    float peso;
    float m1, m2, m3, m4;
    int f1 = 0;
    int f2 = 0;
    int f3 = 0;
    int f4 = 0;
    float s1 = 0;
    float s2 = 0;
    float s3 = 0;
    float s4 = 0;

    while(x < 16){

        printf("digite a idade:  ");
        scanf("%i", &idade);

        printf("\ndigite seu peso:  ");
        scanf("%f", &peso);


        if(idade > 0 && idade < 11){
            f1++;
            s1 += peso;
        }
        else if(idade > 10 && idade < 21){
            f2++;
            s2 += peso;
        }
        else if(idade > 20 && idade < 31){
            f3++;
            s3 += peso;
        }
        else{
            f4++;
            s4 += peso;
        }
        m1 = s1 / f1;
        m2 = s2 / f2;
        m3 = s3 / f3;
        m4 = s4 / f4;
        x++;
    }

    printf("\nFaixa etária: (1 - 10)     peso médio:  %f", m1);
    printf("\nFaixa etária: (11 - 20)    peso médio:  %f", m2);
    printf("\nFaixa etária: (21 - 30)    peso médio:  %f", m3);
    printf("\nFaixa etária: (31~)        peso médio:  %f", m4);
}
