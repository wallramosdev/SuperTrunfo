#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <time.h>

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

int main()
{
    printf("========================================\n");
    printf("         SUPER TRUNFO - CIDADES         \n");
    printf("========================================\n\n");
    printf("Carregando...\n\n");

    // inicialização de variáveis e métodos
    srand(time(0));
    // ====== Cartas Jogador 1 ======
    printf("========================================\n\n");
    printf("Carregando inventário Jogador 1:\n\n");
    printf("========================================\n\n");
    // cadastrada
    printf("Inicialização de variáveis Carta 1...\n");
    char estadoCartaJogador1;
    const char* nomeEstadoCartaJogador1;
    char codigoCartaJogador1[5];
    char cidadeCartaJogador1[50];
    unsigned long int populacaoCartaJogador1;
    int pontosTuristicosCartaJogador1;
    float areaCartaJogador1, pibCartaJogador1, densidadeCartaJogador1, pibPerCapitaCartaJogador1, superPoderCartaJogador1;
    printf("Carregamento concluído de variáveis Carta 1...\n\n");
    // fixa
    printf("Inicialização Carta G99: Nanuque/MG...\n");
    char estadoCartaFixaJogador1 = 'G';
    const char* nomeEstadoCartaFixaJogador1 = "MG";
    char codigoCartaFixaJogador1[5] = "G99";
    char cidadeCartaFixaJogador1[50] = "Nanuque";
    // printf("DEBUG - Cidade fixa jogador 1: %s\n", cidadeCartaFixaJogador1);
    unsigned long int populacaoCartaFixaJogador1 = 35038;
    float areaCartaFixaJogador1 = 1518166;
    float pibCartaFixaJogador1 = 0.808;
    int pontosTuristicosCartaFixaJogador1 = 15;
    float densidadeCartaFixaJogador1 = populacaoCartaFixaJogador1 / areaCartaFixaJogador1;
    float pibPerCapitaCartaFixaJogador1 = (pibCartaFixaJogador1 * 1000000000) / populacaoCartaFixaJogador1;
    float inversoCartaFixaDensidade1 = 1.0 / densidadeCartaFixaJogador1;
    float superPoderCartaFixaJogador1 = (float)populacaoCartaFixaJogador1 + areaCartaFixaJogador1 + (pibCartaFixaJogador1 * 1000000000) + (float)pontosTuristicosCartaFixaJogador1 + pibPerCapitaCartaFixaJogador1 + inversoCartaFixaDensidade1;
    printf("Carregamento concluído de Carta G99: %s/%s...\n\n", cidadeCartaFixaJogador1, nomeEstadoCartaFixaJogador1);

    // Randômica (Aleatória)
    printf("Inicialização Carta Aleatório: Randônopolis...\n");
    int numeroEstadoCartaRandJogador1 = rand() % 8 + 1;
    char estadoCartaRandJogador1;
    const char* nomeEstadoCartaRandJogador1;
    int numeroCodigoCartaRandJogador1 = rand() % 99 + 1;
    char numeroTextoCodigoCartaRandJogador1[2];
    char codigoCartaRandJogador1[5];
    char cidadeCartaRandJogador1[50] = "Randônopolis";
    unsigned long int populacaoCartaRandJogador1 = rand() % 1000000 + 10000;
    float areaCartaRandJogador1 = (rand() % 1000000) + 500;
    float pibCartaRandJogador1 = (rand() % 500) + 1;
    int pontosTuristicosCartaRandJogador1 = (rand() % 50) + 1;
    float densidadeCartaRandJogador1 = populacaoCartaRandJogador1 / areaCartaRandJogador1;
    float pibPerCapitaCartaRandJogador1 = (pibCartaRandJogador1 * 1000000000) / populacaoCartaRandJogador1;
    float inversoCartaRandDensidade1 = 1.0 / densidadeCartaRandJogador1;
    float superPoderCartaRandJogador1 = (float)populacaoCartaRandJogador1 + areaCartaRandJogador1 + (pibCartaRandJogador1 * 1000000000) + (float)pontosTuristicosCartaRandJogador1 + pibPerCapitaCartaRandJogador1 + inversoCartaRandDensidade1;
    // Gerar o estado (letra) a partir do número
    if (numeroEstadoCartaRandJogador1 == 1)
        estadoCartaRandJogador1 = 'A';
    else if (numeroEstadoCartaRandJogador1 == 2)
        estadoCartaRandJogador1 = 'B';
    else if (numeroEstadoCartaRandJogador1 == 3)
        estadoCartaRandJogador1 = 'C';
    else if (numeroEstadoCartaRandJogador1 == 4)
        estadoCartaRandJogador1 = 'D';
    else if (numeroEstadoCartaRandJogador1 == 5)
        estadoCartaRandJogador1 = 'E';
    else if (numeroEstadoCartaRandJogador1 == 6)
        estadoCartaRandJogador1 = 'F';
    else if (numeroEstadoCartaRandJogador1 == 7)
        estadoCartaRandJogador1 = 'G';
    else
    {
        estadoCartaRandJogador1 = 'H';
    }
    // Gerar o nome do estado (sigla)
    if (estadoCartaRandJogador1 == 'A')
        nomeEstadoCartaRandJogador1 = "AC";
    else if (estadoCartaRandJogador1 == 'B')
        nomeEstadoCartaRandJogador1 = "BA";
    else if (estadoCartaRandJogador1 == 'C')
        nomeEstadoCartaRandJogador1 = "CE";
    else if (estadoCartaRandJogador1 == 'D')
        nomeEstadoCartaRandJogador1 = "DF";
    else if (estadoCartaRandJogador1 == 'E')
        nomeEstadoCartaRandJogador1 = "ES";
    else if (estadoCartaRandJogador1 == 'F')
        nomeEstadoCartaRandJogador1 = "GO";
    else if (estadoCartaRandJogador1 == 'G')
        nomeEstadoCartaRandJogador1 = "MG";
    else
    {
        nomeEstadoCartaRandJogador1 = "SC";
    }
    // Gera o texto do número, ex.: "34"
    sprintf(numeroTextoCodigoCartaRandJogador1, "%02d", numeroCodigoCartaRandJogador1);
    // Monta o código final, exemplo: "G34"
    sprintf(codigoCartaRandJogador1, "%c%s", estadoCartaRandJogador1, numeroTextoCodigoCartaRandJogador1);
    printf("Carregamento concluído de Carta Aleatório: %s/%s...\n\n", cidadeCartaRandJogador1, nomeEstadoCartaRandJogador1);

    
    // ====== Cartas Jogador 2 ======
    printf("========================================\n\n");
    printf("Carregando inventário Jogador 2:\n\n");
    printf("========================================\n\n");
    // cadastrada
    printf("Inicialização de variáveis Carta 1...\n");
    char estadoCartaJogador2;
    const char* nomeEstadoCartaJogador2;
    char codigoCartaJogador2[5];
    char cidadeCartaJogador2[50];
    unsigned long int populacaoCartaJogador2;
    int pontosTuristicosCartaJogador2;
    float areaCartaJogador2, pibCartaJogador2, densidadeCartaJogador2, pibPerCapitaCartaJogador2, superPoderCartaJogador2;
    printf("Carregamento concluído de variáveis Carta 1...\n\n");
    // fixa
    printf("Inicialização Carta H99: Florianopolis...\n");
    char estadoCartaFixaJogador2 = 'H';
    const char* nomeEstadoCartaFixaJogador2 = "SC";
    char codigoCartaFixaJogador2[5] = "H99";
    char cidadeCartaFixaJogador2[50] = "Florianopolis";
    unsigned long int populacaoCartaFixaJogador2 = 537211;
    float areaCartaFixaJogador2 = 674844;
    float pibCartaFixaJogador2 = 23.684;
    int pontosTuristicosCartaFixaJogador2 = 263;
    float densidadeCartaFixaJogador2 = populacaoCartaFixaJogador2 / areaCartaFixaJogador2;
    float pibPerCapitaCartaFixaJogador2 = (pibCartaFixaJogador2 * 1000000000) / populacaoCartaFixaJogador2;
    float inversoCartaFixaDensidade2 = 1.0 / densidadeCartaFixaJogador2;
    float superPoderCartaFixaJogador2 = (float)populacaoCartaFixaJogador2 + areaCartaFixaJogador2 + (pibCartaFixaJogador2 * 1000000000) + (float)pontosTuristicosCartaFixaJogador2 + pibPerCapitaCartaFixaJogador2 + inversoCartaFixaDensidade2;
    printf("Carregamento concluído de Carta H99: %s/%s...\n\n", cidadeCartaFixaJogador2, nomeEstadoCartaFixaJogador2);

    // Randômica (Aleatória)
    printf("Inicialização Carta Aleatório: Santo Randômico...\n");
    int numeroEstadoCartaRandJogador2 = rand() % 8 + 1;
    char estadoCartaRandJogador2;
    const char* nomeEstadoCartaRandJogador2;
    int numeroCodigoCartaRandJogador2 = rand() % 99 + 1;
    char numeroTextoCodigoCartaRandJogador2[2];
    char codigoCartaRandJogador2[5];
    char cidadeCartaRandJogador2[] = "Santo Randômico";
    unsigned long int populacaoCartaRandJogador2 = rand() % 1000000 + 10000;
    float areaCartaRandJogador2 = (rand() % 1000000) + 500;
    float pibCartaRandJogador2 = (rand() % 500) + 1;
    int pontosTuristicosCartaRandJogador2 = (rand() % 50) + 1;
    float densidadeCartaRandJogador2 = populacaoCartaRandJogador2 / areaCartaRandJogador2;
    float pibPerCapitaCartaRandJogador2 = (pibCartaRandJogador2 * 1000000000) / populacaoCartaRandJogador2;
    float inversoCartaRandDensidade2 = 1.0 / densidadeCartaRandJogador2;
    float superPoderCartaRandJogador2 = (float)populacaoCartaRandJogador2 + areaCartaRandJogador2 + (pibCartaRandJogador2 * 1000000000) + (float)pontosTuristicosCartaRandJogador2 + pibPerCapitaCartaRandJogador2 + inversoCartaRandDensidade2;
    // Gerar o estado (letra) a partir do número
    if (numeroEstadoCartaRandJogador2 == 1)
        estadoCartaRandJogador2 = 'A';
    else if (numeroEstadoCartaRandJogador2 == 2)
        estadoCartaRandJogador2 = 'B';
    else if (numeroEstadoCartaRandJogador2 == 3)
        estadoCartaRandJogador2 = 'C';
    else if (numeroEstadoCartaRandJogador2 == 4)
        estadoCartaRandJogador2 = 'D';
    else if (numeroEstadoCartaRandJogador2 == 5)
        estadoCartaRandJogador2 = 'E';
    else if (numeroEstadoCartaRandJogador2 == 6)
        estadoCartaRandJogador2 = 'F';
    else if (numeroEstadoCartaRandJogador2 == 7)
        estadoCartaRandJogador2 = 'G';
    else
    {
        estadoCartaRandJogador2 = 'H';
    }
    // Gerar o nome do estado (sigla)
    if (estadoCartaRandJogador2 == 'A')
        nomeEstadoCartaRandJogador2 = "AC";
    else if (estadoCartaRandJogador2 == 'B')
        nomeEstadoCartaRandJogador2 = "BA";
    else if (estadoCartaRandJogador2 == 'C')
        nomeEstadoCartaRandJogador2 = "CE";
    else if (estadoCartaRandJogador2 == 'D')
        nomeEstadoCartaRandJogador2 = "DF";
    else if (estadoCartaRandJogador2 == 'E')
        nomeEstadoCartaRandJogador2 = "ES";
    else if (estadoCartaRandJogador2 == 'F')
        nomeEstadoCartaRandJogador2 = "GO";
    else if (estadoCartaRandJogador2 == 'G')
        nomeEstadoCartaRandJogador2 = "MG";
    else
    {
        nomeEstadoCartaRandJogador2 = "SC";
    }
    // Gera o texto do número, ex.: "34"
    sprintf(numeroTextoCodigoCartaRandJogador2, "%02d", numeroCodigoCartaRandJogador2);
    // Monta o código final, exemplo: "G34"
    sprintf(codigoCartaRandJogador2, "%c%s", estadoCartaRandJogador2, numeroTextoCodigoCartaRandJogador2);
    printf("Carregamento concluído de Carta Aleatório: %s/%s...\n\n", cidadeCartaRandJogador2, nomeEstadoCartaRandJogador2);
    printf("========================================\n\n");

    #ifdef _WIN32
        system("pause");
    #else
        printf("Pressione ENTER para continuar...");
        getchar();
        getchar();
    #endif

    #ifdef _WIN32
        system("cls");
    #else
        system("clear");
    #endif
    
    printf("========================================\n");
    printf("         SUPER TRUNFO - CIDADES         \n");
    printf("========================================\n\n");

    printf("Inventário Jogador 1:\n\n");

    // Exibição da Carta Fixa 1

    printf("============== CARTA Fixa ==============\n");
    printf("Estado: %s\n", nomeEstadoCartaFixaJogador1);
    printf("Código: %s\n", codigoCartaFixaJogador1);
    // printf("DEBUG antes de exibir carta - Cidade fixa jogador 1: %s\n", cidadeCartaFixaJogador1);
    printf("Nome da Cidade: %s\n", cidadeCartaFixaJogador1);
    printf("População: %d habitantes\n", populacaoCartaFixaJogador1);
    printf("Área: %.2f km²\n", areaCartaFixaJogador1);
    printf("PIB: %.2f bilhões de reais\n", pibCartaFixaJogador1);
    printf("Número de Pontos Turísticos: %d\n", pontosTuristicosCartaFixaJogador1);
    printf("Densidade Populacional: %.2f  hab/km²\n", densidadeCartaFixaJogador1);
    printf("PIB per Capita: %.2f reais\n", pibPerCapitaCartaFixaJogador1);
    printf("Super Poder: : %.2f\n", superPoderCartaFixaJogador1);
    printf("========================================\n\n");
    // Exibição da Carta Aleatória 1
    printf("=========== CARTA  Aleatória ===========\n");
    printf("Estado: %s\n", nomeEstadoCartaRandJogador1);
    printf("Código: %s\n", codigoCartaRandJogador1);
    printf("Nome da Cidade: %s\n", cidadeCartaRandJogador1);
    printf("População: %d habitantes\n", populacaoCartaRandJogador1);
    printf("Área: %.2f km²\n", areaCartaRandJogador1);
    printf("PIB: %.2f bilhões de reais\n", pibCartaRandJogador1);
    printf("Número de Pontos Turísticos: %d\n", pontosTuristicosCartaRandJogador1);
    printf("Densidade Populacional: %.2f  hab/km²\n", densidadeCartaRandJogador1);
    printf("PIB per Capita: %.2f reais\n", pibPerCapitaCartaRandJogador1);
    printf("Super Poder: : %.2f\n", superPoderCartaRandJogador1);
    printf("========================================\n\n");

    printf("Inventário Jogador 2:\n\n");

    // Exibição da Carta Fixa 2
    printf("============== CARTA Fixa ==============\n");
    printf("Estado: %s\n", nomeEstadoCartaFixaJogador2);
    printf("Código: %s\n", codigoCartaFixaJogador2);
    printf("Nome da Cidade: %s\n", cidadeCartaFixaJogador2);
    printf("População: %d habitantes\n", populacaoCartaFixaJogador2);
    printf("Área: %.2f km²\n", areaCartaFixaJogador2);
    printf("PIB: %.2f bilhões de reais\n", pibCartaFixaJogador2);
    printf("Número de Pontos Turísticos: %d\n", pontosTuristicosCartaFixaJogador2);
    printf("Densidade Populacional: %.2f  hab/km²\n", densidadeCartaFixaJogador2);
    printf("PIB per Capita: %.2f reais\n", pibPerCapitaCartaFixaJogador2);
    printf("Super Poder: : %.2f\n", superPoderCartaFixaJogador2);
    printf("========================================\n\n");
    // Exibição da Carta Aleatória 2
    printf("=========== CARTA  Aleatória ===========\n");
    printf("Estado: %s\n", nomeEstadoCartaRandJogador2);
    printf("Código: %s\n", codigoCartaRandJogador2);
    printf("Nome da Cidade: %s\n", cidadeCartaRandJogador2);
    printf("População: %d habitantes\n", populacaoCartaRandJogador2);
    printf("Área: %.2f km²\n", areaCartaRandJogador2);
    printf("PIB: %.2f bilhões de reais\n", pibCartaRandJogador2);
    printf("Número de Pontos Turísticos: %d\n", pontosTuristicosCartaRandJogador2);
    printf("Densidade Populacional: %.2f  hab/km²\n", densidadeCartaRandJogador2);
    printf("PIB per Capita: %.2f reais\n", pibPerCapitaCartaRandJogador2);
    printf("Super Poder: : %.2f\n", superPoderCartaRandJogador2);
    printf("========================================\n\n");

    // ============ CONTROLE DE RODADAS ============
    int cartaUsadaJogador1Rod1 = 0, cartaUsadaJogador2Rod1 = 0;
    int cartaUsadaJogador1Rod2 = 0, cartaUsadaJogador2Rod2 = 0;
    int cartaUsadaJogador1Rod3 = 0, cartaUsadaJogador2Rod3 = 0;

    int atributoUsadoRod1 = 0;
    int atributoUsadoRod2 = 0;
    int atributoUsadoRod3 = 0;

    int pontosJogador1 = 0;
    int pontosJogador2 = 0;

     #ifdef _WIN32
        system("pause");
    #else
        printf("Pressione ENTER para continuar...");
        getchar();
        getchar();
    #endif

    #ifdef _WIN32
        system("cls");
    #else
        system("clear");
    #endif

    // Boas-vindas
    printf("========================================\n");
    printf("         SUPER TRUNFO - CIDADES         \n");
    printf("========================================\n\n");
    printf("Bem-vindo ao jogo Super-Trunfo\n");
    printf("Cada jogador deve cadastrar uma nova carta antes do duelo.\n\n");

    printf("========================================\n");
    printf("    =======    JOGADOR  1    =======    \n");
    printf("========================================\n\n");
    printf("Cadastro Carta do Jogador 1:\n");
    printf("Escolha um Estado digitando uma letra conforme a lista:\n");
    printf("A - Acre\nB - Bahia\nC - Ceará\nD - Distrito Federal\n");
    printf("E - Espírito Santo\nF - Goiás\nG - Minas Gerais\nH - Santa Catarina\n\n");
    printf("Estado (A a H): ");
    scanf(" %c", &estadoCartaJogador1);
    printf("\nDefina um código para a carta (ex: %c01): ", estadoCartaJogador1);
    scanf(" %[^\n]", codigoCartaJogador1);
    printf("Digite o nome da cidade: ");
    scanf(" %[^\n]", cidadeCartaJogador1);
    printf("População: ");
    scanf("%d", &populacaoCartaJogador1);
    printf("Área (em km²): ");
    scanf("%f", &areaCartaJogador1);
    printf("PIB (em bilhões): ");
    scanf("%f", &pibCartaJogador1);
    printf("Pontos turísticos: ");
    scanf("%d", &pontosTuristicosCartaJogador1);

    // Calculos dinâmicos carta 1
    densidadeCartaJogador1 = (float)populacaoCartaJogador1 / areaCartaJogador1;
    pibPerCapitaCartaJogador1 = (pibCartaJogador1 * 1000000000) / populacaoCartaJogador1;
    float inversoDensidadeCartaJogador1 = 1.0 / densidadeCartaJogador1;
    superPoderCartaJogador1 = (float)populacaoCartaJogador1 + areaCartaJogador1 + (pibCartaJogador1 * 1000000000) + (float)pontosTuristicosCartaJogador1 + pibPerCapitaCartaJogador1 + inversoDensidadeCartaJogador1;

    printf("\n========================================\n");
    printf("    =======    JOGADOR  2    =======    \n");
    printf("========================================\n\n");
    printf("Cadastro Carta do Jogador 2:\n");
    printf("Escolha um Estado digitando uma letra conforme a lista:\n");
    printf("A - Acre\nB - Bahia\nC - Ceará\nD - Distrito Federal\n");
    printf("E - Espírito Santo\nF - Goiás\nG - Minas Gerais\nH - Santa Catarina\n\n");
    printf("Estado (A a H): ");
    scanf(" %c", &estadoCartaJogador2);
    printf("\nDefina um código para a carta (ex: %c02): ", estadoCartaJogador2);
    scanf(" %[^\n]", codigoCartaJogador2);
    printf("Digite o nome da cidade: ");
    scanf(" %[^\n]", cidadeCartaJogador2);
    printf("População: ");
    scanf("%d", &populacaoCartaJogador2);
    printf("Área (em km²): ");
    scanf("%f", &areaCartaJogador2);
    printf("PIB (em bilhões): ");
    scanf("%f", &pibCartaJogador2);
    printf("Pontos turísticos: ");
    scanf("%d", &pontosTuristicosCartaJogador2);
    // Calculos dinâmicos carta 1
    densidadeCartaJogador2 = (float)populacaoCartaJogador2 / areaCartaJogador2;
    pibPerCapitaCartaJogador2 = (pibCartaJogador2 * 1000000000) / populacaoCartaJogador2;
    float inversoDensidadeCartaJogador2 = 1.0 / densidadeCartaJogador2;
    superPoderCartaJogador2 = (float)populacaoCartaJogador2 + areaCartaJogador2 + (pibCartaJogador2 * 1000000000) + (float)pontosTuristicosCartaJogador2 + pibPerCapitaCartaJogador2 + inversoDensidadeCartaJogador2;
    printf("\n========================================\n");
    printf("Cartas cadastradas com sucesso!\n");
    printf("========================================\n\n");

    #ifdef _WIN32
        system("pause");
    #else
        printf("Pressione ENTER para continuar...");
        getchar();
        getchar();
    #endif

    #ifdef _WIN32
        system("cls");
    #else
        system("clear");
    #endif
    
    printf("========================================\n");
    printf("         SUPER TRUNFO - CIDADES         \n");
    printf("========================================\n\n");
    printf("Vamos começar a batalha!\n");
    // =============================================
    // >>>>>>>>>>>>>>> ROUND 1 <<<<<<<<<<<<<<<<<<<
    printf("\n================= ROUND 1 ==================\n");

    printf("Jogador 1, escolha sua carta:\n");
    printf("1 - %s\n", cidadeCartaJogador1);
    printf("2 - %s\n", cidadeCartaFixaJogador1);
    printf("3 - %s\n", cidadeCartaRandJogador1);
    scanf("%d", &cartaUsadaJogador1Rod1);

    printf("Jogador 2, escolha sua carta:\n");
    printf("1 - %s\n", cidadeCartaJogador2);
    printf("2 - %s\n", cidadeCartaFixaJogador2);
    printf("3 - %s\n", cidadeCartaRandJogador2);
    scanf("%d", &cartaUsadaJogador2Rod1);

    printf("Escolha o atributo para comparar:\n");
    printf("1 - População\n2 - Área\n3 - PIB\n4 - Pontos Turísticos\n5 - Densidade (menor vence)\n6 - PIB per Capita\n7 - Super Poder\n");
    scanf("%d", &atributoUsadoRod1);

    // =============================================
    // >>>>>>>>>>>>>>> ROUND 2 <<<<<<<<<<<<<<<<<<<
    printf("\n================= ROUND 2 ==================\n");

    printf("Jogador 1, escolha sua carta (não pode repetir a do Round 1):\n");
    (cartaUsadaJogador1Rod1 != 1) ? printf("1 - %s\n", cidadeCartaJogador1) : printf("");
    (cartaUsadaJogador1Rod1 != 2) ? printf("2 - %s\n", cidadeCartaFixaJogador1) : printf("");
    (cartaUsadaJogador1Rod1 != 3) ? printf("3 - %s\n", cidadeCartaRandJogador1) : printf("");
    scanf("%d", &cartaUsadaJogador1Rod2);
    if (cartaUsadaJogador1Rod2 == cartaUsadaJogador1Rod1)
    {
        printf("Erro! Carta já usada!\n");
        return 0;
    }

    printf("Jogador 2, escolha sua carta (não pode repetir a do Round 1):\n");
    (cartaUsadaJogador2Rod1 != 1) ? printf("1 - %s\n", cidadeCartaJogador2) : printf("");
    (cartaUsadaJogador2Rod1 != 2) ? printf("2 - %s\n", cidadeCartaFixaJogador2) : printf("");
    (cartaUsadaJogador2Rod1 != 3) ? printf("3 - %s\n", cidadeCartaRandJogador2) : printf("");
    scanf("%d", &cartaUsadaJogador2Rod2);
    if (cartaUsadaJogador2Rod2 == cartaUsadaJogador2Rod1)
    {
        printf("Erro! Carta já usada!\n");
        return 0;
    }

    printf("Escolha o atributo (não pode ser o mesmo do Round 1):\n");
    printf("%s", (atributoUsadoRod1 != 1) ? "1 - População\n" : "");
    printf("%s", (atributoUsadoRod1 != 2) ? "2 - Área\n" : "");
    printf("%s", (atributoUsadoRod1 != 3) ? "3 - PIB\n" : "");
    printf("%s", (atributoUsadoRod1 != 4) ? "4 - Pontos Turísticos\n" : "");
    printf("%s", (atributoUsadoRod1 != 5) ? "5 - Densidade (menor vence)\n" : "");
    printf("%s", (atributoUsadoRod1 != 6) ? "6 - PIB per Capita\n" : "");
    printf("%s", (atributoUsadoRod1 != 7) ? "7 - Super Poder\n" : "");
    scanf("%d", &atributoUsadoRod2);
    if (atributoUsadoRod2 == atributoUsadoRod1)
    {
        printf("Erro! Atributo já usado!\n");
        return 0;
    }

    // =============================================
    // >>>>>>>>>>>>>>> ROUND 3 <<<<<<<<<<<<<<<<<<<
    printf("\n================= ROUND 3 ==================\n");

    // Última carta que sobrou
    cartaUsadaJogador1Rod3 = 6 - (cartaUsadaJogador1Rod1 + cartaUsadaJogador1Rod2);
    cartaUsadaJogador2Rod3 = 6 - (cartaUsadaJogador2Rod1 + cartaUsadaJogador2Rod2);

    printf("Jogador 1 ficará com a carta: %d\n", cartaUsadaJogador1Rod3);
    printf("Jogador 2 ficará com a carta: %d\n", cartaUsadaJogador2Rod3);

    printf("Escolha o atributo (não pode ser dos rounds anteriores):\n");

    // Testa manualmente os 7 atributos
    if (atributoUsadoRod1 != 1 && atributoUsadoRod2 != 1)
    {
        printf("1 - População\n");
    }
    if (atributoUsadoRod1 != 2 && atributoUsadoRod2 != 2)
    {
        printf("2 - Área\n");
    }
    if (atributoUsadoRod1 != 3 && atributoUsadoRod2 != 3)
    {
        printf("3 - PIB\n");
    }
    if (atributoUsadoRod1 != 4 && atributoUsadoRod2 != 4)
    {
        printf("4 - Pontos Turísticos\n");
    }
    if (atributoUsadoRod1 != 5 && atributoUsadoRod2 != 5)
    {
        printf("5 - Densidade (menor vence)\n");
    }
    if (atributoUsadoRod1 != 6 && atributoUsadoRod2 != 6)
    {
        printf("6 - PIB per Capita\n");
    }
    if (atributoUsadoRod1 != 7 && atributoUsadoRod2 != 7)
    {
        printf("7 - Super Poder\n");
    }

    scanf("%d", &atributoUsadoRod3);

    if (atributoUsadoRod3 == atributoUsadoRod1 || atributoUsadoRod3 == atributoUsadoRod2)
    {
        printf("Erro! Atributo já usado!\n");
        return 0;
    }

    #ifdef _WIN32
        system("pause");
    #else
        printf("Pressione ENTER para continuar...");
        getchar();
        getchar();
    #endif

    #ifdef _WIN32
        system("cls");
    #else
        system("clear");
    #endif
    
    printf("========================================\n");
    printf("         SUPER TRUNFO - CIDADES         \n");
    printf("========================================\n\n");

    printf("============= DUELANDO ⚔️⚔️ =============\n");
    float valorJogador1Round, valorJogador2Round;

    // ======== ROUND 1 ========
    printf("\n>>>> Resultado ROUND 1 <<<<\n");

    switch (atributoUsadoRod1)
    {
    case 1: // População
        valorJogador1Round = (cartaUsadaJogador1Rod1 == 1)
                                 ? populacaoCartaJogador1
                             : (cartaUsadaJogador1Rod1 == 2)
                                 ? populacaoCartaFixaJogador1
                                 : populacaoCartaRandJogador1;

        valorJogador2Round = (cartaUsadaJogador2Rod1 == 1)
                                 ? populacaoCartaJogador2
                             : (cartaUsadaJogador2Rod1 == 2)
                                 ? populacaoCartaFixaJogador2
                                 : populacaoCartaRandJogador2;
        break;
    case 2: // Área
        valorJogador1Round = (cartaUsadaJogador1Rod1 == 1)
                                 ? areaCartaJogador1
                             : (cartaUsadaJogador1Rod1 == 2)
                                 ? areaCartaFixaJogador1
                                 : areaCartaRandJogador1;

        valorJogador2Round = (cartaUsadaJogador2Rod1 == 1)
                                 ? areaCartaJogador2
                             : (cartaUsadaJogador2Rod1 == 2)
                                 ? areaCartaFixaJogador2
                                 : areaCartaRandJogador2;
        break;
    case 3: // PIB
        valorJogador1Round = (cartaUsadaJogador1Rod1 == 1)
                                 ? pibCartaJogador1
                             : (cartaUsadaJogador1Rod1 == 2)
                                 ? pibCartaFixaJogador1
                                 : pibCartaRandJogador1;

        valorJogador2Round = (cartaUsadaJogador2Rod1 == 1)
                                 ? pibCartaJogador2
                             : (cartaUsadaJogador2Rod1 == 2)
                                 ? pibCartaFixaJogador2
                                 : pibCartaRandJogador2;
        break;
    case 4: // Pontos turísticos
        valorJogador1Round = (cartaUsadaJogador1Rod1 == 1)
                                 ? pontosTuristicosCartaJogador1
                             : (cartaUsadaJogador1Rod1 == 2)
                                 ? pontosTuristicosCartaFixaJogador1
                                 : pontosTuristicosCartaRandJogador1;
        valorJogador2Round = (cartaUsadaJogador2Rod1 == 1)
                                 ? pontosTuristicosCartaJogador2
                             : (cartaUsadaJogador2Rod1 == 2)
                                 ? pontosTuristicosCartaFixaJogador2
                                 : pontosTuristicosCartaRandJogador2;
        break;
    case 5: // Densidade (menor vence)
        valorJogador1Round = (cartaUsadaJogador1Rod1 == 1)
                                 ? densidadeCartaJogador1
                             : (cartaUsadaJogador1Rod1 == 2)
                                 ? densidadeCartaFixaJogador1
                                 : densidadeCartaRandJogador1;
        valorJogador2Round = (cartaUsadaJogador2Rod1 == 1)
                                 ? densidadeCartaJogador2
                             : (cartaUsadaJogador2Rod1 == 2)
                                 ? densidadeCartaFixaJogador2
                                 : densidadeCartaRandJogador2;
        break;
    case 6: // PIB per Capita
    valorJogador1Round = (cartaUsadaJogador1Rod1 == 1)
                            ? pibPerCapitaCartaJogador1
                        : (cartaUsadaJogador1Rod1 == 2)
                            ? pibPerCapitaCartaFixaJogador1
                            : pibPerCapitaCartaRandJogador1;
    valorJogador2Round = (cartaUsadaJogador2Rod1 == 1)
                            ? pibPerCapitaCartaJogador2
                        : (cartaUsadaJogador2Rod1 == 2)
                            ? pibPerCapitaCartaFixaJogador2
                            : pibPerCapitaCartaRandJogador2;
    break;

case 7: // Super Poder
    valorJogador1Round = (cartaUsadaJogador1Rod1 == 1)
                            ? superPoderCartaJogador1
                        : (cartaUsadaJogador1Rod1 == 2)
                            ? superPoderCartaFixaJogador1
                            : superPoderCartaRandJogador1;
    valorJogador2Round = (cartaUsadaJogador2Rod1 == 1)
                            ? superPoderCartaJogador2
                        : (cartaUsadaJogador2Rod1 == 2)
                            ? superPoderCartaFixaJogador2
                            : superPoderCartaRandJogador2;
    break;

    }

    if (atributoUsadoRod1 == 5)
    { // Densidade (menor vence)
        if (valorJogador1Round < valorJogador2Round)
        {
            printf("Jogador 1 venceu o Round 1!\n");
            pontosJogador1++;
        }
        else if (valorJogador2Round < valorJogador1Round)
        {
            printf("Jogador 2 venceu o Round 1!\n");
            pontosJogador2++;
        }
        else
        {
            printf("Empate no Round 1!\n");
        }
    }
    else
    { // Maior vence
        if (valorJogador1Round > valorJogador2Round)
        {
            printf("Jogador 1 venceu o Round 1!\n");
            pontosJogador1++;
        }
        else if (valorJogador2Round > valorJogador1Round)
        {
            printf("Jogador 2 venceu o Round 1!\n");
            pontosJogador2++;
        }
        else
        {
            printf("Empate no Round 1!\n");
        }
    }

    // Mostra as cartas escolhidas e os valores
    printf("Jogador 1 escolheu a carta: %s\n", 
        (cartaUsadaJogador1Rod1 == 1) ? cidadeCartaJogador1 :
        (cartaUsadaJogador1Rod1 == 2) ? cidadeCartaFixaJogador1 :
        cidadeCartaRandJogador1);

    printf("Jogador 2 escolheu a carta: %s\n", 
        (cartaUsadaJogador2Rod1 == 1) ? cidadeCartaJogador2 :
        (cartaUsadaJogador2Rod1 == 2) ? cidadeCartaFixaJogador2 :
        cidadeCartaRandJogador2);

    // Atributo escolhido
    printf("Atributo escolhido: ");
    switch (atributoUsadoRod1) {
        case 1: printf("População\n"); break;
        case 2: printf("Área\n"); break;
        case 3: printf("PIB\n"); break;
        case 4: printf("Pontos Turísticos\n"); break;
        case 5: printf("Densidade (menor vence)\n"); break;
        case 6: printf("PIB per Capita\n"); break;
        case 7: printf("Super Poder\n"); break;
        default: printf("Atributo inválido\n");
    }

    // Valores dos atributos
    printf("Valor Jogador 1: %.2f\n", valorJogador1Round);
    printf("Valor Jogador 2: %.2f\n", valorJogador2Round);

    // ======== ROUND 2 ========
    printf("\n>>>> Resultado ROUND 2 <<<<\n");

    switch (atributoUsadoRod2)
    {
    case 1:
        valorJogador1Round = (cartaUsadaJogador1Rod2 == 1)
                                 ? populacaoCartaJogador1
                             : (cartaUsadaJogador1Rod2 == 2)
                                 ? populacaoCartaFixaJogador1
                                 : populacaoCartaRandJogador1;
        valorJogador2Round = (cartaUsadaJogador2Rod2 == 1)
                                 ? populacaoCartaJogador2
                             : (cartaUsadaJogador2Rod2 == 2)
                                 ? populacaoCartaFixaJogador2
                                 : populacaoCartaRandJogador2;
        break;
    case 2:
        valorJogador1Round = (cartaUsadaJogador1Rod2 == 1)
                                 ? areaCartaJogador1
                             : (cartaUsadaJogador1Rod2 == 2)
                                 ? areaCartaFixaJogador1
                                 : areaCartaRandJogador1;
        valorJogador2Round = (cartaUsadaJogador2Rod2 == 1)
                                 ? areaCartaJogador2
                             : (cartaUsadaJogador2Rod2 == 2)
                                 ? areaCartaFixaJogador2
                                 : areaCartaRandJogador2;
        break;
    case 3:
        valorJogador1Round = (cartaUsadaJogador1Rod2 == 1)
                                 ? pibCartaJogador1
                             : (cartaUsadaJogador1Rod2 == 2)
                                 ? pibCartaFixaJogador1
                                 : pibCartaRandJogador1;
        valorJogador2Round = (cartaUsadaJogador2Rod2 == 1)
                                 ? pibCartaJogador2
                             : (cartaUsadaJogador2Rod2 == 2)
                                 ? pibCartaFixaJogador2
                                 : pibCartaRandJogador2;
        break;
    case 4:
        valorJogador1Round = (cartaUsadaJogador1Rod2 == 1)
                                 ? pontosTuristicosCartaJogador1
                             : (cartaUsadaJogador1Rod2 == 2)
                                 ? pontosTuristicosCartaFixaJogador1
                                 : pontosTuristicosCartaRandJogador1;
        valorJogador2Round = (cartaUsadaJogador2Rod2 == 1)
                                 ? pontosTuristicosCartaJogador2
                             : (cartaUsadaJogador2Rod2 == 2)
                                 ? pontosTuristicosCartaFixaJogador2
                                 : pontosTuristicosCartaRandJogador2;
        break;
    case 5:
        valorJogador1Round = (cartaUsadaJogador1Rod2 == 1)
                                 ? densidadeCartaJogador1
                             : (cartaUsadaJogador1Rod2 == 2)
                                 ? densidadeCartaFixaJogador1
                                 : densidadeCartaRandJogador1;
        valorJogador2Round = (cartaUsadaJogador2Rod2 == 1)
                                 ? densidadeCartaJogador2
                             : (cartaUsadaJogador2Rod2 == 2)
                                 ? densidadeCartaFixaJogador2
                                 : densidadeCartaRandJogador2;
        break;
    case 6: // PIB per Capita
    valorJogador1Round = (cartaUsadaJogador1Rod2 == 1)
                            ? pibPerCapitaCartaJogador1
                        : (cartaUsadaJogador1Rod2 == 2)
                            ? pibPerCapitaCartaFixaJogador1
                            : pibPerCapitaCartaRandJogador1;
    valorJogador2Round = (cartaUsadaJogador2Rod2 == 1)
                            ? pibPerCapitaCartaJogador2
                        : (cartaUsadaJogador2Rod2 == 2)
                            ? pibPerCapitaCartaFixaJogador2
                            : pibPerCapitaCartaRandJogador2;
    break;

case 7: // Super Poder
    valorJogador1Round = (cartaUsadaJogador1Rod2 == 1)
                            ? superPoderCartaJogador1
                        : (cartaUsadaJogador1Rod2 == 2)
                            ? superPoderCartaFixaJogador1
                            : superPoderCartaRandJogador1;
    valorJogador2Round = (cartaUsadaJogador2Rod2 == 1)
                            ? superPoderCartaJogador2
                        : (cartaUsadaJogador2Rod2 == 2)
                            ? superPoderCartaFixaJogador2
                            : superPoderCartaRandJogador2;
    break;

    }

    if (atributoUsadoRod2 == 5)
    {
        if (valorJogador1Round < valorJogador2Round)
        {
            printf("Jogador 1 venceu o Round 2!\n");
            pontosJogador1++;
        }
        else if (valorJogador2Round < valorJogador1Round)
        {
            printf("Jogador 2 venceu o Round 2!\n");
            pontosJogador2++;
        }
        else
        {
            printf("Empate no Round 2!\n");
        }
    }
    else
    {
        if (valorJogador1Round > valorJogador2Round)
        {
            printf("Jogador 1 venceu o Round 2!\n");
            pontosJogador1++;
        }
        else if (valorJogador2Round > valorJogador1Round)
        {
            printf("Jogador 2 venceu o Round 2!\n");
            pontosJogador2++;
        }
        else
        {
            printf("Empate no Round 2!\n");
        }
    }

    // Mostra as cartas escolhidas e os valores
    printf("Jogador 1 escolheu a carta: %s\n", 
        (cartaUsadaJogador1Rod2 == 1) ? cidadeCartaJogador1 :
        (cartaUsadaJogador1Rod2 == 2) ? cidadeCartaFixaJogador1 :
        cidadeCartaRandJogador1);

    printf("Jogador 2 escolheu a carta: %s\n", 
        (cartaUsadaJogador2Rod2 == 1) ? cidadeCartaJogador2 :
        (cartaUsadaJogador2Rod2 == 2) ? cidadeCartaFixaJogador2 :
        cidadeCartaRandJogador2);

    // Atributo escolhido
    printf("Atributo escolhido: ");
    switch (atributoUsadoRod2) {
        case 1: printf("População\n"); break;
        case 2: printf("Área\n"); break;
        case 3: printf("PIB\n"); break;
        case 4: printf("Pontos Turísticos\n"); break;
        case 5: printf("Densidade (menor vence)\n"); break;
        case 6: printf("PIB per Capita\n"); break;
        case 7: printf("Super Poder\n"); break;
        default: printf("Atributo inválido\n");
    }

    // Valores dos atributos
    printf("Valor Jogador 1: %.2f\n", valorJogador1Round);
    printf("Valor Jogador 2: %.2f\n", valorJogador2Round);


    // ======== ROUND 3 ========
    printf("\n>>>> Resultado ROUND 3 <<<<\n");

    switch (atributoUsadoRod3)
    {
    case 1:
        valorJogador1Round = (cartaUsadaJogador1Rod3 == 1)
                                 ? populacaoCartaJogador1
                             : (cartaUsadaJogador1Rod3 == 2)
                                 ? populacaoCartaFixaJogador1
                                 : populacaoCartaRandJogador1;

        valorJogador2Round = (cartaUsadaJogador2Rod3 == 1)
                                 ? populacaoCartaJogador2
                             : (cartaUsadaJogador2Rod3 == 2)
                                 ? populacaoCartaFixaJogador2
                                 : populacaoCartaRandJogador2;
        break;
    case 2:
        valorJogador1Round = (cartaUsadaJogador1Rod3 == 1)
                                 ? areaCartaJogador1
                             : (cartaUsadaJogador1Rod3 == 2)
                                 ? areaCartaFixaJogador1
                                 : areaCartaRandJogador1;
        valorJogador2Round = (cartaUsadaJogador2Rod3 == 1)
                                 ? areaCartaJogador2
                             : (cartaUsadaJogador2Rod3 == 2)
                                 ? areaCartaFixaJogador2
                                 : areaCartaRandJogador2;
        break;
    case 3:
        valorJogador1Round = (cartaUsadaJogador1Rod3 == 1)
                                 ? pibCartaJogador1
                             : (cartaUsadaJogador1Rod3 == 2)
                                 ? pibCartaFixaJogador1
                                 : pibCartaRandJogador1;
        valorJogador2Round = (cartaUsadaJogador2Rod3 == 1)
                                 ? pibCartaJogador2
                             : (cartaUsadaJogador2Rod3 == 2)
                                 ? pibCartaFixaJogador2
                                 : pibCartaRandJogador2;
        break;
    case 4:
        valorJogador1Round = (cartaUsadaJogador1Rod3 == 1)
                                 ? pontosTuristicosCartaJogador1
                             : (cartaUsadaJogador1Rod3 == 2)
                                 ? pontosTuristicosCartaFixaJogador1
                                 : pontosTuristicosCartaRandJogador1;
        valorJogador2Round = (cartaUsadaJogador2Rod3 == 1)
                                 ? pontosTuristicosCartaJogador2
                             : (cartaUsadaJogador2Rod3 == 2)
                                 ? pontosTuristicosCartaFixaJogador2
                                 : pontosTuristicosCartaRandJogador2;
        break;
    case 5:
        valorJogador1Round = (cartaUsadaJogador1Rod3 == 1)
                                 ? densidadeCartaJogador1
                             : (cartaUsadaJogador1Rod3 == 2)
                                 ? densidadeCartaFixaJogador1
                                 : densidadeCartaRandJogador1;
        valorJogador2Round = (cartaUsadaJogador2Rod3 == 1)
                                 ? densidadeCartaJogador2
                             : (cartaUsadaJogador2Rod3 == 2)
                                 ? densidadeCartaFixaJogador2
                                 : densidadeCartaRandJogador2;
        break;
    case 6: // PIB per Capita
    valorJogador1Round = (cartaUsadaJogador1Rod2 == 1)
                            ? pibPerCapitaCartaJogador1
                        : (cartaUsadaJogador1Rod2 == 2)
                            ? pibPerCapitaCartaFixaJogador1
                            : pibPerCapitaCartaRandJogador1;
    valorJogador2Round = (cartaUsadaJogador2Rod2 == 1)
                            ? pibPerCapitaCartaJogador2
                        : (cartaUsadaJogador2Rod2 == 2)
                            ? pibPerCapitaCartaFixaJogador2
                            : pibPerCapitaCartaRandJogador2;
    break;

case 7: // Super Poder
    valorJogador1Round = (cartaUsadaJogador1Rod2 == 1)
                            ? superPoderCartaJogador1
                        : (cartaUsadaJogador1Rod2 == 2)
                            ? superPoderCartaFixaJogador1
                            : superPoderCartaRandJogador1;
    valorJogador2Round = (cartaUsadaJogador2Rod2 == 1)
                            ? superPoderCartaJogador2
                        : (cartaUsadaJogador2Rod2 == 2)
                            ? superPoderCartaFixaJogador2
                            : superPoderCartaRandJogador2;
    break;

    }

    if (atributoUsadoRod3 == 5)
    {
        if (valorJogador1Round < valorJogador2Round)
        {
            printf("Jogador 1 venceu o Round 3!\n");
            pontosJogador1++;
        }
        else if (valorJogador2Round < valorJogador1Round)
        {
            printf("Jogador 2 venceu o Round 3!\n");
            pontosJogador2++;
        }
        else
        {
            printf("Empate no Round 3!\n");
        }
    }
    else
    {
        if (valorJogador1Round > valorJogador2Round)
        {
            printf("Jogador 1 venceu o Round 3!\n");
            pontosJogador1++;
        }
        else if (valorJogador2Round > valorJogador1Round)
        {
            printf("Jogador 2 venceu o Round 3!\n");
            pontosJogador2++;
        }
        else
        {
            printf("Empate no Round 3!\n");
        }
    }

    // Mostra as cartas escolhidas e os valores
    printf("Jogador 1 escolheu a carta: %s\n", 
        (cartaUsadaJogador1Rod3 == 1) ? cidadeCartaJogador1 :
        (cartaUsadaJogador1Rod3 == 2) ? cidadeCartaFixaJogador1 :
        cidadeCartaRandJogador1);

    printf("Jogador 2 escolheu a carta: %s\n", 
        (cartaUsadaJogador2Rod3 == 1) ? cidadeCartaJogador2 :
        (cartaUsadaJogador2Rod3 == 2) ? cidadeCartaFixaJogador2 :
        cidadeCartaRandJogador2);

    // Atributo escolhido
    printf("Atributo escolhido: ");
    switch (atributoUsadoRod3) {
        case 1: printf("População\n"); break;
        case 2: printf("Área\n"); break;
        case 3: printf("PIB\n"); break;
        case 4: printf("Pontos Turísticos\n"); break;
        case 5: printf("Densidade (menor vence)\n"); break;
        case 6: printf("PIB per Capita\n"); break;
        case 7: printf("Super Poder\n"); break;
        default: printf("Atributo inválido\n");
    }

    // Valores dos atributos
    printf("Valor Jogador 1: %.2f\n", valorJogador1Round);
    printf("Valor Jogador 2: %.2f\n", valorJogador2Round);

    // =========== RESULTADO FINAL ===========
    printf("\n========================================\n\n");
    printf("RESULTADO FINAL:\n");
    printf("Jogador 1 venceu %d rounds.\n", pontosJogador1);
    printf("Jogador 2 venceu %d rounds.\n", pontosJogador2);

    if (pontosJogador1 > pontosJogador2)
    {
        printf("🏆 Jogador 1 é o campeão!\n\n");
    }
    else if (pontosJogador2 > pontosJogador1)
    {
        printf("🏆 Jogador 2 é o campeão!\n\n");
    }
    else
    {
        printf("🤝 O jogo terminou empatado!\n\n");
    }
    printf("========================================");

    return 0;
}
