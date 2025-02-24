#include <stdio.h>

int main() {

    char estado;
    char codigo [50];
    char cidade [50];
    unsigned long int pop;
    int pontos;
    float area;
    float PIB;
    
    char estado2;
    char codigo2 [50];
    char cidade2 [50];
    unsigned long int pop2;
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

    float densidadeI = (float)area/pop;
    float densidade = (float)pop/area;
    float PIBC = (float)PIB/pop;

    float densidadeI2 = (float)area2/pop2;
    float densidade2 = (float)pop2/area2;
    float PIBC2 = (float)PIB2/pop2;

    float superpoder = (float)pop + (float)pontos + PIB + PIBC + area + densidadeI;
    float superpoder2 = (float)pop2 + (float)pontos2 + PIB2 + PIBC2 + area2 + densidadeI2;

    printf("Carta 1:\n");
    printf("Estado: %c\n", estado);
    printf("Código: %s\n", codigo);
    printf("Nome da cidade: %s\n", cidade);
    printf("População: %d\n", pop);
    printf("Área: %f Km²\n", area);
    printf("PIB: %f\n", PIB);
    printf("Estado: %d\n", pontos);
    printf("Densidade Populacional: %f hab/Km²\n", densidade);
    printf("PIB per Capita: %f\n", PIBC);


    printf("\nCarta 2:\n");
    printf("Estado: %c\n", estado2);
    printf("Código: %s\n", codigo2);
    printf("Nome da cidade: %s\n", cidade2);
    printf("População: %d\n", pop2);
    printf("Área: %f Km²\n", area2);
    printf("PIB: %f\n", PIB2);
    printf("Estado: %d\n", pontos2);
    printf("Densidade Populacional: %f hab/Km²\n", densidade2);
    printf("PIB per Capita: %f\n", PIBC2);

if (pop > pop2)
{
    printf("\nPopulação: Carta 1 venceu (1)\n");
}
else 
{
    printf("\nPopulação: Carta 2 venceu (0)\n");
}
if (area > area2)
{
    printf("Área: Carta 1 venceu (1)\n");
}
else 
{
    printf("Área: Carta 2 venceu (0)\n");
}
if (PIB > PIB2)
{
    printf("PIB: Carta 1 venceu (1)\n");
}
else 
{
    printf("PIB: Carta 2 venceu (0)\n");
}
if (pontos > pontos2)
{
    printf("Pontos Turísticos: Carta 1 venceu (1)\n");
}
else 
{
    printf("Pontos Turísticos: Carta 2 venceu (0)\n");
}
if (densidade < densidade2)
{
    printf("Densidade Populacional: Carta 1 venceu (1)\n");
}
else 
{
    printf("Densidade Populacional: Carta 2 venceu (0)\n");
}
if (PIBC > PIBC2)
{
    printf("PIB per Capita: Carta 1 venceu (1)\n");
}
else 
{
    printf("PIB per Capita: Carta 2 venceu (0)\n");
}
if (superpoder > superpoder2)
{
    printf("Super Poder: Carta 1 venceu (1)\n");
}
else 
{
    printf("Super Poder: Carta 2 venceu (0)\n");
}
}