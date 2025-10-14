#include <stdio.h>

int main() {
    // Variáveis da CARTA 1
    char estado1;
    char codigo1[4]; 
    char nome_cidade1[50];
    int populacao1;
    float area1;
    float pib1; 
    int pontos_turisticos1;

    // Variáveis da CARTA 2
    char estado2;
    char codigo2[4];
    char nome_cidade2[50];
    int populacao2;
    float area2;
    float pib2;
    int pontos_turisticos2;

    // CARTA 1
    printf("---- Carta 1 ----\n");

    printf("Digite a letra do estado (A-H): ");
    scanf(" %c", &estado1); 

    printf("Digite o codigo da carta (ex: A01, B03): ");
    scanf("%s", codigo1); 

    printf("Digite o nome da cidade: ");
    scanf(" %49[^\n]", nome_cidade1);

    printf("Digite a populacao: ");
    scanf("%d", &populacao1); 

    printf("Digite a area em km2: ");
    scanf("%f", &area1); 

    printf("Digite o PIB (em bilhoes de reais): ");
    scanf("%f", &pib1); 

    printf("Digite o numero de pontos turisticos: ");
    scanf("%d", &pontos_turisticos1);

    printf("\n");

    // CARTA 2
    printf("---- Carta 2 ----\n");

    printf("Digite a letra do estado (A-H): ");
    scanf(" %c", &estado2); 

    printf("Digite o codigo da carta (ex: A01, B03): ");
    scanf("%s", codigo2);

    printf("Digite o nome da cidade: ");
    scanf(" %49[^\n]", nome_cidade2);

    printf("Digite a populacao: ");
    scanf("%d", &populacao2);

    printf("Digite a area em km2: ");
    scanf("%f", &area2);

    printf("Digite o PIB (em bilhoes de reais): ");
    scanf("%f", &pib2);

    printf("Digite o numero de pontos turisticos: ");
    scanf("%d", &pontos_turisticos2);
    
    printf("\n");

    // Exibição das cartas
    printf("---- Carta 1 ----\n");
    printf("Estado: %c\n", estado1); 
    printf("Codigo: %s\n", codigo1);
    printf("Cidade: %s\n", nome_cidade1);
    printf("Populacao: %d\n", populacao1);
    printf("Area: %.2f km2\n", area1); 
    printf("PIB: %.2f bilhoes de reais\n", pib1);
    printf("Pontos Turisticos: %d\n", pontos_turisticos1);
    printf("\n"); 

    printf("---- Carta 2 ----\n");
    printf("Estado: %c\n", estado2);
    printf("Codigo: %s\n", codigo2);
    printf("Cidade: %s\n", nome_cidade2);
    printf("Populacao: %d\n", populacao2);
    printf("Area: %.2f km2\n", area2);
    printf("PIB: %.2f bilhoes de reais\n", pib2);
    printf("Pontos Turisticos: %d\n", pontos_turisticos2);
    printf("\n");

    // Cálculo da densidade populacional
    float densidade1 = populacao1 / area1;
    float densidade2 = populacao2 / area2;

    printf("Densidade populacional da cidade 1: %.2f hab/km2\n", densidade1);
    printf("Densidade populacional da cidade 2: %.2f hab/km2\n", densidade2);
    printf("\n");

    // Comparação usando IF e ELSE
    if (densidade1 > densidade2) {
        printf("A cidade com MAIOR densidade populacional é: %s (%.2f hab/km2)\n", nome_cidade1, densidade1);
    } else if (densidade2 > densidade1) {
        printf("A cidade com MAIOR densidade populacional é: %s (%.2f hab/km2)\n", nome_cidade2, densidade2);
    } else {
        printf("As duas cidades possuem a MESMA densidade populacional (%.2f hab/km2)\n", densidade1);
    }

    return 0;
}
