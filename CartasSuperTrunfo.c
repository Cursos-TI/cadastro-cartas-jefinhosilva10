#include <stdio.h>

int main() {
    // ===================== CARTA 1 =====================
    char estado1[30];       
    char codigo1[4];        
    char nomeCidade1[50];   
    int populacao1;
    float area1, pib1;
    int pontosTuristicos1;
    float densidade1, pibPerCapita1;
    float superPoder1;

    // ===================== CARTA 2 =====================
    char estado2[30];
    char codigo2[4];
    char nomeCidade2[50];
    int populacao2;
    float area2, pib2;
    int pontosTuristicos2;
    float densidade2, pibPerCapita2;
    float superPoder2;

    // ---------- Entrada de dados da Carta 1 ----------
    printf("=== Cadastro da Carta 1 ===\n");
    printf("Nome do Estado: ");
    scanf(" %[^\n]", estado1);

    printf("Codigo da Carta (ex: A01): ");
    scanf("%s", codigo1);

    printf("Nome da Cidade: ");
    scanf(" %[^\n]", nomeCidade1);

    printf("Populacao: ");
    scanf("%d", &populacao1);

    printf("Area (em km2): ");
    scanf("%f", &area1);

    printf("PIB (em bilhoes): ");
    scanf("%f", &pib1);

    printf("Numero de Pontos Turisticos: ");
    scanf("%d", &pontosTuristicos1);

    // Cálculos da Carta 1
    densidade1 = populacao1 / area1;
    pibPerCapita1 = (pib1 * 1000000000) / populacao1;
    superPoder1 = populacao1 + area1 + pib1 + pontosTuristicos1 + pibPerCapita1 + (1 / densidade1);

    // ---------- Entrada de dados da Carta 2 ----------
    printf("\n=== Cadastro da Carta 2 ===\n");
    printf("Nome do Estado: ");
    scanf(" %[^\n]", estado2);

    printf("Codigo da Carta (ex: B02): ");
    scanf("%s", codigo2);

    printf("Nome da Cidade: ");
    scanf(" %[^\n]", nomeCidade2);

    printf("Populacao: ");
    scanf("%d", &populacao2);

    printf("Area (em km2): ");
    scanf("%f", &area2);

    printf("PIB (em bilhoes): ");
    scanf("%f", &pib2);

    printf("Numero de Pontos Turisticos: ");
    scanf("%d", &pontosTuristicos2);

    // Cálculos da Carta 2
    densidade2 = populacao2 / area2;
    pibPerCapita2 = (pib2 * 1000000000) / populacao2;
    superPoder2 = populacao2 + area2 + pib2 + pontosTuristicos2 + pibPerCapita2 + (1 / densidade2);

    // ---------- Exibindo as cartas ----------
    printf("\n=== Carta 1 ===\n");
    printf("%s - %s (%s)\n", codigo1, nomeCidade1, estado1);
    printf("Populacao: %d\n", populacao1);
    printf("Area: %.2f km2\n", area1);
    printf("PIB: %.2f bilhoes\n", pib1);
    printf("Pontos Turisticos: %d\n", pontosTuristicos1);
    printf("Densidade Populacional: %.2f hab/km2\n", densidade1);
    printf("PIB per Capita: %.2f reais\n", pibPerCapita1);
    printf("Super Poder: %.2f\n", superPoder1);

    printf("\n=== Carta 2 ===\n");
    printf("%s - %s (%s)\n", codigo2, nomeCidade2, estado2);
    printf("Populacao: %d\n", populacao2);
    printf("Area: %.2f km2\n", area2);
    printf("PIB: %.2f bilhoes\n", pib2);
    printf("Pontos Turisticos: %d\n", pontosTuristicos2);
    printf("Densidade Populacional: %.2f hab/km2\n", densidade2);
    printf("PIB per Capita: %.2f reais\n", pibPerCapita2);
    printf("Super Poder: %.2f\n", superPoder2);

    // ---------- Confronto atributo por atributo ----------
    printf("\n=== Confronto Atributo por Atributo ===\n");

    // População
    if (populacao1 > populacao2)
        printf("Populacao: Carta 1 venceu (%d > %d)\n", populacao1, populacao2);
    else if (populacao2 > populacao1)
        printf("Populacao: Carta 2 venceu (%d > %d)\n", populacao2, populacao1);
    else
        printf("Populacao: Empate (%d = %d)\n", populacao1, populacao2);

    // Área
    if (area1 > area2)
        printf("Area: Carta 1 venceu (%.2f > %.2f)\n", area1, area2);
    else if (area2 > area1)
        printf("Area: Carta 2 venceu (%.2f > %.2f)\n", area2, area1);
    else
        printf("Area: Empate (%.2f = %.2f)\n", area1, area2);

    // PIB
    if (pib1 > pib2)
        printf("PIB: Carta 1 venceu (%.2f > %.2f)\n", pib1, pib2);
    else if (pib2 > pib1)
        printf("PIB: Carta 2 venceu (%.2f > %.2f)\n", pib2, pib1);
    else
        printf("PIB: Empate (%.2f = %.2f)\n", pib1, pib2);

    // Pontos Turísticos
    if (pontosTuristicos1 > pontosTuristicos2)
        printf("Pontos Turisticos: Carta 1 venceu (%d > %d)\n", pontosTuristicos1, pontosTuristicos2);
    else if (pontosTuristicos2 > pontosTuristicos1)
        printf("Pontos Turisticos: Carta 2 venceu (%d > %d)\n", pontosTuristicos2, pontosTuristicos1);
    else
        printf("Pontos Turisticos: Empate (%d = %d)\n", pontosTuristicos1, pontosTuristicos2);

    // Densidade (quanto MENOR, melhor)
    if (densidade1 < densidade2)
        printf("Densidade Populacional: Carta 1 venceu (%.2f < %.2f)\n", densidade1, densidade2);
    else if (densidade2 < densidade1)
        printf("Densidade Populacional: Carta 2 venceu (%.2f < %.2f)\n", densidade2, densidade1);
    else
        printf("Densidade Populacional: Empate (%.2f = %.2f)\n", densidade1, densidade2);

    // PIB per Capita
    if (pibPerCapita1 > pibPerCapita2)
        printf("PIB per Capita: Carta 1 venceu (%.2f > %.2f)\n", pibPerCapita1, pibPerCapita2);
    else if (pibPerCapita2 > pibPerCapita1)
        printf("PIB per Capita: Carta 2 venceu (%.2f > %.2f)\n", pibPerCapita2, pibPerCapita1);
    else
        printf("PIB per Capita: Empate (%.2f = %.2f)\n", pibPerCapita1, pibPerCapita2);

    // Super Poder
    if (superPoder1 > superPoder2)
        printf("Super Poder: Carta 1 venceu (%.2f > %.2f)\n", superPoder1, superPoder2);
    else if (superPoder2 > superPoder1)
        printf("Super Poder: Carta 2 venceu (%.2f > %.2f)\n", superPoder2, superPoder1);
    else
        printf("Super Poder: Empate (%.2f = %.2f)\n", superPoder1, superPoder2);

    return 0;
}
