#include <stdio.h>

// variáveis carta 1

char estado1[2], cidade1[41];
char codigo_carta1[3];
int populacao1, pontos_turisticos1;
float area1, pib1;

// variáveis carta 2

char estado2[2], cidade2[41];
char codigo_carta2[3];
int populacao2, pontos_turisticos2;
float area2, pib2;

int main(void)
{
    // perguntas carta 1

    printf("Digite uma letra, entre A e H, para representar o estado: ");
    scanf("%1s", &estado1);

    printf("Digite o Codigo da Carta, entre 01 e 04: ");
    scanf("%2s", &codigo_carta1);

    printf("Digite o nome da cidade: ");
    scanf("%40s", &cidade1);

    printf("Digite o número de habitantes da cidade: ");
    scanf("%d", &populacao1);

    printf("Digite a area da cidade: ");
    scanf("%f", &area1);

    printf("Digite o PIB da cidade: ");
    scanf("%f", &pib1);

    printf("Digite o numero de pontos turisticos que esta cidade contem: ");
    scanf("%d", &pontos_turisticos1);

    // perguntas carta 2

    printf("Digite uma letra, entre A e H, para representar o estado da segunda carta: ");
    scanf("%1s", &estado2);

    printf("Digite o Codigo da Carta, entre 01 e 04, da segunda carta: ");
    scanf("%2s", &codigo_carta2);

    printf("Digite o nome da cidade da segunda carta: ");
    scanf("%40s", &cidade2);

    printf("Digite o numero de habitantes da cidade da segunda carta: ");
    scanf("%d", &populacao2);

    printf("Digite a area da cidade da segunda carta: ");
    scanf("%f", &area2);

    printf("Digite o PIB da cidade da segunda carta: ");
    scanf("%f", &pib2);

    printf("Digite o numero de pontos turisticos que esta cidade contem da segunda carta: ");
    scanf("%d", &pontos_turisticos2);

    // PRINTAR CARTAS
    
    printf("\n--- Carta 1: ---\n");
    printf("Estado: %c\n", estado1[0]);
    printf("Codigo: %c%s \n", estado1[0], codigo_carta1);
    printf("Nome da cidade: %s \n", cidade1);
    printf("Populacao: %d \n", populacao1);
    printf("Area: %.2f \n", area1);
    printf("PIB: %.2f \n", pib1);
    printf("Numero de pontos turisticos: %d \n \n", pontos_turisticos1);

    printf("\n--- Carta 2: ---\n");
    printf("Estado: %c\n", estado2[0]);
    printf("Codigo: %c%s \n", estado2[0], codigo_carta2);
    printf("Nome da cidade: %s \n", cidade2);
    printf("Populacao: %d \n", populacao2);
    printf("Area: %.2f \n", area2);
    printf("PIB: %.2f \n", pib2);
    printf("Numero de pontos turisticos: %d \n", pontos_turisticos2);

    return 0;
};