#include <stdio.h>

int main() {

    char estado;
    char código [50];
    char cidade [50];
    int pop;
    int pontos;
    float área;
    float PIB;
    
    char estado2;
    char código2 [50];
    char cidade2 [50];
    int pop2;
    int pontos2;
    float área2;
    float PIB2;


    printf("Digite uma letra de A até H para representar o estado:\n");
    scanf ("%c", &estado);

    printf("Digite o código da carta conforme o modelo A01 usando a letra escolhida anteriormente para o estado:\n");
    scanf ("%s", &código);

    printf("Digite o nome da cidade:\n");
    scanf ("%s", &cidade);

    printf("Digite o número de habitantes da cidade:\n");
    scanf ("%d", &pop);

    printf("Digite a área da cidade:\n");
    scanf ("%f", &área);

    printf ("Digite o valor do PIB da cidade:\n");
    scanf ("%f", &PIB);

    printf("Digite o número de pontos turísticos da cidade:\n");
    scanf ("%d", &pontos);

    printf("Digite uma letra de A até H para representar o estado 2:\n");
    scanf ("%c", &estado2);

    printf("Digite o código da carta conforme o modelo A01 usando a letra escolhida anteriormente para o estado 2:\n");
    scanf ("%s", &código2);

    printf("Digite o nome da cidade 2:\n");
    scanf ("%s", &cidade2);

    printf("Digite o número de habitantes da cidade:\n");
    scanf ("%d", &pop2);

    printf("Digite a área da cidade 2:\n");
    scanf ("%f", &área2);

    printf ("Digite o valor do PIB da cidade 2:\n");
    scanf ("%f", &PIB2);

    printf("Digite o número de pontos turísticos da cidade 2:\n");
    scanf ("%d", &pontos2);

    printf("Carta 1:\n");
    printf("Estado:%c\n", estado);
    printf("Código:%s\n", código);
    printf("Nome da cidade:%s\n", cidade);
    printf("População:%d\n", pop);
    printf("Área:%f\n", área);
    printf("PIB:%f\n", PIB);
    printf("Estado:%d\n", pontos);

    printf("Carta 2:\n");
    printf("Estado:%c\n", estado2);
    printf("Código:%s\n", código2);
    printf("Nome da cidade:%s\n", cidade2);
    printf("População:%d\n", pop2);
    printf("Área:%f\n", área2);
    printf("PIB:%f\n", PIB2);
    printf("Estado:%d\n", pontos2);


}