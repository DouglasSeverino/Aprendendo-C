#include <stdio.h>

void main() {
    // Variáveis Globais
    int numero1, numero2;
    int atribuicao, soma, subtracao, multiplicacao, divisao;

    // Operações Aritméticas:
    printf("\n------ Seja bem-vindo à Operação de Atribuição! ------\n");

    // Atribuição Simples
    numero1 = 10;
    numero2 = 5;

    printf("\nO numero 1 eh: %d\n", numero1);
    printf("\nO numero 2 eh: %d\n", numero2);

    // Atribuição com Soma
    soma = numero1; // soma agora vale 10
    soma += numero2; // é mesmo que "soma = soma + numero2;" e soma passa a valer 15
    printf("\nsoma = numero1 \nsoma += numero2");
    printf("\nA atribuicao com soma eh: %d\n", soma);

    // Atribuição com Subtração
    subtracao = numero1; // subtracao agora vale 10
    subtracao -= numero2; // é mesmo que "subtracao = subtracao - numero2;" e subtracao passa a valer 5
    printf("\nsubtracao = numero1 \nsubtracao -= numero2");
    printf("\nA atribuicao com subtracao eh: %d\n", subtracao);

    // Atribuição com Multiplicação
    multiplicacao = numero1; // multiplicacao agora vale 10
    multiplicacao *= numero2; // é mesmo que "multiplicacao = multiplicacao * numero2;" e multiplicacao passa a valer 50
    printf("\nmultiplicacao = numero1 \nmultiplicacao *= numero2");
    printf("\nA atribuicao com multiplicacao eh: %d\n", multiplicacao);

    // Atribuição com Divisão
    divisao = numero1; // divisao agora vale 10
    divisao /= numero2; // é mesmo que "divisao = divisao / numero2;" e divisao passa a valer 2
    printf("\ndivisao = numero1 \ndivisao /= numero2");
    printf("\nA atribuicao com divisao eh: %d\n", divisao);

    printf("\n------ Fim da Operação de Atribuição! ------\n");
}
