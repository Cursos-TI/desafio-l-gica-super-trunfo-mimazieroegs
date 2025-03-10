#include <stdio.h>
#include <stdlib.h>
#include <time.h>

// Super Trunfo Países
// Tema 2 : Mestre

int main() {
    printf("**SUPER TRUNFO PAÍSES**\n");

    // Definir variáveis
    char nome_do_estado1[50] = "Pará", nome_do_estado2[50] = "Paraná";
    char codigo_da_carta1[4] = "A01", codigo_da_carta2[4] = "C03";
    char nome_da_cidade1[50] = "Santarém", nome_da_cidade2[50] = "Curitiba";
    unsigned long int populacao1 = 331942, populacao2 = 1774000;
    float area_em_km1 = 228870.80, area_em_km2 = 435277.00;
    float pib1 = 63090, pib2 = 98;
    int numero_de_pontos_turisticos1 = 32, numero_de_pontos_turisticos2 = 25;

    // Definir variáveis para densidade e PIB per capita
    float densidade_populacional1 = (float) populacao1 / area_em_km1;
    float densidade_populacional2 = (float) populacao2 / area_em_km2;
    float pib_per_capita1 = pib1 * 1000000000 / populacao1; // Multiplicando PIB por 1 bilhão para valores reais
    float pib_per_capita2 = pib2 * 1000000000 / populacao2; // Multiplicando PIB por 1 bilhão para valores reais

    // Variáveis para armazenar os atributos escolhidos
    int atributo1, atributo2;
    float soma_carta1, soma_carta2;

    srand(time(NULL)); // Inicializar o gerador de números aleatórios

    // *** Exibindo as cartas ***
    printf("\nCarta 1 (%s):\n", nome_do_estado1);
    printf("Nome da Cidade: %s\n", nome_da_cidade1);
    printf("População: %lu\n", populacao1);
    printf("Área: %.2f km²\n", area_em_km1);
    printf("PIB: %.2f bilhões\n", pib1);
    printf("Pontos Turísticos: %d\n", numero_de_pontos_turisticos1);
    printf("Densidade Populacional: %.2f habitantes/km²\n", densidade_populacional1);
    printf("PIB per Capita: %.2f\n", pib_per_capita1);

    printf("\nCarta 2 (%s):\n", nome_do_estado2);
    printf("Nome da Cidade: %s\n", nome_da_cidade2);
    printf("População: %lu\n", populacao2);
    printf("Área: %.2f km²\n", area_em_km2);
    printf("PIB: %.2f bilhões\n", pib2);
    printf("Pontos Turísticos: %d\n", numero_de_pontos_turisticos2);
    printf("Densidade Populacional: %.2f habitantes/km²\n", densidade_populacional2);
    printf("PIB per Capita: %.2f\n", pib_per_capita2);

    printf("\nEscolha dois atributos para comparar (sem repetir):\n");

    // Menu para escolher o primeiro atributo
    printf("1. População\n");
    printf("2. Área\n");
    printf("3. PIB\n");
    printf("4. Número de Pontos Turísticos\n");
    printf("5. Densidade Demográfica\n");
    printf("Digite o número do primeiro atributo: ");
    scanf("%d", &atributo1);

    // Menu para escolher o segundo atributo (não pode ser o mesmo que o primeiro)
    do {
        printf("\nEscolha o segundo atributo (diferente do primeiro):\n");
        printf("1. População\n");
        printf("2. Área\n");
        printf("3. PIB\n");
        printf("4. Número de Pontos Turísticos\n");
        printf("5. Densidade Demográfica\n");
        printf("Digite o número do segundo atributo: ");
        scanf("%d", &atributo2);
    } while (atributo1 == atributo2);

    // Comparação e soma dos atributos escolhidos
    float valor_atributo1_carta1, valor_atributo2_carta1, valor_atributo1_carta2, valor_atributo2_carta2;

    // Atributo 1
    switch(atributo1) {
        case 1:
            valor_atributo1_carta1 = populacao1;
            valor_atributo1_carta2 = populacao2;
            break;
        case 2:
            valor_atributo1_carta1 = area_em_km1;
            valor_atributo1_carta2 = area_em_km2;
            break;
        case 3:
            valor_atributo1_carta1 = pib1;
            valor_atributo1_carta2 = pib2;
            break;
        case 4:
            valor_atributo1_carta1 = numero_de_pontos_turisticos1;
            valor_atributo1_carta2 = numero_de_pontos_turisticos2;
            break;
        case 5:
            valor_atributo1_carta1 = densidade_populacional1;
            valor_atributo1_carta2 = densidade_populacional2;
            break;
        default:
            printf("Opção inválida!\n");
            return 0;
    }

    // Atributo 2
    switch(atributo2) {
        case 1:
            valor_atributo2_carta1 = populacao1;
            valor_atributo2_carta2 = populacao2;
            break;
        case 2:
            valor_atributo2_carta1 = area_em_km1;
            valor_atributo2_carta2 = area_em_km2;
            break;
        case 3:
            valor_atributo2_carta1 = pib1;
            valor_atributo2_carta2 = pib2;
            break;
        case 4:
            valor_atributo2_carta1 = numero_de_pontos_turisticos1;
            valor_atributo2_carta2 = numero_de_pontos_turisticos2;
            break;
        case 5:
            valor_atributo2_carta1 = densidade_populacional1;
            valor_atributo2_carta2 = densidade_populacional2;
            break;
        default:
            printf("Opção inválida!\n");
            return 0;
    }

    // Comparando os atributos 1
    printf("\nComparação do atributo 1:\n");
    printf("Carta 1: %.2f, Carta 2: %.2f\n", valor_atributo1_carta1, valor_atributo1_carta2);
    int resultado1 = (valor_atributo1_carta1 > valor_atributo1_carta2) - (valor_atributo1_carta1 < valor_atributo1_carta2);

    // Comparando os atributos 2
    printf("\nComparação do atributo 2:\n");
    printf("Carta 1: %.2f, Carta 2: %.2f\n", valor_atributo2_carta1, valor_atributo2_carta2);
    int resultado2 = (valor_atributo2_carta1 > valor_atributo2_carta2) - (valor_atributo2_carta1 < valor_atributo2_carta2);

    // Soma dos atributos
    soma_carta1 = valor_atributo1_carta1 + valor_atributo2_carta1;
    soma_carta2 = valor_atributo1_carta2 + valor_atributo2_carta2;

    // Exibindo os resultados
    printf("\nSoma dos atributos:\n");
    printf("Carta 1: %.2f, Carta 2: %.2f\n", soma_carta1, soma_carta2);

    if (soma_carta1 > soma_carta2) {
        printf("\nA Carta 1 venceu!\n");
    } else if (soma_carta1 < soma_carta2) {
        printf("\nA Carta 2 venceu!\n");
    } else {
        printf("\nEmpate!\n");
    }

    return 0;
}
