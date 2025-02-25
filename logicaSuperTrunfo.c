#include <stdio.h>

// Desafio Super Trunfo - Países
// Tema 1 - Cadastro das Cartas
// Este código inicial serve como base para o desenvolvimento do sistema de cadastro de cartas de cidades.
// Siga os comentários para implementar cada parte do desafio.
// Teste Luiz

int main() {
    // Sugestão: Defina variáveis separadas para cada atributo da cidade.
    // Exemplos de atributos: código da cidade, nome, população, área, PIB, número de pontos turísticos.
    // Declaração de variáveis para a primeira carta
    char estado1;
    char codigo1[4];
    char nomeCidade1[50];
    unsigned long int populacao1;
    float area1;
    float pib1;
    int pontosTuristicos1;
    float densidadePopulacional1;
    float pibPerCapita1;
    float superPoder1;

    // Declaração de variáveis para a segunda carta
    char estado2;
    char codigo2[4];
    char nomeCidade2[50];
    unsigned long int populacao2;
    float area2;
    float pib2;
    int pontosTuristicos2;
    float densidadePopulacional2;
    float pibPerCapita2;
    float superPoder2;
    
    // Cadastro das Cartas:
    // Sugestão: Utilize a função scanf para capturar as entradas do usuário para cada atributo.
    // Solicite ao usuário que insira as informações de cada cidade, como o código, nome, população, área, etc.
    // Entrada de dados para a primeira carta
    printf("Cadastro da Carta 1:\n");
    printf("Estado (A-H): ");
    scanf(" %c", &estado1);
    printf("Codigo da Carta (ex: A01): ");
    scanf(" %s", codigo1);
    printf("Nome da Cidade: ");
    scanf(" %s", nomeCidade1);
    printf("Populacao: ");
    scanf(" %lu", &populacao1);
    printf("Area (em km2): ");
    scanf(" %f", &area1);
    printf("PIB (em bilhoes de reais): ");
    scanf(" %f", &pib1);
    printf("Numero de Pontos Turisticos: ");
    scanf(" %d", &pontosTuristicos1);
    printf("\n");

    // Calcular a Densidade Populacional e o PIB per Capita
    densidadePopulacional1 = populacao1 / area1;
    pibPerCapita1 = pib1 / populacao1;

    // Calculo super poder
    // superPoder1 = (float)populacao1 + area1 + pib1 + pontosTuristicos1 + pibPerCapita1 + (1 / densidadePopulacional1);

    // Entrada de dados para a segunda carta
    printf("Cadastro da Carta 2:\n");
    printf("Estado (A-H): ");
    scanf(" %c", &estado2);
    printf("Codigo da Carta (ex: B02): ");
    scanf(" %s", codigo2);
    printf("Nome da Cidade: ");
    scanf(" %s", nomeCidade2);
    printf("Populacao: ");
    scanf(" %lu", &populacao2);
    printf("Area (em km2): ");
    scanf(" %f", &area2);
    printf("PIB (em bilhoes de reais): ");
    scanf(" %f", &pib2);
    printf("Numero de Pontos Turisticos: ");
    scanf(" %d", &pontosTuristicos2);
    printf("\n");

    // Calcular a Densidade Populacional e o PIB per Capita
    densidadePopulacional2 = populacao2 / area2;
    pibPerCapita2 = pib2 / populacao2;

    // Calculo super poder
    // superPoder2 = (float)populacao2 + area2 + pib2 + pontosTuristicos2 + pibPerCapita2 + (1 / densidadePopulacional2);
    
    // Exibição dos Dados das Cartas:
    // Sugestão: Utilize a função printf para exibir as informações das cartas cadastradas de forma clara e organizada.
    // Exiba os valores inseridos para cada atributo da cidade, um por linha.
    // Exibição das cartas cadastradas
    printf("Carta 1:\n");
    printf("Estado: %c\n", estado1);
    printf("Codigo: %s\n", codigo1);
    printf("Nome da Cidade: %s\n", nomeCidade1);
    printf("Populacao: %lu\n", populacao1);
    printf("Area: %.2f km2\n", area1);
    printf("PIB: %.2f bilhoes de reais\n", pib1);
    printf("Numero de Pontos Turisticos: %d\n", pontosTuristicos1);
    printf("A densidade populacional: %.2f hab/km²\n", densidadePopulacional1);
    printf("O PIB per capita: %.2f reais\n", pibPerCapita1);
    printf("\n");

    printf("Carta 2:\n");
    printf("Estado: %c\n", estado2);
    printf("Codigo: %s\n", codigo2);
    printf("Nome da Cidade: %s\n", nomeCidade2);
    printf("Populacao: %lu\n", populacao2);
    printf("Area: %.2f km2\n", area2);
    printf("PIB: %.2f bilhoes de reais\n", pib2);
    printf("Numero de Pontos Turisticos: %d\n", pontosTuristicos2);
    printf("A densidade populacional: %.2f hab/km²\n", densidadePopulacional2);
    printf("O PIB per capita: %.2f reais\n", pibPerCapita2);
    printf("\n");

    // comparando cartas para saber qual ganhou
    //printf("Comparacao de Cartas:\n");
    //printf("Populacao: Carta 1 venceu (%d)\n", populacao1 > populacao2);
    //printf("Area: Carta 1 venceu (%d)\n", area1 > area2);
    //printf("PIB: Carta 1 venceu (%d)\n", pib1 > pib2);
    //printf("Pontos Turisticos: Carta 1 venceu (%d)\n", pontosTuristicos1 > pontosTuristicos2);
    //printf("Densidade Populacional: Carta 2 venceu (%d)\n", densidadePopulacional1 < densidadePopulacional2);
    //printf("PIB per Capita: Carta 1 venceu (%d)\n", pibPerCapita1 > pibPerCapita2);
    //printf("Super Poder: Carta 1 venceu (%d)\n", superPoder1 > superPoder2);

    // Exibindo resultado de comparação de um atributo especifico
    // Variavel para receber opção
    int opcao1;
    int opcao2;
    // Menu para a primeira escolha
    printf("\nEscolha o primeiro atributo\n");
    printf("1 - Populacao.\n");
    printf("2 - Area.\n");
    printf("3 - PIB.\n");
    printf("4 - Numero de Pontos Turisticos.\n");
    printf("5 - Densidade Demografica.\n");
    printf("Escolha uma opcao: ");    
    scanf("%d", &opcao1);
    printf("\n");

    // Menu para a segunda escolha
    printf("\nEscolha o segundo atributo\n");
    switch (opcao1)
    {
    case 1:
        printf("2 - Area.\n");
        printf("3 - PIB.\n");
        printf("4 - Numero de Pontos Turisticos.\n");
        printf("5 - Densidade Demografica.\n");
        break;
    case 2:
        printf("1 - Populacao.\n");
        printf("3 - PIB.\n");
        printf("4 - Numero de Pontos Turisticos.\n");
        printf("5 - Densidade Demografica.\n");
        break;
    case 3:
        printf("1 - Populacao.\n");
        printf("2 - Area.\n");
        printf("4 - Numero de Pontos Turisticos.\n");
        printf("5 - Densidade Demografica.\n");
        break;
    case 4:
        printf("1 - Populacao.\n");
        printf("2 - Area.\n");
        printf("3 - PIB.\n");
        printf("5 - Densidade Demografica.\n");
        break;
    case 5:
        printf("1 - Populacao.\n");
        printf("2 - Area.\n");
        printf("3 - PIB.\n");
        printf("4 - Numero de Pontos Turisticos.\n");
        break;    
    }
    printf("Escolha uma opcao: ");    
    scanf("%d", &opcao2);
    printf("\n");

    printf("Carta 1 - (%s):\n", nomeCidade1);
    printf("Carta 2 - (%s):\n", nomeCidade2);
    printf("\n");

    // Variaveis para armazenar valores do primeiro atributo
    float carta1Atributo1 = 0;
    float carta2Atributo1 = 0;

    switch (opcao1)
    {
    case 1:
        printf("O primeiro atributo usado na comparacao foi (Populacao).\n");
        printf("O valor do atributo da carta 1: %lu\n", populacao1);
        printf("O valor do atributo da carta 2: %lu\n", populacao2);

        carta1Atributo1 = populacao1;
        carta2Atributo1 = populacao2;
        break;

    case 2:
        printf("O primeiro atributo usado na comparacao foi (Area).\n");
        printf("O valor do atributo da carta 1: %.2f\n", area1);
        printf("O valor do atributo da carta 2: %.2f\n", area2);

        carta1Atributo1 = area1;
        carta2Atributo1 = area2;
        break;
    case 3:
        printf("O primeiro atributo usado na comparacao foi (PIB).\n");
        printf("O valor do atributo da carta 1: %.2f\n", pib1);
        printf("O valor do atributo da carta 2: %.2f\n", pib2);

        carta1Atributo1 = pib1;
        carta2Atributo1 = pib2;
        break;
    case 4:
        printf("O primeiro atributo usado na comparacao foi (Pontos Turisticos).\n");
        printf("O valor do atributo da carta 1: %d\n", pontosTuristicos1);
        printf("O valor do atributo da carta 2: %d\n", pontosTuristicos2);

        carta1Atributo1 = pontosTuristicos1;
        carta2Atributo1 = pontosTuristicos2;
        break;

    case 5:
        printf("O primeiro atributo usado na comparacao foi (Densidade Populacional).\n");
        printf("O valor do atributo da carta 1: %.2f\n", densidadePopulacional1);
        printf("O valor do atributo da carta 2: %.2f\n", densidadePopulacional2);

        carta1Atributo1 = (1 / densidadePopulacional1);
        carta2Atributo1 = (1 / densidadePopulacional2);
        break;    
    default:
        printf("Opcao Invalida!");
        break;
    }
    printf("\n");

    // Variaveis para armazenar valores do segundo atributo
    float carta1Atributo2 = 0;
    float carta2Atributo2 = 0;
    switch (opcao2)
    {
    case 1:
        printf("O segundo atributo usado na comparacao foi (Populacao).\n");
        printf("O valor do atributo da carta 1: %lu\n", populacao1);
        printf("O valor do atributo da carta 2: %lu\n", populacao2);

        carta1Atributo2 = populacao1;
        carta2Atributo2 = populacao2;
        break;

    case 2:
        printf("O segundo atributo usado na comparacao foi (Area).\n");
        printf("O valor do atributo da carta 1: %.2f\n", area1);
        printf("O valor do atributo da carta 2: %.2f\n", area2);

        carta1Atributo2 = area1;
        carta2Atributo2 = area2;
        break;
    case 3:
        printf("O segundo atributo usado na comparacao foi (PIB).\n");
        printf("O valor do atributo da carta 1: %.2f\n", pib1);
        printf("O valor do atributo da carta 2: %.2f\n", pib2);

        carta1Atributo2 = pib1;
        carta2Atributo2 = pib2;
        break;
    case 4:
        printf("O segundo atributo usado na comparacao foi (Pontos Turisticos).\n");
        printf("O valor do atributo da carta 1: %d\n", pontosTuristicos1);
        printf("O valor do atributo da carta 2: %d\n", pontosTuristicos2);

        carta1Atributo2 = pontosTuristicos1;
        carta2Atributo2 = pontosTuristicos2;
        break;

    case 5:
        printf("O segundo atributo usado na comparacao foi (Densidade Populacional).\n");
        printf("O valor do atributo da carta 1: %.2f\n", densidadePopulacional1);
        printf("O valor do atributo da carta 2: %.2f\n", densidadePopulacional2);

        carta1Atributo2 = (1 / densidadePopulacional1);
        carta2Atributo2 = (1 / densidadePopulacional2);
        break;    
    default:
        printf("Opcao Invalida!");
        break;
    }
    printf("\n");

    // Soma dos atributos escolhidos
    superPoder1 = carta1Atributo1 + carta1Atributo2;
    superPoder2 = carta2Atributo1 + carta2Atributo2;
    
    printf("A soma dos atributos da carta 1 (%s) e %.2f\n", nomeCidade1, superPoder1);
    printf("A soma dos atributos da carta 2 (%s) e %.2f\n", nomeCidade2, superPoder2);
    printf("\n");

    // Logica de quem ganhou
    int resultado = (superPoder1 > superPoder2) ? 1 :((superPoder1 < superPoder2) ? 2 : 0);

    switch (resultado)
        {
        case 1:
            printf("Resultado: Carta 1 (%s) venceu!\n", nomeCidade1);
            break;
        case 2:
            printf("Resultado: Carta 2 (%s) venceu!\n", nomeCidade2);
            break;            
        default:
            printf("Resultado: Carta 1 (%s) e Carta 2 (%s) Empataram!\n", nomeCidade1, nomeCidade2);
            break;
        }

    return 0;
}