#include <stdio.h>

int main() {

    char estado;
    char codigo [50];
    char cidade [50];
    int pop;
    int pontos;
    float area;
    float PIB;
    
    char estado2;
    char codigo2 [50];
    char cidade2 [50];
    int pop2;
    int pontos2;
    float area2;
    float PIB2;


    printf("Digite uma letra de A até H para representar o estado:\n");
    scanf ("%c", &estado);

    printf("Digite o código da carta conforme o modelo A01 usando a letra escolhida anteriormente para o estado:\n");
    scanf ("%s", &codigo);

    printf("Digite o nome da cidade:\n");
    scanf ("%s", &cidade);

    printf("Digite o número de habitantes da cidade:\n");
    scanf ("%d", &pop);

    printf("Digite a área da cidade:\n");
    scanf ("%f", &area);

    printf ("Digite o valor do PIB da cidade:\n");
    scanf ("%f", &PIB);

    printf("Digite o número de pontos turísticos da cidade:\n");
    scanf ("%d", &pontos);

    printf("Digite uma letra de A até H para representar o estado 2:\n");
    scanf (" %c", &estado2);

    printf("Digite o código da carta conforme o modelo A01 usando a letra escolhida anteriormente para o estado:\n");
    scanf ("%s", &codigo2);

    printf("Digite o nome da cidade:\n");
    scanf ("%s", &cidade2);

    printf("Digite o número de habitantes da cidade:\n");
    scanf ("%d", &pop2);

    printf("Digite a área da cidade:\n");
    scanf ("%f", &area2);

    printf ("Digite o valor do PIB da cidade:\n");
    scanf ("%f", &PIB2);

    printf("Digite o número de pontos turísticos da cidade:\n");
    scanf ("%d", &pontos2);

    printf("Carta 1:\n");
    printf("Estado: %c\n", estado);
    printf("Código: %s\n", codigo);
    printf("Nome da cidade: %s\n", cidade);
    printf("População: %d\n", pop);
    printf("Área: %f\n", area);
    printf("PIB: %f\n", PIB);
    printf("Estado: %d\n", pontos);

    printf("\nCarta 2:\n");
    printf("Estado: %c\n", estado2);
    printf("Código: %s\n", codigo2);
    printf("Nome da cidade: %s\n", cidade2);
    printf("População: %d\n", pop2);
    printf("Área: %f\n", area2);
    printf("PIB: %f\n", PIB2);
    printf("Estado: %d\n", pontos2);


}