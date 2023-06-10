/* 30. Capture uma lista de 10 valores inteiros, salvando-a em um vetor: int lista
[10]. Em seguida, escolha entre as opções:
1 - Listar em ordem crescente
2 - Listar em ordem decrescente
3 - Listar na ordem original
*/



#include <stdio.h>

void listarCrescente(int lista[]) {
    int i, j, temp;


    for (i = 0; i < 9; i++) {
        for (j = 0; j < 9 - i; j++) {
            if (lista[j] > lista[j + 1]) {
                temp = lista[j];
                lista[j] = lista[j + 1];
                lista[j + 1] = temp;
            }
        }
    }


    printf("Lista em ordem crescente:\n");
    for (i = 0; i < 10; i++) {
        printf("%d ", lista[i]);
    }
    printf("\n");
}

void listarDecrescente(int lista[]) {
    int i, j, temp;


    for (i = 0; i < 9; i++) {
        for (j = 0; j < 9 - i; j++) {
            if (lista[j] < lista[j + 1]) {
                temp = lista[j];
                lista[j] = lista[j + 1];
                lista[j + 1] = temp;
            }
        }
    }


    printf("Lista em ordem decrescente:\n");
    for (i = 0; i < 10; i++) {
        printf("%d ", lista[i]);
    }
    printf("\n");
}

void listarOriginal(int lista[]) {
    int i;


    printf("Lista na ordem original:\n");
    for (i = 0; i < 10; i++) {
        printf("%d ", lista[i]);
    }
    printf("\n");
}

int main() {
    int lista[10];
    int i, opcao;


    printf("Digite 10 valores inteiros:\n");
    for (i = 0; i < 10; i++) {
        scanf("%d", &lista[i]);
    }


    printf("Escolha uma opção:\n");
    printf("1. Listar em ordem crescente\n");
    printf("2. Listar em ordem decrescente\n");
    printf("3. Listar na ordem original\n");
    scanf("%d", &opcao);


    switch (opcao) {
        case 1:
            listarCrescente(lista);
            break;
        case 2:
            listarDecrescente(lista);
            break;
        case 3:
            listarOriginal(lista);
            break;
        default:
            printf("Opção inválida.\n");
            break;
    }

    return 0;
}
