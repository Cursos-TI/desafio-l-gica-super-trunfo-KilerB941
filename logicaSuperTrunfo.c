#include <stdio.h>

// Desafio Super Trunfo - Países
// Tema 2 - Comparação das Cartas
// Este código inicial serve como base para o desenvolvimento do sistema de comparação de cartas de cidades. 
// Siga os comentários para implementar cada parte do desafio.

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

    // Comparação das cartas (baseada na população)
    printf("\n=== Comparação de Cartas ===\n");
    if (populacao1 > populacao2) {
        printf("População: Carta 1 venceu (maior população)\n");
    } else if (populacao1 < populacao2) {
        printf("População: Carta 2 venceu (maior população)\n");
    } else {
        printf("População: Empate\n");
    }

    // Comparação das cartas (baseada na área)
    if (area1 > area2) {
        printf("Área: Carta 1 venceu (maior área)\n");
    } else if (area1 < area2) {
        printf("Área: Carta 2 venceu (maior área)\n");
    } else {
        printf("Área: Empate\n");
    }

    // Comparação das cartas (baseada no PIB)
    if (pib1 > pib2) {
        printf("PIB: Carta 1 venceu (maior PIB)\n");
    } else if (pib1 < pib2) {
        printf("PIB: Carta 2 venceu (maior PIB)\n");
    } else {
        printf("PIB: Empate\n");
    }

    // Comparação das cartas (baseada nos pontos turísticos)
    if (pontos_turisticos1 > pontos_turisticos2) {
        printf("Pontos Turísticos: Carta 1 venceu (mais pontos turísticos)\n");
    } else if (pontos_turisticos1 < pontos_turisticos2) {
        printf("Pontos Turísticos: Carta 2 venceu (mais pontos turísticos)\n");
    } else {
        printf("Pontos Turísticos: Empate\n");
    }

    // Comparação das cartas (baseada na densidade populacional - menor valor vence)
    if (densidade_populacional1 < densidade_populacional2) {
        printf("Densidade Populacional: Carta 1 venceu (menor densidade)\n");
    } else if (densidade_populacional1 > densidade_populacional2) {
        printf("Densidade Populacional: Carta 2 venceu (menor densidade)\n");
    } else {
        printf("Densidade Populacional: Empate\n");
    }

    return 0;
}
