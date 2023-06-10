/*  29.Leia a nota de 5 alunos. Para cada aluno, leia 4 notas, sendo que a
primeira tem peso 3, a segunda peso 2 e a terceira e quarta peso 1.
Calcule e apresente a média de cada aluno, dizendo se ele passou, não
passou ou vai para a recuperação (e quantos pontos precisa para ser
aprovado). Além disso, tire a média da turma.
*/



#include <stdio.h>

int main()
{
    int a = 1;
    float n1, n2, n3, n4;

    float soma = 0;
    float media = 0;
    float mediatotal;


    while(a <= 5){

        printf("\nDigite a 1° nota do aluno:   ");
        scanf("%f", &n1);

        printf("\nDigite a 2° nota do aluno:   ");
        scanf("%f", &n2);

        printf("\nDigite a 3° nota do aluno:   ");
        scanf("%f", &n3);

        printf("\nDigite a 4° nota do aluno:   ");
        scanf("%f", &n4);

        media = ((3*n1)+(2*n2)+n3+n4)/4;

        soma += media;

        printf("\nMédia do aluno:  %.2f", media);

        if(media >= 6){
            printf("\nAluno aprovado!");
        }else{
            printf("\nAluno de Recuperação!\nnota necessária para passar: %.2f\n", (10 - media));
        }

        a++;
    }

    mediatotal = soma / 5;

    printf("\nMédia total da turma: %.2f", mediatotal);

}

