#include <stdio.h>

int main() {
    // Variáveis para a Carta 1
    unsigned long int populacao1;
    int pontos_turisticos1;
    float area1, pib1;
    float densidade1, pib_per_capita1, super_poder1;

    // Variáveis para a Carta 2
    unsigned long int populacao2;
    int pontos_turisticos2;
    float area2, pib2;
    float densidade2, pib_per_capita2, super_poder2;

    // Cadastro da Carta 1
    printf("Cadastro da Carta 1:\n");
    printf("População: ");
    scanf("%lu", &populacao1);
    printf("Área (em km²): ");
    scanf("%f", &area1);
    printf("PIB (em milhões): ");
    scanf("%f", &pib1);
    printf("Número de pontos turísticos: ");
    scanf("%d", &pontos_turisticos1);

    // Cálculos para a Carta 1
    densidade1 = populacao1 / area1;
    pib_per_capita1 = pib1 / populacao1;
    super_poder1 = (1 / densidade1) + pib_per_capita1 + pontos_turisticos1 + pib1 + area1 + populacao1;

    // Cadastro da Carta 2
    printf("\nCadastro da Carta 2:\n");
    printf("População: ");
    scanf("%lu", &populacao2);
    printf("Área (em km²): ");
    scanf("%f", &area2);
    printf("PIB (em milhões): ");
    scanf("%f", &pib2);
    printf("Número de pontos turísticos: ");
    scanf("%d", &pontos_turisticos2);

    // Cálculos para a Carta 2
    densidade2 = populacao2 / area2;
    pib_per_capita2 = pib2 / populacao2;
    super_poder2 = (1 / densidade2) + pib_per_capita2 + pontos_turisticos2 + pib2 + area2 + populacao2;

    // Exibição dos dados da Carta 1
    printf("\nDados da Carta 1:\n");
    printf("População: %lu\n", populacao1);
    printf("Área: %.2f km²\n", area1);
    printf("PIB: %.2f milhões\n", pib1);
    printf("Pontos Turísticos: %d\n", pontos_turisticos1);
    printf("Densidade Populacional: %.2f hab/km²\n", densidade1);
    printf("PIB per Capita: %.2f\n", pib_per_capita1);
    printf("Super Poder: %.2f\n", super_poder1);

    // Exibição dos dados da Carta 2
    printf("\nDados da Carta 2:\n");
    printf("População: %lu\n", populacao2);
    printf("Área: %.2f km²\n", area2);
    printf("PIB: %.2f milhões\n", pib2);
    printf("Pontos Turísticos: %d\n", pontos_turisticos2);
    printf("Densidade Populacional: %.2f hab/km²\n", densidade2);
    printf("PIB per Capita: %.2f\n", pib_per_capita2);
    printf("Super Poder: %.2f\n", super_poder2);

    // Comparação das cartas
    printf("\nComparação das Cartas:\n");

    // População
    printf("População: Carta 1 (%lu) vs Carta 2 (%lu) -> ", populacao1, populacao2);
    if (populacao1 > populacao2) {
        printf("Carta 1 vence!\n");
    } else if (populacao2 > populacao1) {
        printf("Carta 2 vence!\n");
    } else {
        printf("Empate!\n");
    }

    // Área
    printf("Área: Carta 1 (%.2f) vs Carta 2 (%.2f) -> ", area1, area2);
    if (area1 > area2) {
        printf("Carta 1 vence!\n");
    } else if (area2 > area1) {
        printf("Carta 2 vence!\n");
    } else {
        printf("Empate!\n");
    }

    // PIB
    printf("PIB: Carta 1 (%.2f) vs Carta 2 (%.2f) -> ", pib1, pib2);
    if (pib1 > pib2) {
        printf("Carta 1 vence!\n");
    } else if (pib2 > pib1) {
        printf("Carta 2 vence!\n");
    } else {
        printf("Empate!\n");
    }

    // Pontos Turísticos
    printf("Pontos Turísticos: Carta 1 (%d) vs Carta 2 (%d) -> ", pontos_turisticos1, pontos_turisticos2);
    if (pontos_turisticos1 > pontos_turisticos2) {
        printf("Carta 1 vence!\n");
    } else if (pontos_turisticos2 > pontos_turisticos1) {
        printf("Carta 2 vence!\n");
    } else {
        printf("Empate!\n");
    }

    // Densidade Populacional (menor valor vence)
    printf("Densidade Populacional: Carta 1 (%.2f) vs Carta 2 (%.2f) -> ", densidade1, densidade2);
    if (densidade1 < densidade2) {
        printf("Carta 1 vence!\n");
    } else if (densidade2 < densidade1) {
        printf("Carta 2 vence!\n");
    } else {
        printf("Empate!\n");
    }

    // PIB per Capita
    printf("PIB per Capita: Carta 1 (%.2f) vs Carta 2 (%.2f) -> ", pib_per_capita1, pib_per_capita2);
    if (pib_per_capita1 > pib_per_capita2) {
        printf("Carta 1 vence!\n");
    } else if (pib_per_capita2 > pib_per_capita1) {
        printf("Carta 2 vence!\n");
    } else {
        printf("Empate!\n");
    }

    // Super Poder
    printf("Super Poder: Carta 1 (%.2f) vs Carta 2 (%.2f) -> ", super_poder1, super_poder2);
    if (super_poder1 > super_poder2) {
        printf("Carta 1 vence!\n");
    } else if (super_poder2 > super_poder1) {
        printf("Carta 2 vence!\n");
    } else {
        printf("Empate!\n");
    }

    return 0;
}