#include <stdio.h>

void main() {
    // Variáveis Globais
    float nota1, nota2, nota3, nota4, media;

    printf("\n------ INICIO DO SISTEMA DE CALCULO DA MEDIA DAS NOTAS DO ALUNO ------\n");

    printf("\nSeja bem-vindo(a) professor(a).\n");

    printf("\nDigite a primeira nota do aluno: ");
    scanf("%f", &nota1);

    printf("\nDigite a segunda nota do aluno: ");
    scanf("%f", &nota2);

    printf("\nDigite a terceira nota do aluno: ");
    scanf("%f", &nota3);

    printf("\nDigite a quarta nota do aluno: ");
    scanf("%f", &nota4);

    media = (nota1 + nota2 + nota3 + nota4) / 4;

    printf("\nProfessor(a), a media do aluno eh: %.2f\n", media);

    printf("\n------ FIM DO SISTEMA DE CALCULO DA MEDIA DAS NOTAS DO ALUNO ------\n");    
}
