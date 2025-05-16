#include <stdio.h>
/*
 ============================================================================
 Autor: Walclériston Ramos Américo
 Curso: Análise e Desenvolvimento de Sistemas – Estácio
 Professor: Sérgio Cardoso
 Descrição: Programa em C para cadastrar e exibir duas cartas do jogo 
 Super Trunfo, contendo informações sobre cidades brasileiras.
 Cada carta inclui: Estado, Código, Nome da Cidade, População, Área,
 PIB e Número de Pontos Turísticos.
 ============================================================================
*/

int main() {
    // Variáveis da Carta 1
    char estado1;
    char codigo1[5];
    char cidade1[50];
    int populacao1;
    float area1;
    float pib1;
    int pontosTuristicos1;
    float densidadePopulacional1;
    float pibPerCapita1;

    // Variáveis da Carta 2
    char estado2;
    char codigo2[10];
    char cidade2[50];
    int populacao2;
    float area2;
    float pib2;
    int pontosTuristicos2;
    float densidadePopulacional2;
    float pibPerCapita2;

    // Boas-vindas
    printf("====================================\n");
    printf("         SUPER TRUNFO - CIDADES     \n");
    printf("====================================\n\n");    
    printf("Bem-vindo ao jogo Super-Trunfo\n");
    printf("Cadastre duas cartas com os dados das cidades.\n\n");

    // Leitura da Carta 1
    printf("Cadastro da Carta 1:\n\n");
    printf("Escolha um Estado digitando uma letra conforme a lista:\n");
    printf("A - Acre\nB - Bahia\nC - Ceará\nD - Distrito Federal\n");
    printf("E - Espírito Santo\nF - Goiás\nG - Minas Gerais\nH - Santa Catarina\n\n");
    
    printf("Estado (A a H): ");
    scanf(" %c", &estado1);

    printf("\nDefina um código para a carta (ex: %c01): ", estado1);
    scanf("%s", codigo1);

    printf("\nDigite o nome da cidade: ");
    scanf("%s", cidade1);  

    printf("\nPopulação: ");
    scanf("%d", &populacao1);

    printf("\nÁrea (em km²): ");
    scanf("%f", &area1);

    printf("\nPIB (em bilhões): ");
    scanf("%f", &pib1);

    printf("\nNúmero de Pontos Turísticos: ");
    scanf("%d", &pontosTuristicos1);

    // Calculos dinâmicos carta 1
    densidadePopulacional1 = (float) populacao1 / area1;
    pibPerCapita1 = (pib1 * 1000000000) / populacao1;

    printf("\n================================================\n");
    printf("Carta 1 cadastrada com sucesso!\n");
    printf("================================================\n\n");

    // --- Leitura da Carta 2 ---
    printf("Cadastro da Carta 2:\n\n");
    printf("Escolha um Estado digitando uma letra conforme a lista:\n");
    printf("A - Acre\nB - Bahia\nC - Ceará\nD - Distrito Federal\n");
    printf("E - Espírito Santo\nF - Goiás\nG - Minas Gerais\nH - Santa Catarina\n\n");

    printf("Estado (A a H): ");
    scanf(" %c", &estado2);

    printf("\nDefina um código para a carta (ex: %c03): ", estado2);
    scanf("%s", codigo2);

    printf("\nDigite o nome da cidade: ");
    scanf("%s", cidade2);

    printf("\nPopulação: ");
    scanf("%d", &populacao2);

    printf("\nÁrea (em km²): ");
    scanf("%f", &area2);

    printf("\nPIB (em bilhões): ");
    scanf("%f", &pib2);

    printf("\nNúmero de Pontos Turísticos: ");
    scanf("%d", &pontosTuristicos2);

    // Calculos dinâmicos carta 2
    densidadePopulacional2 = (float) populacao2 / area2;
    pibPerCapita2 = (pib2 * 1000000000) / populacao2;

    printf("\n================================================\n");
    printf("Carta 2 cadastrada com sucesso!\n");
    printf("================================================\n\n");

    // --- Exibição da Carta 1 ---
    printf("=========== CARTA 1 ===========\n");
    printf("Estado: %c\n", estado1);
    printf("Código: %s\n", codigo1);
    printf("Nome da Cidade: %s\n", cidade1);
    printf("População: %d habitantes\n", populacao1);
    printf("Área: %.2f km²\n", area1);
    printf("PIB: %.2f bilhões de reais\n", pib1);
    printf("Número de Pontos Turísticos: %d\n", pontosTuristicos1);
    printf("Densidade Populacional: %.2f  hab/km²\n", densidadePopulacional1);
    printf("PIB per Capita: %.2f reais\n", pibPerCapita1);
    printf("===============================\n\n");

    // Exibição da Carta 2
    printf("=========== CARTA 2 ===========\n");
    printf("Estado: %c\n", estado2);
    printf("Código: %s\n", codigo2);
    printf("Nome da Cidade: %s\n", cidade2);
    printf("População: %d habitantes\n", populacao2);
    printf("Área: %.2f km²\n", area2);
    printf("PIB: %.2f bilhões de reais\n", pib2);
    printf("Número de Pontos Turísticos: %d\n", pontosTuristicos2);
    printf("Densidade Populacional: %.2f  hab/km²\n", densidadePopulacional2);
    printf("PIB per Capita: %.2f reais\n", pibPerCapita2);
    printf("===============================\n");
    return 0;
}
