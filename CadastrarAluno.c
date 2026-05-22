#include <stdio.h>

void main() {
    char nome[50];
    char sobrenome[50];
    char alunoEspecial;
    int idade, matricula;
    float altura;
    
    printf("------ Seja bem-vindo ao Sistema de Cadastro de Aluno! ------\n");

    printf("\nDigite seu nome: ");
    scanf("%s", &nome);

    printf("\nDigite seu sobrenome: ");
    scanf("%s", &sobrenome);

    printf("\nDigite sua idade: ");
    scanf("%d", &idade);

    printf("\nDigite sua altura: ");
    scanf("%f", &altura);

    printf("\nDigite sua matricula: ");
    scanf("%d", &matricula);

    printf("\nVoce eh um aluno especial? (S - SIM / N - NAO): ");
    scanf(" %c", &alunoEspecial);

    printf("\nPor favor, verifique seus dados abaixo:\n");
    printf("Nome completo: %s %s\n", nome, sobrenome);
    printf("Idade: %d anos\n", idade);
    printf("Altura: %.2f metros\n", altura);
    printf("Matricula: %d\n", matricula);
    printf("Aluno Especial: %c\n", alunoEspecial);

    char dadosCorretos = 'N';

    printf("\nOs dados estao corretos? (S - SIM / N - NAO): ");
    scanf(" %c", &dadosCorretos);

    if (dadosCorretos == 'S') {
        printf("\nSeja bem vindo a sua nova escola, %s!", nome);
    } else {
        printf("\nPor favor, reiniciar o programa para criar um novo cadastro.");
    }

    printf("\n------ Fim do Sistema de Cadastro de Aluno! ------");
}
