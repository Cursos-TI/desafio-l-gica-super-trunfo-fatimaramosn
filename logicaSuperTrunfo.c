#include <stdio.h>

int main() {
    
    char estado1[] = "A";
    char estado2[] = "B";
    char codigo1[] = "A01";
    char codigo2[] = "B02";
    char cidade1[] = "São Paulo";
    char cidade2[] = "Rio de Janeiro";
    int populacao1 = 12325000;
    int populacao2 = 6748000;
    float area1 = 1521.11;
    float area2 = 1200.25;
    float pib1 = 699.28;  // em bilhões
    float pib2 = 300.50;  // em bilhões
    int pontosTuristicos1 = 50;
    int pontosTuristicos2 = 30;

   
    float densidade1, densidade2;
    float pibPerCapita1, pibPerCapita2;

    
    densidade1 = populacao1 / area1;
    densidade2 = populacao2 / area2;

    pibPerCapita1 = (pib1 * 1000000000) / populacao1; // converter bilhões para reais
    pibPerCapita2 = (pib2 * 1000000000) / populacao2;

    
    printf("Carta 1:\n");
    printf("Estado: %s\nCódigo: %s\nNome da Cidade: %s\nPopulação: %d\nÁrea: %.2f km²\nPIB: %.2f bilhões de reais\nNúmero de Pontos Turísticos: %d\nDensidade Populacional: %.2f hab/km²\nPIB per Capita: %.2f reais\n\n",
           estado1, codigo1, cidade1, populacao1, area1, pib1, pontosTuristicos1, densidade1, pibPerCapita1);

    printf("Carta 2:\n");
    printf("Estado: %s\nCódigo: %s\nNome da Cidade: %s\nPopulação: %d\nÁrea: %.2f km²\nPIB: %.2f bilhões de reais\nNúmero de Pontos Turísticos: %d\nDensidade Populacional: %.2f hab/km²\nPIB per Capita: %.2f reais\n\n",
           estado2, codigo2, cidade2, populacao2, area2, pib2, pontosTuristicos2, densidade2, pibPerCapita2);

    
    printf("=== Comparação de Cartas (Atributo: População) ===\n");
    printf("Carta 1 - %s (%s): %d habitantes\n", cidade1, estado1, populacao1);
    printf("Carta 2 - %s (%s): %d habitantes\n", cidade2, estado2, populacao2);

    if (populacao1 > populacao2) {
        printf("Resultado: Carta 1 (%s) venceu!\n", cidade1);
    } else if (populacao2 > populacao1) {
        printf("Resultado: Carta 2 (%s) venceu!\n", cidade2);
    } else {
        printf("Resultado: Empate!\n");
    }

    return 0;
}

