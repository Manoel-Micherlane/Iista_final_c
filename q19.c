/* 19.Ler a idade de uma pessoa e informar a sua classe eleitoral.
a. Não-eleitor (abaixo de 16 anos)
b. Eleitor obrigatório (entre 18 e 65 anos)
c. Eleitor facultativo (entre 16 e 18 e maior de 65 anos).
*/ 


#include <stdio.h>

int main() {
    int idade;

    printf("Digite a idade: ");
    scanf("%d", &idade);

    if (idade < 16) {
        printf("Não-eleitor\n");
    } else if (idade >= 18 && idade <= 65) {
        printf("Eleitor obrigatório\n");
    } else if ((idade >= 16 && idade < 18) || idade > 65) {
        printf("Eleitor facultativo\n");
    } else {
        printf("Idade inválida\n");
    }
}
