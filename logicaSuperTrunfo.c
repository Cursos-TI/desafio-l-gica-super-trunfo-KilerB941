#include <stdio.h>

// Desafio Super Trunfo - Países
// Tema 2 - Comparação das Cartas
// Este código inicial serve como base para o desenvolvimento do sistema de comparação de cartas de cidades. 
// Siga os comentários para implementar cada parte do desafio.

#include <stdio.h>

int main() {
    // Declaração das variáveis para armazenar os dados das cartas
    char estado1, estado2;                  // Estado (A-H)
    char codigo1[4], codigo2[4];            // Código da carta (ex: A01, B03)
    char nome_cidade1[50], nome_cidade2[50]; // Nome da cidade
    unsigned long int populacao1, populacao2; // População da cidade
    float area1, area2;                     // Área em km²
    float pib1, pib2;                       // PIB em bilhões de reais
    int pontos_turisticos1, pontos_turisticos2; // Número de pontos turísticos

    // Variáveis para armazenar os cálculos
    float densidade_populacional1, densidade_populacional2; // Densidade populacional (hab/km²)

    // Instruções para o usuário
    printf("=== Cadastro de Cartas do Super Trunfo ===\n");
    printf("Vamos cadastrar duas cartas com informações sobre cidades.\n\n");

    // Entrada de dados para a primeira carta
    printf("Carta 1:\n");
    printf("Digite o Estado (uma letra de A a H): ");
    scanf(" %c", &estado1); // Lê o estado como um caractere

    printf("Digite o Código da Carta (ex: A01): ");
    scanf("%s", codigo1); // Lê o código como uma string

    printf("Digite o Nome da Cidade: ");
    scanf(" %[^\n]", nome_cidade1); // Lê o nome da cidade (até o final da linha)

    printf("Digite a População da Cidade: ");
    scanf("%lu", &populacao1);

    printf("Digite a Área da Cidade (em km²): ");
    scanf("%f", &area1);

    printf("Digite o PIB da Cidade (em bilhões de reais): ");
    scanf("%f", &pib1);

    printf("Digite o Número de Pontos Turísticos: ");
    scanf("%d", &pontos_turisticos1);

    // Cálculo da densidade populacional para a primeira carta
    densidade_populacional1 = (float)populacao1 / area1;

    // Entrada de dados para a segunda carta
    printf("\nCarta 2:\n");
    printf("Digite o Estado (uma letra de A a H): ");
    scanf(" %c", &estado2);

    printf("Digite o Código da Carta (ex: A01): ");
    scanf("%s", codigo2);

    printf("Digite o Nome da Cidade: ");
    scanf(" %[^\n]", nome_cidade2);

    printf("Digite a População da Cidade: ");
    scanf("%lu", &populacao2);

    printf("Digite a Área da Cidade (em km²): ");
    scanf("%f", &area2);

    printf("Digite o PIB da Cidade (em bilhões de reais): ");
    scanf("%f", &pib2);

    printf("Digite o Número de Pontos Turísticos: ");
    scanf("%d", &pontos_turisticos2);

    // Cálculo da densidade populacional para a segunda carta
    densidade_populacional2 = (float)populacao2 / area2;

    // Exibição dos dados cadastrados
    printf("\n=== Resumo das Cartas Cadastradas ===\n");

    // Exibição da primeira carta
    printf("\nCarta 1:\n");
    printf("Estado: %c\n", estado1);
    printf("Código: %s\n", codigo1);
    printf("Nome da Cidade: %s\n", nome_cidade1);
    printf("População: %lu habitantes\n", populacao1);
    printf("Área: %.2f km²\n", area1);
    printf("PIB: %.2f bilhões de reais\n", pib1);
    printf("Número de Pontos Turísticos: %d\n", pontos_turisticos1);
    printf("Densidade Populacional: %.2f hab/km²\n", densidade_populacional1);

    // Exibição da segunda carta
    printf("\nCarta 2:\n");
    printf("Estado: %c\n", estado2);
    printf("Código: %s\n", codigo2);
    printf("Nome da Cidade: %s\n", nome_cidade2);
    printf("População: %lu habitantes\n", populacao2);
    printf("Área: %.2f km²\n", area2);
    printf("PIB: %.2f bilhões de reais\n", pib2);
    printf("Número de Pontos Turísticos: %d\n", pontos_turisticos2);
    printf("Densidade Populacional: %.2f hab/km²\n", densidade_populacional2);

    // Menu interativo para escolher dois atributos a serem comparados
    int escolha1, escolha2;
    printf("\n=== Menu de Comparação ===\n");
    printf("Escolha o primeiro atributo para comparar:\n");
    printf("1 - População\n");
    printf("2 - Área\n");
    printf("3 - PIB\n");
    printf("4 - Número de Pontos Turísticos\n");
    printf("5 - Densidade Populacional\n");
    printf("Digite sua escolha: ");
    scanf("%d", &escolha1);

    printf("\nEscolha o segundo atributo para comparar:\n");
    printf("1 - População\n");
    printf("2 - Área\n");
    printf("3 - PIB\n");
    printf("4 - Número de Pontos Turísticos\n");
    printf("5 - Densidade Populacional\n");
    printf("Digite sua escolha: ");
    scanf("%d", &escolha2);

    // Resultados das comparações
    int resultado1 = 0, resultado2 = 0;

    // Primeira comparação
    switch (escolha1) {
        case 1: // População
            resultado1 = (populacao1 > populacao2) ? 1 : ((populacao1 < populacao2) ? 2 : 0);
            break;
        case 2: // Área
            resultado1 = (area1 > area2) ? 1 : ((area1 < area2) ? 2 : 0);
            break;
        case 3: // PIB
            resultado1 = (pib1 > pib2) ? 1 : ((pib1 < pib2) ? 2 : 0);
            break;
        case 4: // Pontos Turísticos
            resultado1 = (pontos_turisticos1 > pontos_turisticos2) ? 1 : ((pontos_turisticos1 < pontos_turisticos2) ? 2 : 0);
            break;
        case 5: // Densidade Populacional (menor valor vence)
            resultado1 = (densidade_populacional1 < densidade_populacional2) ? 1 : ((densidade_populacional1 > densidade_populacional2) ? 2 : 0);
            break;
        default:
            printf("\nOpção inválida para o primeiro atributo!\n");
            return 1;
    }

    // Segunda comparação
    switch (escolha2) {
        case 1: // População
            resultado2 = (populacao1 > populacao2) ? 1 : ((populacao1 < populacao2) ? 2 : 0);
            break;
        case 2: // Área
            resultado2 = (area1 > area2) ? 1 : ((area1 < area2) ? 2 : 0);
            break;
        case 3: // PIB
            resultado2 = (pib1 > pib2) ? 1 : ((pib1 < pib2) ? 2 : 0);
            break;
        case 4: // Pontos Turísticos
            resultado2 = (pontos_turisticos1 > pontos_turisticos2) ? 1 : ((pontos_turisticos1 < pontos_turisticos2) ? 2 : 0);
            break;
        case 5: // Densidade Populacional (menor valor vence)
            resultado2 = (densidade_populacional1 < densidade_populacional2) ? 1 : ((densidade_populacional1 > densidade_populacional2) ? 2 : 0);
            break;
        default:
            printf("\nOpção inválida para o segundo atributo!\n");
            return 1;
    }

    // Determinação do vencedor com base nos dois atributos
    if (resultado1 == resultado2) {
        if (resultado1 == 0) {
            printf("\nEmpate em ambos os atributos!\n");
        } else {
            printf("\nCarta %d venceu em ambos os atributos!\n", resultado1);
        }
    } else if (resultado1 != 0 && resultado2 != 0) {
        printf("\nResultado misto:\n");
        printf("- No primeiro atributo, Carta %d venceu.\n", resultado1);
        printf("- No segundo atributo, Carta %d venceu.\n", resultado2);
    } else {
        printf("\nNão foi possível determinar um vencedor claro.\n");
    }

    return 0;
}