/* 25.Escreva um programa que pergunte ao usuário quantos alunos tem na
sala dele. Em seguida, através de um laço while, pede ao usuário para
que entre com as notas de todos os alunos da sala, um por vez. Por fim,
o programa deve mostrar a média aritmética, da turma.
*/
  
  
#include <stdio.h>

int main()
{
    int n;
    float nota, media;
    float soma = 0;

    printf("\nQuantos alunos tem a sua sala?  ");
    scanf("%i", &n);

    for(int c = 0; c < n; c++){
        printf("Digite a nota do %i° aluno: ", c);
        scanf("%f", &nota);

        soma += nota;
    }

    media = soma / n;

    printf("\nA média da turma é %.2f\n\n", media);
}
