#include <stdio.h>

// Desafio Super Trunfo - Países
// Tema 2 - Calculando Densidade Populacional e PIB per Capita

int main() {

//Declaração de variaveis

    char estado1 = 'A';
    char codigo1[5] = "01";
    char cidade1[50] = "Paris";
    int habitantes1 = 12325000;
    float area1 = 1521.11;
    float pib1 = 699280000000;
    int turisiticos1 = 50;
    float pibpercapta1 = 1;
    float densidadepopulacional1 = 1;

//segunda declaração de variaveis

    char estado2 = 'A';
    char codigo2[5] = "01";
    char cidade2[50] = "Paris";
    int habitantes2 = 12325000;
    float area2 = 1521.11;
    float pib2 = 699280000000;
    int turisiticos2 = 50;
    float pibpercapta2 = 1;
    float densidadepopulacional2 = 1;

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

//criar a funçao de media da carta 1

    densidadepopulacional1 = habitantes1 / area1 ;
    pibpercapta1 = pib1 / habitantes1 ;

//criar a funçao de media da carta 2

    densidadepopulacional2 = habitantes2 / area2 ;
    pibpercapta2 = pib2 / habitantes2 ;

//cogigo referente a saida de informação da carta 1
   
    printf("\ncarta1 \n");
    printf("Estado: %c \n", estado1);
    printf("Codigo: %c%s \n", estado1, codigo1); // nessa linha eu uni os dois como identificador unico pois assim obrigatoriamente o codigo tera de começar com a letra que representa o estado
    printf("Nome da cidade: %s \n", cidade1);
    printf("População: %d \n", habitantes1);
    printf("Área: %.2fkm² \n", area1);
    printf("PIB: %.2f \n", pib1);
    printf("Número de Pontos Turísticos: %d \n", turisiticos1);
    printf("Densidade Populacional: %.2f \n", densidadepopulacional1);
    printf("PIB per Capita: %.2f \n", pibpercapta1);

//codigo referente a saida de informação da carta 2

    printf("\ncarta2 \n");
    printf("Estado: %c \n", estado2);
    printf("Codigo: %c%s \n", estado2, codigo2);
    printf("Nome da cidade: %s \n", cidade2);
    printf("População: %d \n", habitantes2);
    printf("Área: %.2fkm² \n", area2);
    printf("PIB: %.2f \n", pib2);
    printf("Número de Pontos Turísticos: %d \n", turisiticos2);
    printf("Densidade Populacional: %.2f \n", densidadepopulacional2);
    printf("PIB per Capita: %.2f \n", pibpercapta2);

    return 0;
}