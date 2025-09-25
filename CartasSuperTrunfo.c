#include <stdio.h>

// Desafio Super Trunfo - Países
// Tema 1 - Cadastro das cartas
// Objetivo: No nível novato você deve criar as cartas representando as cidades utilizando scanf para entrada de dados e printf para exibir as informações.

int main() {
  // Área para definição das variáveis para armazenar as propriedades das cidades

     // Variáveis da CARTA 1
    char estado1;
    char codigo1[4]; 
    char nome_cidade1[20];
    int populacao1;
    float area1;
    float pib1; 
    int pontos_turisticos1;

    // Variáveis da CARTA 2
    char estado2;
    char codigo2[4];
    char nome_cidade2[20];
    int populacao2;
    float area2 ;
    float pib2;
    int pontos_turisticos2;

  // Área para entrada de dados

  // CARTA 1
    printf(" Carta 1 \n");

    printf("Digite a letra do estado (A-H): ");
    scanf(" %c", &estado1);
    
    printf("Digite o codigo da carta (ex: A01, B03): ");
    scanf("%s", &codigo1); 

    printf("Digite o nome da cidade: ");
    scanf("%s", nome_cidade1);

    printf("Digite a populacao: ");
    scanf("%d", &populacao1);

    printf("Digite a Area em km2: ");
    scanf("%f", &area1); 

    printf("Digite o PIB (em bilhoes de reais): ");
    scanf("%f", &pib1); 

    printf("Digite o numero de pontos turisticos: ");
    scanf("%d", &pontos_turisticos1);

    printf("\n");


    // CARTA 2
    printf(" Carta 2 \n");

    printf("Digite a letra do estado de 'A' a 'H':");
    scanf(" %c", &estado2); 

    printf("Digite o codigo da carta (ex: A01, B03): ");
    scanf("%s", codigo2);

    printf("Digite o nome da cidade: ");
    scanf("%s", nome_cidade2);


    printf("Digite a populacao:");
    scanf("%d", &populacao2);

    printf("Digite a Area em km2: ");
    scanf("%f", &area2);

    printf("Digite o PIB (em bilhoes de reais): ");
    scanf("%f", &pib2);

    printf("Digite o numero de pontos turisticos: ");
    scanf("%d", &pontos_turisticos2);

  // Área para exibição dos dados da cidade

  // Carta 1
    printf("Carta 1 \n");
    printf("Estado: %c\n", estado1); 
    printf("Codigo: %s\n", codigo1);
    printf("Nome da Cidade: %s\n", nome_cidade1);
    printf("Populacao: %d\n", populacao1);
    printf("Area: %.2f km2\n", area1); 
    printf("PIB: %.2f bilhoes de reais\n", pib1);
    printf("Numero de Pontos Turisticos: %d\n", pontos_turisticos1);


    //Carta 2
    printf("Carta 2 \n");
    printf("Estado: %c\n", estado2);
    printf("Codigo: %s\n", codigo2);
    printf("Nome da Cidade: %s\n", nome_cidade2);
    printf("Populacao: %d\n", populacao2);
    printf("Area: %.2f km2\n", area2);
    printf("PIB: %.2f bilhoes de reais\n", pib2);
    printf("Numero de Pontos Turisticos: %d\n", pontos_turisticos2);


return 0;
} 
