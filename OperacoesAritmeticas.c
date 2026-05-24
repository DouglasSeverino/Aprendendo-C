#include <stdio.h>

void main() {
    // Variáveis Globais
    int numero1, numero2;
    int soma, subtracao, multiplicacao, divisao;

    // Operações Aritméticas:
    printf("\n------ Seja bem-vindo à Operação Aritmética! ------\n");
    
    // Solicite ao usuário dois números inteiros
    printf("\nDigite um número inteiro: ");
    scanf("%d", &numero1);

    printf("\nDigite outro número inteiro: ");
    scanf("%d", &numero2);

    // Soma
    soma = numero1 + numero2;

    // Subtração
    subtracao = numero1 - numero2;

    // Multiplicação
    multiplicacao = numero1 * numero2;

    // Divisão
    divisao = numero1 / numero2;

    printf("\nA soma eh: %d\n", soma);
    printf("\nA subtracao eh: %d\n", subtracao);
    printf("\nA multiplicacao eh: %d\n", multiplicacao);
    printf("\nA divisao eh: %d\n", divisao);

    printf("\n------ Fim da Operação Aritmética! ------\n");
}
