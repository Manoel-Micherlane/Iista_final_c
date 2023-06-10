/* 12.Fazer uma calculadora simples com as quatro operações.*/

#include <stdio.h>

int main() {
    int num1, num2;
    char operacao;

    printf("Digite o primeiro número: ");
    scanf("%d", &num1);

    printf("Digite a operação (+, -, *, /): ");
    scanf(" %c", &operacao);

    printf("Digite o segundo número: ");
    scanf("%d", &num2);

    switch (operacao) {
        case '+':
            printf("Resultado: %d\n", num1 + num2);
            break;
        case '-':
            printf("Resultado: %d\n", num1 - num2);
            break;
        case '*':
            printf("Resultado: %d\n", num1 * num2);
            break;
        case '/':
            if (num2 != 0) {
                printf("Resultado: %.2f\n", (float)num1 / num2);
            } else {
                printf("Erro: divisão por zero.\n");
            }
            break;
        default:
            printf("Operação inválida.\n");
            break;
    }
}
