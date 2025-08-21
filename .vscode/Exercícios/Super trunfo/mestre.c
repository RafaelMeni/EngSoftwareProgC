#include <stdio.h>

int main() {
    // ======== Declaração das variáveis para a Carta 1 ========
    char estado1;
    char codigo1[4];
    char cidade1[50];
    unsigned long int populacao1;
    float area1;
    float pib1;
    int pontos_turisticos1;
    float densidade1;
    float pib_per_capita1;
    float super_poder1;

    // ======== Declaração das variáveis para a Carta 2 ========
    char estado2;
    char codigo2[4];
    char cidade2[50];
    unsigned long int populacao2;
    float area2;
    float pib2;
    int pontos_turisticos2;
    float densidade2;
    float pib_per_capita2;
    float super_poder2;

    // ======== Entrada de dados para a Carta 1 ========
    printf("=== Cadastro da Carta 1 ===\n");
    printf("Digite o Estado (A-H): ");
    scanf(" %c", &estado1);

    printf("Digite o Código da Carta (Ex: A01): ");
    scanf("%s", codigo1);

    printf("Digite o Nome da Cidade: ");
    scanf(" %[^\n]", cidade1);

    printf("Digite a População: ");
    scanf("%lu", &populacao1);

    printf("Digite a Área em km²: ");
    scanf("%f", &area1);

    printf("Digite o PIB da cidade (em bilhões): ");
    scanf("%f", &pib1);

    printf("Digite o Número de Pontos Turísticos: ");
    scanf("%d", &pontos_turisticos1);

    // ======== Entrada de dados para a Carta 2 ========
    printf("\n=== Cadastro da Carta 2 ===\n");
    printf("Digite o Estado (A-H): ");
    scanf(" %c", &estado2);

    printf("Digite o Código da Carta (Ex: B02): ");
    scanf("%s", codigo2);

    printf("Digite o Nome da Cidade: ");
    scanf(" %[^\n]", cidade2);

    printf("Digite a População: ");
    scanf("%lu", &populacao2);

    printf("Digite a Área em km²: ");
    scanf("%f", &area2);

    printf("Digite o PIB da cidade (em bilhões): ");
    scanf("%f", &pib2);

    printf("Digite o Número de Pontos Turísticos: ");
    scanf("%d", &pontos_turisticos2);

    // ======== Cálculos da Carta 1 ========
    densidade1 = populacao1 / area1;
    pib_per_capita1 = (pib1 * 1000000000.0f) / populacao1;
    super_poder1 = (float)populacao1 + area1 + (pib1 * 1000000000.0f) +
                   pontos_turisticos1 + pib_per_capita1 + (1.0f / densidade1);

    // ======== Cálculos da Carta 2 ========
    densidade2 = populacao2 / area2;
    pib_per_capita2 = (pib2 * 1000000000.0f) / populacao2;
    super_poder2 = (float)populacao2 + area2 + (pib2 * 1000000000.0f) +
                   pontos_turisticos2 + pib_per_capita2 + (1.0f / densidade2);

    // ======== Exibição dos resultados das comparações ========
    printf("\n=== Comparação de Cartas ===\n");

    // População (maior vence)
    printf("População: Carta 1 venceu (%d)\n", populacao1 > populacao2);

    // Área (maior vence)
    printf("Área: Carta 1 venceu (%d)\n", area1 > area2);

    // PIB (maior vence)
    printf("PIB: Carta 1 venceu (%d)\n", pib1 > pib2);

    // Pontos turísticos (maior vence)
    printf("Pontos Turísticos: Carta 1 venceu (%d)\n", pontos_turisticos1 > pontos_turisticos2);

    // Densidade populacional (menor vence)
    printf("Densidade Populacional: Carta 1 venceu (%d)\n", densidade1 < densidade2);

    // PIB per capita (maior vence)
    printf("PIB per Capita: Carta 1 venceu (%d)\n", pib_per_capita1 > pib_per_capita2);

    // Super Poder (maior vence)
    printf("Super Poder: Carta 1 venceu (%d)\n", super_poder1 > super_poder2);

    return 0;
}
