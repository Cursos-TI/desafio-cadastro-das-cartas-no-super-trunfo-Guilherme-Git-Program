#include <stdio.h>

// Desafio Super Trunfo - Países
// Tema 1 - Cadastro das Cartas

int main() {
//Declaração de variaveis
    char estado1 = 'A';
    char codigo1[3] = "01";
    char cidade1[50] = "Paris";
    int habitantes1 = 12325000;
    float area1 = 1521.11;
    float pib1 = 699280000000;
    int turisiticos1 = 50;
//comecei uma nova declaração pois não consegui resolver o problema do cadastro com uma só
    char estado2 = 'A';
    char codigo2[3] = "01";
    char cidade2[50] = "Paris";
    int habitantes2 = 12325000;
    float area2 = 1521.11;
    float pib2 = 699280000000;
    int turisiticos2 = 50;
    
//codigo referente a entrada de informações da carta 1

    printf("Cadastro da Carta 1: \n");

    printf("Para representar o Estado digite uma letra de 'A' a 'H': \n");
    scanf("%c", &estado1);

    printf("Para definir o codigo da carta digite um numero de '01' a '04': \n");
    scanf("%s", &codigo1);

    printf("Digite o nome da cidade: \n");
    scanf("%s", &cidade1);

    printf("Digite o numero de habitantes: \n");
    scanf("%d", &habitantes1);

    printf("Digite a área em km²: \n");
    scanf("%f", &area1);

    printf("Digite o PIB: \n");
    scanf("%f", &pib1);

    printf("Digite o numero de pontos turisticos: \n");
    scanf("%d", &turisiticos1);

//codigo referente a entrada de informações da carta 2

    printf("Cadastro da Carta 2: \n");

    printf("Para representar o Estado digite uma letra de 'A' a 'H': \n");
    scanf("%c", &estado2);

    printf("Para definir o codigo da carta digite um numero de '01' a '04': \n");
    scanf("%s", &codigo2);

    printf("Digite o nome da cidade: \n");
    scanf("%s", &cidade2);

    printf("Digite o numero de habitantes: \n");
    scanf("%d", &habitantes2);

    printf("Digite a área em km²: \n");
    scanf("%f", &area2);

    printf("Digite o PIB: \n");
    scanf("%f", &pib2);

    printf("Digite o numero de pontos turisticos: \n");
    scanf("%d", &turisiticos2);

//cogigo referente a saida de informação da carta 1
   
    printf("\ncarta1 \n");
    printf("Estado: %c \n", estado1);
    printf("Codigo: %c%s \n", estado1, codigo1);
    printf("Nome da cidade: %s \n", cidade1);
    printf("População: %d \n", habitantes1);
    printf("Área: %fkm² \n", area1);
    printf("Estado: %f \n", pib1);
    printf("Estado: %d \n", turisiticos1);

//codigo referente a saida de informação da carta 2

    printf("\ncarta2 \n");
    printf("Estado: %c \n", estado2);
    printf("Codigo: %c%s \n", estado2, codigo2);
    printf("Nome da cidade: %s \n", cidade2);
    printf("População: %d \n", habitantes2);
    printf("Área: %fkm² \n", area2);
    printf("Estado: %f \n", pib2);
    printf("Estado: %d \n", turisiticos2);

//fiz dessa maneira sabendo que poderia ter varias maneiras de resolver mas preferi começar fazendo o cadastro inteiro de duas cartas para depois-
//exibilas em vez de, fazer e exibir uma por vez.

    return 0;
}