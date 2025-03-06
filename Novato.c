#include <stdio.h>

// Super Trunfo - Cartas de Cidades
// Cadastro das Cartas

int main() {
    printf(" **  SUPER TRUNFO CIDADES  **\n");
    // Definir variáveis
    char nome_do_estado1[50], nome_do_estado2[50];
    char codigo_da_carta1[4], codigo_da_carta2[4];
    char nome_da_cidade1[50], nome_da_cidade2[50];
    unsigned long int populacao1, populacao2;
    float area_em_km1, area_em_km2;
    float pib1, pib2;
    int numero_de_pontos_turisticos1, numero_de_pontos_turisticos2;
    
    // Definir variáveis para densidade e PIB per capita
    float densidade_populacional1, densidade_populacional2;
    float pib_per_capita1, pib_per_capita2;

    // Leitura do Exemplo
    printf("____________________________________________\n");
    printf("____________________________________________\n");

    // *** CARTA 01 ***
    printf("*** CARTA 01 ***\n");

    // Inserir dados para a Carta 01
    printf("Nome do Estado = Pará\n");
    printf("Código da carta = A01\n");
    printf("Nome da Cidade = Santarém \n");
    populacao1 = 331942;  // População em habitantes 
    area_em_km1 = 228870.80; // Área em km²
    pib1 = 63090;            // PIB em bilhões
    numero_de_pontos_turisticos1 = 32;
    
    // Calculando densidade populacional e PIB per capita
    densidade_populacional1 = (float) populacao1 / area_em_km1;
    pib_per_capita1 = pib1 * 1000000000 / populacao1; // Multiplicando PIB por 1 bilhão para valores reais

    // Exibindo resultados da Carta 01
    printf("População = %lu habitantes\n", populacao1);
    printf("Área em KM² = %.2f \n", area_em_km1);
    printf("PIB = %.2f bilhões\n", pib1);
    printf("Número de pontos turísticos = %d pontos \n", numero_de_pontos_turisticos1);
    printf("Densidade Populacional = %.2f habitantes por km²\n", densidade_populacional1);
    printf("PIB per Capita = %.2f\n", pib_per_capita1);

    printf("____________________________________________\n");
    printf("____________________________________________\n");

    // *** CARTA 02 ***
    printf("*** CARTA 02 ***\n");

    // Inserir dados para a Carta 02
    printf("Nome do Estado = Paraná\n");
    printf("Código da carta = C03\n");
    printf("Nome da Cidade = Curitiba \n");
    populacao2 = 1774000;  // População em habitantes 
    area_em_km2 = 435277.00; // Área em km²
    pib2 = 98;            // PIB em bilhões
    numero_de_pontos_turisticos2 = 25;
    
    // Calculando densidade populacional e PIB per capita
    densidade_populacional2 = (float) populacao2 / area_em_km2;
    pib_per_capita2 = pib2 * 1000000000 / populacao2; // Multiplicando PIB por 1 bilhão para valores reais

    // Exibindo resultados da Carta 02
    printf("População = %lu habitantes\n", populacao2);
    printf("Área em KM² = %.2f \n", area_em_km2);
    printf("PIB = %.2f bilhões\n", pib2);
    printf("Número de pontos turísticos = %d pontos \n", numero_de_pontos_turisticos2);
    printf("Densidade Populacional = %.2f habitantes por km²\n", densidade_populacional2);
    printf("PIB per Capita = %.2f\n", pib_per_capita2);

    printf("____________________________________________\n");
    printf("____________________________________________\n");

    // Comparação de Atributo: População (como exemplo)
    printf("COMPARAÇÃO DE CARTAS\n");
    printf("Atributo: População\n");

    printf("Carta 1 - %s (%s): %lu habitantes\n", nome_da_cidade1, nome_do_estado1, populacao1);
    printf("Carta 2 - %s (%s): %lu habitantes\n", nome_da_cidade2, nome_do_estado2, populacao2);

    if (populacao1 > populacao2) {
        printf("Resultado: Carta 1 (Cidade 1) venceu! \n");
    } else if (populacao1 < populacao2) {
        printf("Resultado: Carta 2 (Cidade 2) venceu! \n");
    } else {
        printf("Resultado: Empate! Ambas as cidades possuem a mesma população. \n");
    }

    return 0;
    //TODAS AS REFERENCIAS À CARTA 03 DO DESAFIO ANTERIOR FOI DESCONSIDERADA NESSA ETAPA.
