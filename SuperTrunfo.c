#include <stdio.h>
#include <string.h>

void main() {
    char estado1[1], estado2[1], cidade1[50], cidade2[50], codigo1[3], codigo2[3];
    int populacao1, populacao2, qtdPontosTuristico1, qtdPontosTuristico2;
    float pib1, pib2, area1, area2;
    float densidadePopulacional1, pibPerCapita1, densidadePopulacional2, pibPerCapita2;
    
    printf("------ Seja bem-vindo ao jogo Super Trunfo ------\n");

    printf("\nPreencha a carta 1:");

    printf("\nDigite uma letra entre A e H para o estado: ");
    scanf("%s", &estado1);

    printf("\nDigite a letra do estado seguida de um numero de 01 a 04: ");
    scanf("%s", &codigo1);

    /*  O scanf() anterior deixa um \n (Enter) no buffer do teclado.
        Quando o fgets() executa, ele lê esse \n imediatamente e “pula” a entrada do usuário. 

        Solução: Limpar o buffer antes do fgets().
    */

    getchar(); // Limpa o \n do buffer

    printf("\nDigite o nome da cidade: ");
    fgets(cidade1, 50, stdin);

    cidade1[strcspn(cidade1, "\n")] = '\0'; // Remove o \n no final do texto

    printf("\nDigite a quantidade da populacao na cidade: ");
    scanf("%d", &populacao1);

    printf("\nDigite a area da cidade em quilometros quadrados: ");
    scanf("%f", &area1);

    printf("\nDigite o PIB (Produto Interno Bruto) da cidade: ");
    scanf("%f", &pib1);

    printf("\nDigite a quantidade de pontos turisticos na cidade: ");
    scanf("%d", &qtdPontosTuristico1);

    densidadePopulacional1 = (float) populacao1 / area1;
    pibPerCapita1 = (float) pib1 / populacao1;

    printf("\n\nPreencha a carta 2:");

    printf("\nDigite uma letra entre A e H para o estado: ");
    scanf("%s", &estado2);

    printf("\nDigite a letra do estado seguida de um numero de 01 a 04: ");
    scanf("%s", &codigo2);

    /*  O scanf() anterior deixa um \n (Enter) no buffer do teclado.
        Quando o fgets() executa, ele lê esse \n imediatamente e “pula” a entrada do usuário. 

        Solução: Limpar o buffer antes do fgets().
    */

    getchar(); // Limpa o \n do buffer

    printf("\nDigite o nome da cidade: ");
    fgets(cidade2, 50, stdin);

    cidade2[strcspn(cidade2, "\n")] = '\0'; // Remove o \n no final do texto

    printf("\nDigite a quantidade da populacao na cidade: ");
    scanf("%d", &populacao2);

    printf("\nDigite a area da cidade em quilometros quadrados: ");
    scanf("%f", &area2);

    printf("\nDigite o PIB (Produto Interno Bruto) da cidade: ");
    scanf("%f", &pib2);

    printf("\nDigite a quantidade de pontos turisticos na cidade: ");
    scanf("%d", &qtdPontosTuristico2);

    densidadePopulacional2 = (float) populacao2 / area2;
    pibPerCapita2 = (float) pib2 / populacao2;

    printf("\n------ Exibicao das Cartas ------\n");

    printf("\nCarta 1:");
    printf("\nEstado: %s", estado1);
    printf("\nCodigo: %s", codigo1);
    printf("\nNome da Cidade: %s", cidade1);
    printf("\nPopulacao: %d", populacao1);
    printf("\nArea: %.2f km2", area1);
    printf("\nPIB: %.2f bilhoes de reais", pib1);
    printf("\nNumero de Pontos Turisticos: %d", qtdPontosTuristico1);
    printf("\nDensidade Populacional: %.2f hab/km2", densidadePopulacional1);
    printf("\nPIB per Capita: %.2f reais\n", pibPerCapita1);

    printf("\nCarta 2:");
    printf("\nEstado: %s", estado2);
    printf("\nCodigo: %s", codigo2);
    printf("\nNome da Cidade: %s", cidade2);
    printf("\nPopulacao: %d", populacao2);
    printf("\nArea: %.2f km2", area2);
    printf("\nPIB: %.2f bilhoes de reais", pib2);
    printf("\nNumero de Pontos Turisticos: %d", qtdPontosTuristico2);
    printf("\nDensidade Populacional: %.2f hab/km2", densidadePopulacional2);
    printf("\nPIB per Capita: %.2f reais\n", pibPerCapita2);

    printf("\n------ Fim do jogo Super Trunfo ------\n");
}
