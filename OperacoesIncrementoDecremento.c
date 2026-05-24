#include <stdio.h>

void main() {
    // Variáveis Globais
    int numero;
    int incremento, preincremento, posincremento;
    int decremento, predecremento, posdecremento;

    // Operações Aritméticas:
    printf("\n------ Seja bem-vindo à Operação de Incremento e Decremento! ------\n");

    // Atribuição Simples
    numero = 10;

    printf("\nO numero eh: %d\n", numero);

    // Operador Incremento
    incremento = numero; // numero eh 10, entao incremento passa a valer 10
    incremento++; // é o mesmo que "incremento = incremento + 1;"
    printf("\nincremento = numero // numero eh 10, entao incremento passa a valer 10 \nincremento++ // eh o mesmo que incremento = incremento + 1");
    printf("\nO numero eh: %d e o incremento eh: %d\n", numero, incremento);

    // Operador Pré-Incremento
    numero = 10;
    preincremento = ++numero; // é o mesmo que "numero = numero + 1; preincremento = numero;"
    printf("\npreincremento = ++numero // eh o mesmo que numero = numero + 1 e depois preincremento = numero");
    printf("\nO numero eh: %d e o preincremento eh: %d\n", numero, preincremento);

    // Operador Pós-Incremento
    numero = 10;
    posincremento = numero++; // é o mesmo que "posincremento = numero; numero = numero + 1;"
    printf("\nposincremento = numero++ // eh o mesmo que posincremento = numero e depois numero = numero + 1");
    printf("\nO numero eh: %d e o pos-incremento eh: %d\n", numero, posincremento);

    // Operador Decremento
    numero = 10;
    decremento = numero; // numero eh 10, entao decremento passa a valer 10
    decremento--; // é o mesmo que "decremento = decremento - 1;"
    printf("\ndecremento = numero // numero eh 10, entao decremento passa a valer 10 \ndecremento-- // eh o mesmo que decremento = decremento - 1");
    printf("\nO numero eh: %d e o decremento eh: %d\n", numero, decremento);

    // Operador Pré-Decremento
    numero = 10;
    predecremento = --numero; // é o mesmo que "numero = numero - 1; predecremento = numero;"
    printf("\npredecremento = --numero // eh o mesmo que numero = numero - 1 e depois predecremento = numero");
    printf("\nO numero eh: %d e o predecremento eh: %d\n", numero, predecremento);

    // Operador Pós-Decremento
    numero = 10;
    posdecremento = numero--; // é o mesmo que "posdecremento = numero; numero = numero - 1;"
    printf("\nposdecremento = numero-- // eh o mesmo que posdecremento = numero e depois numero = numero - 1");
    printf("\nO numero eh: %d e o pos-decremento eh: %d\n", numero, posdecremento);

    printf("\n------ Fim da Operação de Incremento e Decremento! ------\n");
}
