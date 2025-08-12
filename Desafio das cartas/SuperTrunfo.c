#include <stdio.h>
#include <stdio.h>

int main() {
    int   populacao1;
    float area1;
    float pib1;
    int   pontos1;

    // --- Variáveis da carta 2 ---
    int   populacao2;
    float area2;
    float pib2;
    int   pontos2;

    // Carta 1
    printf("-- Cadastro da carta 1 --\n");
    printf("Populacao: ");
    scanf("%d", &populacao1);
    printf("Area (km2): ");
    scanf("%f", &area1);
    printf("PIB: ");
    scanf("%f", &pib1);
    printf("Pontos turisticos: ");
    scanf("%d", &pontos1);

    // Carta 2
    printf("\n-- Cadastro da carta 2 --\n");
    printf("Populacao: ");
    scanf("%d", &populacao2);
    printf("Area (km2): ");
    scanf("%f", &area2);
    printf("PIB: ");
    scanf("%f", &pib2);
    printf("Pontos turisticos: ");
    scanf("%d", &pontos2);

    printf("\n-- Carta 1 --\n");
    printf("Populacao: %d\n", populacao1);
    printf("Area: %.2f km2\n", area1);
    printf("PIB: %.2f\n", pib1);
    printf("Numero de pontos turisticos: %d\n", pontos1);

    printf("\n-- Carta 2 --\n");
    printf("Populacao: %d\n", populacao2);
    printf("Area: %.2f km2\n", area2);
    printf("PIB: %.2f\n", pib2);
    printf("Numero de pontos turisticos: %d\n", pontos2);

    return 0;
}

    
    
