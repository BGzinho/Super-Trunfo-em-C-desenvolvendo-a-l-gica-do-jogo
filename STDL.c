#include <stdio.h>

int main() {
    // ====================================================
    // Cadastro da Carta 1: Salvador
    // ====================================================
    char estado1[] = "BA"; // Bahia
    char codigo1[] = "B01";
    char nomeCidade1[] = "Salvador";
    int populacao1 = 2886698;
    float area1 = 693.83;
    float pib1 = 63.82; // PIB em bilhões
    int pontosTuristicos1 = 25;

    // Cálculos derivados
    float densidadePopulacional1 = populacao1 / area1;
    float pibPerCapita1 = (pib1 * 1000000) / populacao1; // Convertendo bilhões para milhões (reais por habitante)

    // ====================================================
    // Cadastro da Carta 2: Belo Horizonte
    // ====================================================
    char estado2[] = "MG"; // Minas Gerais
    char codigo2[] = "M01";
    char nomeCidade2[] = "Belo Horizonte";
    int populacao2 = 2375129;
    float area2 = 331.40;
    float pib2 = 94.34;
    int pontosTuristicos2 = 30;

    // Cálculos derivados
    float densidadePopulacional2 = populacao2 / area2;
    float pibPerCapita2 = (pib2 * 1000000) / populacao2;

    // ====================================================
    // Exibindo as informações das duas cartas
    // ====================================================
    printf("========== CARTA 1 ==========\n");
    printf("Estado: %s\n", estado1);
    printf("Código: %s\n", codigo1);
    printf("Cidade: %s\n", nomeCidade1);
    printf("População: %d habitantes\n", populacao1);
    printf("Área: %.2f km²\n", area1);
    printf("PIB: %.2f bilhões de reais\n", pib1);
    printf("Pontos Turísticos: %d\n", pontosTuristicos1);
    printf("Densidade Populacional: %.2f hab/km²\n", densidadePopulacional1);
    printf("PIB per Capita: %.2f reais\n\n", pibPerCapita1);

    printf("========== CARTA 2 ==========\n");
    printf("Estado: %s\n", estado2);
    printf("Código: %s\n", codigo2);
    printf("Cidade: %s\n", nomeCidade2);
    printf("População: %d habitantes\n", populacao2);
    printf("Área: %.2f km²\n", area2);
    printf("PIB: %.2f bilhões de reais\n", pib2);
    printf("Pontos Turísticos: %d\n", pontosTuristicos2);
    printf("Densidade Populacional: %.2f hab/km²\n", densidadePopulacional2);
    printf("PIB per Capita: %.2f reais\n\n", pibPerCapita2);

    // ====================================================
    // COMPARAÇÃO DE UM ÚNICO ATRIBUTO (População)
    // ====================================================
    printf("====== COMPARAÇÃO DE CARTAS (Atributo: População) ======\n\n");
    printf("Carta 1 - %s (%s): %d habitantes\n", nomeCidade1, estado1, populacao1);
    printf("Carta 2 - %s (%s): %d habitantes\n\n", nomeCidade2, estado2, populacao2);

    // Lógica de comparação
    if (populacao1 > populacao2) {
        printf("Resultado: Carta 1 (%s) venceu!\n", nomeCidade1);
    } else if (populacao2 > populacao1) {
        printf("Resultado: Carta 2 (%s) venceu!\n", nomeCidade2);
    } else {
        printf("Resultado: Empate! Ambas as cidades têm a mesma população.\n");
    }

    return 0;
}