/* 11. Calcule o salário líquido de um professor. Será fornecido valor da hora
aula, o número de aulas dadas e a % de desconto do INSS sobre o valor
bruto do salário.
*/


#include <stdio.h>

int main() {
    float valorHoraAula, salarioBruto, salarioLiquido;
    int numAulas;
    float descontoINSS;


    printf("Digite o valor da hora-aula: ");
    scanf("%f", &valorHoraAula);

    printf("Digite o número de aulas dadas: ");
    scanf("%d", &numAulas);

    printf("Digite a porcentagem de desconto do INSS: ");
    scanf("%f", &descontoINSS);


    salarioBruto = valorHoraAula * numAulas;


    float desconto = salarioBruto * (descontoINSS / 100.0);


    salarioLiquido = salarioBruto - desconto;


    printf("Salário Líquido: R$%.2f\n", salarioLiquido);

    return 0;
}
