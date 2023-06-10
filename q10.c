/*
10.Fazer um programa que solicita um número decimal e imprime o
correspondente em hexa e octal.
*/


#include <stdio.h>

int main() {
    int numero;

    printf("Digite um número decimal: ");
    scanf("%d", &numero);

    printf("Número em hexadecimal: %x\n", numero);
    printf("Número em octal: %o\n", numero);

    return 0;
}
