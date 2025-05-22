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
    const char* nomeEstado1;
    char codigo1[5];
    char cidade1[50];
    unsigned long int populacao1;
    float area1;
    float pib1;
    int pontosTuristicos1;
    float densidadePopulacional1;
    float pibPerCapita1;
    float superPoder1;

    // Variáveis da Carta 2
    char estado2;
    const char* nomeEstado2;
    char codigo2[10];
    char cidade2[50];
    unsigned long int populacao2;
    float area2;
    float pib2;
    int pontosTuristicos2;
    float densidadePopulacional2;
    float pibPerCapita2;
    float superPoder2;
    
    //Variáveis de comparações
    int resultadoPopulacao1, resultadoPopulacao2;
    int resultadoArea1, resultadoArea2;
    int resultadoPib1, resultadoPib2;
    int resultadoPontosTuristicos1, resultadoPontosTuristicos2;
    int resultadoDensidadePopulacional1, resultadoDensidadePopulacional2;
    int resultadoPibPerCapita1, resultadoPibPerCapita2;
    int resultadoSuperPoder1, resultadoSuperPoder2;

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
    float inversoDensidade1 = 1.0 / densidadePopulacional1;
    superPoder1 = (float) populacao1 + area1 + (pib1 * 1000000000) + (float) pontosTuristicos1 + pibPerCapita1 + inversoDensidade1;

    printf("\n================================================\n");
    printf("Carta 1 cadastrada com sucesso!\n");
    printf("================================================\n\n");

    // Leitura da Carta 2
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
    float inversoDensidade2 = 1.0 / densidadePopulacional2;
    superPoder2 = populacao2 + area2 + (pib2 * 1000000000) + pontosTuristicos2 + pibPerCapita2 + inversoDensidade2;

    // Comparações Carta 1
    resultadoPopulacao1 = populacao1 > populacao2;
    resultadoArea1 = area1 > area2;
    resultadoPib1 = pib1 > pib2;
    resultadoPontosTuristicos1 = pontosTuristicos1 > pontosTuristicos2;
    resultadoDensidadePopulacional1 = densidadePopulacional1 > densidadePopulacional2;
    resultadoPibPerCapita1 = pibPerCapita1 > pibPerCapita2;
    resultadoSuperPoder1 = superPoder1 > superPoder2;

    // Comparações Carta 2
    resultadoPopulacao2 = populacao1 < populacao2;
    resultadoArea2 = area1 < area2;
    resultadoPib2 = pib1 < pib2;
    resultadoPontosTuristicos2 = pontosTuristicos1 < pontosTuristicos2;
    resultadoDensidadePopulacional2 = densidadePopulacional1 < densidadePopulacional2;
    resultadoPibPerCapita2 = pibPerCapita1 < pibPerCapita2;
    resultadoSuperPoder2 = superPoder1 < superPoder2;

    // 

    printf("\n================================================\n");
    printf("Carta 2 cadastrada com sucesso!\n");
    printf("================================================\n\n");

    // Exibição da Carta 1
    printf("============= CARTA 1 =============\n");
    printf("Estado: %c\n", estado1);
    printf("Código: %s\n", codigo1);
    printf("Nome da Cidade: %s\n", cidade1);
    printf("População: %d habitantes\n", populacao1);
    printf("Área: %.2f km²\n", area1);
    printf("PIB: %.2f bilhões de reais\n", pib1);
    printf("Número de Pontos Turísticos: %d\n", pontosTuristicos1);
    printf("Densidade Populacional: %.2f  hab/km²\n", densidadePopulacional1);
    // printf("Densidade Invertida: : %.2f\n", inversoDensidade1);
    printf("PIB per Capita: %.2f reais\n", pibPerCapita1);
    printf("Super Poder: : %.2f\n", superPoder1);
    printf("===================================\n\n");

    // Exibição da Carta 2
    printf("============= CARTA 2 =============\n");
    printf("Estado: %c\n", estado2);
    printf("Código: %s\n", codigo2);
    printf("Nome da Cidade: %s\n", cidade2);
    printf("População: %d habitantes\n", populacao2);
    printf("Área: %.2f km²\n", area2);
    printf("PIB: %.2f bilhões de reais\n", pib2);
    printf("Número de Pontos Turísticos: %d\n", pontosTuristicos2);
    printf("Densidade Populacional: %.2f  hab/km²\n", densidadePopulacional2);
    // printf("Densidade Invertida: : %.2f\n", inversoDensidade2);
    printf("PIB per Capita: %.2f reais\n", pibPerCapita2);
    printf("Super Poder: : %.2f\n", superPoder2);
    printf("===================================\n\n");
    
    // Comparação de Cartas Sem IF/ELSE
    printf("====== Comparação das Cartas ======\n");
    printf("=========== Sem IF/ELSE ===========\n");
    printf("População: Carta 1 venceu (%d) / Carta 2 venceu (%d)\n", resultadoPopulacao1, resultadoPopulacao2);
    printf("Área: Carta 1 venceu (%d) / Carta 2 venceu (%d)\n", resultadoArea1, resultadoArea2);
    printf("PIB:  Carta 1 venceu (%d) / Carta 2 venceu (%d)\n", resultadoPib1, resultadoPib2);
    printf("Pontos Turísticos:  Carta 1 venceu (%d) / Carta 2 venceu (%d)\n", resultadoPontosTuristicos1, resultadoPontosTuristicos2);
    printf("Densidade Populacional:  Carta 1 venceu (%d) / Carta 2 venceu (%d)\n", resultadoDensidadePopulacional1, resultadoDensidadePopulacional2);
    printf("PIB per Capita:  Carta 1 venceu (%d) / Carta 2 venceu (%d)\n", resultadoPibPerCapita1, resultadoPibPerCapita2);
    printf("Super Poder:  Carta 1 venceu (%d) / Carta 2 venceu (%d)\n", resultadoSuperPoder1, resultadoSuperPoder2);
    printf("===================================\n\n");

    // A - Acre
    // B - Bahia
    // C - Ceará
    // D - Distrito Federal
    // E - Espírito Santo
    // F - Goiás
    // G - Minas Gerais
    // H - Santa Catarina

    // Normalização de estado carta 1
    if(estado1 == 'A')
        nomeEstado1 = "AC";
    else if(estado1 == 'B')
        nomeEstado1 = "BA";
    else if(estado1 == 'C')
        nomeEstado1 = "CE";
    else if(estado1 == 'D')
        nomeEstado1 = "DF";
    else if(estado1 == 'E')
        nomeEstado1 = "ES";
    else if(estado1 == 'F')
        nomeEstado1 = "GO";
    else if(estado1 == 'G')
        nomeEstado1 = "MG";
    else if(estado1 == 'H')
        nomeEstado1 = "SC";
    else {
        nomeEstado1 = estado1;
        printf("Carta 1 - Estado inválido!\n\n");
    }

    // Normalização de estado carta 2
    if(estado2 == 'A')
        nomeEstado2 = "AC";
    else if(estado2 == 'B')
        nomeEstado2 = "BA";
    else if(estado2 == 'C')
        nomeEstado2 = "CE";
    else if(estado2 == 'D')
        nomeEstado2 = "DF";
    else if(estado2 == 'E')
        nomeEstado2 = "ES";
    else if(estado2 == 'F')
        nomeEstado2 = "GO";
    else if(estado2 == 'G')
        nomeEstado2 = "MG";
    else if(estado2 == 'H')
        nomeEstado2 = "SC";
    else {
        nomeEstado2 = estado2;
        printf("Carta 2 - Estado inválido!\n\n");
    }

    // Comparação de Cartas com IF/ELSE
    printf("====== Comparação das Cartas ======\n");
    printf("=========== Com IF/ELSE ===========\n");
    printf("======= Atributo: População =======\n");
    printf("Carta 1 - %s (%s): %.2u \n", cidade1, nomeEstado1, populacao1);
    printf("Carta 2 - %s (%s): %.2u \n", cidade2, nomeEstado2, populacao2);

    // Condição para determinar vencedor
    if(populacao1 > populacao2) 
        printf("Resultado: Carta 1 (%s) venceu!\n", cidade1);
    else {
        if(populacao1 == populacao2) {
            printf("Empate: Carta 1 e 2 tem o mesmo número de habitantes!\n");
        }
        printf("Resultado: Carta 2 (%s) venceu!\n", cidade2);
    }

    return 0;
}
