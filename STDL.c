#include <stdio.h>
#include <stdlib.h>

int main() {
    // ====================================================
    // Cadastro da Carta 1: Salvador
    // ====================================================
    char estado1[] = "BA";
    char nomeCidade1[] = "Salvador";
    int populacao1 = 2886698;
    float area1 = 693.83;
    float pib1 = 63.82;
    int pontosTuristicos1 = 25;
    float densidadePopulacional1 = populacao1 / area1;

    // ====================================================
    // Cadastro da Carta 2: Belo Horizonte
    // ====================================================
    char estado2[] = "MG";
    char nomeCidade2[] = "Belo Horizonte";
    int populacao2 = 2375129;
    float area2 = 331.40;
    float pib2 = 94.34;
    int pontosTuristicos2 = 30;
    float densidadePopulacional2 = populacao2 / area2;

    int escolha1, escolha2;
    float valor1_carta1, valor1_carta2;
    float valor2_carta1, valor2_carta2;
    float soma_carta1, soma_carta2;

    printf("======= MENU DE COMPARACAO DE CARTAS =======\n");
    printf("1 - Populacao\n");
    printf("2 - Area\n");
    printf("3 - PIB\n");
    printf("4 - Pontos Turisticos\n");
    printf("5 - Densidade Demografica\n");
    printf("Escolha o primeiro atributo para comparar (1-5): ");
    scanf("%d", &escolha1);

    printf("\nEscolha o segundo atributo para comparar (1-5), diferente do primeiro: ");
    scanf("%d", &escolha2);

    if (escolha1 == escolha2) {
        printf("\nErro: Os atributos devem ser diferentes. Reinicie o programa.\n");
        return 1;
    }

    float valores1[6] = {0, populacao1, area1, pib1, pontosTuristicos1, densidadePopulacional1};
    float valores2[6] = {0, populacao2, area2, pib2, pontosTuristicos2, densidadePopulacional2};

    valor1_carta1 = valores1[escolha1];
    valor1_carta2 = valores2[escolha1];
    valor2_carta1 = valores1[escolha2];
    valor2_carta2 = valores2[escolha2];

    printf("\nComparando %s (%s) x %s (%s)\n\n", nomeCidade1, estado1, nomeCidade2, estado2);

    // Função para imprimir o nome do atributo
    char* nomesAtributos[] = {"", "Populacao", "Area", "PIB", "Pontos Turisticos", "Densidade Demografica"};

    for (int i = 0; i < 2; i++) {
        int escolha = (i == 0) ? escolha1 : escolha2;
        float v1 = (i == 0) ? valor1_carta1 : valor2_carta1;
        float v2 = (i == 0) ? valor1_carta2 : valor2_carta2;

        printf("Atributo %d: %s\n", i+1, nomesAtributos[escolha]);
        printf("%s: %.2f\n", nomeCidade1, v1);
        printf("%s: %.2f\n", nomeCidade2, v2);
        if (escolha == 5) {
            printf("Vencedor: %s\n\n", v1 < v2 ? nomeCidade1 : v1 > v2 ? nomeCidade2 : "Empate");
        } else {
            printf("Vencedor: %s\n\n", v1 > v2 ? nomeCidade1 : v1 < v2 ? nomeCidade2 : "Empate");
        }
    }

    soma_carta1 = (escolha1 == 5 ? -valor1_carta1 : valor1_carta1) + (escolha2 == 5 ? -valor2_carta1 : valor2_carta1);
    soma_carta2 = (escolha1 == 5 ? -valor1_carta2 : valor1_carta2) + (escolha2 == 5 ? -valor2_carta2 : valor2_carta2);

    printf("======= RESULTADO FINAL =======\n");
    printf("Soma dos atributos - %s: %.2f\n", nomeCidade1, soma_carta1);
    printf("Soma dos atributos - %s: %.2f\n", nomeCidade2, soma_carta2);

    printf("Resultado Final: %s\n", 
        soma_carta1 > soma_carta2 ? nomeCidade1 : 
        soma_carta2 > soma_carta1 ? nomeCidade2 : "Empate");

    return 0;
}
