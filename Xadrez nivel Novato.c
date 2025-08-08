#include <stdio.h>

int main() {
    char codigo1[4], codigo2[4]; // Ex: A01, B02
    int populacao1, populacao2;
    float area1, area2;
    float pib1, pib2;
    int pontos1, pontos2;

    // Cadastro da primeira carta
    printf("Digite o codigo da primeira carta (ex: A01): ");
    scanf("%s", codigo1);

    printf("a populacao: ");
    scanf("%d", &populacao1);

    printf("a area (em km²): ");
    scanf("%f", &area1);

    printf("o PIB (em bilhoes): ");
    scanf("%f", &pib1);

    printf(" o numero de pontos turisticos: ");
    scanf("%d", &pontos1);

    // Cadastro da segunda carta
    printf("\no codigo da segunda carta (ex: B02): ");
    scanf("%s", codigo2);

    printf(" a populacao: ");
    scanf("%d", &populacao2);

    printf("a area (em km²): ");
    scanf("%f", &area2);

    printf(" o PIB (em bilhoes): ");
    scanf("%f", &pib2);

    printf(" o numero de pontos turisticos: ");
    scanf("%d", &pontos2);

    // Exibição dos dados
    printf("\n=== Carta 1 ===\n");
    printf("Codigo: %s\n", codigo1);
    printf("Populacao: %d\n", populacao1);
    printf("Area: %.2f km²\n", area1);
    printf("PIB: %.2f bilhoes\n", pib1);
    printf("Pontos Turisticos: %d\n", pontos1);

    printf("\n=== Carta 2 ===\n");
    printf("Codigo: %s\n", codigo2);
    printf("Populacao: %d\n", populacao2);
    printf("Area: %.2f km²\n", area2);
    printf("PIB: %.2f bilhoes\n", pib2);
    printf("Pontos Turisticos: %d\n", pontos2);

    return 0;
}
