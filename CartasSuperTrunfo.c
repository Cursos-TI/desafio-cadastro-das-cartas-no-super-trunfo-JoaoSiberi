#include <stdio.h>

int main() {

    char city[50];
    char codigo[10];
    int pop;
    int pontosT;
    float PIB;
    float area;

    printf ("Informe o nome da cidade:\n");
    scanf ("%s", &city);

    printf ("Informe o código da cidade assim como o seguinte modelo: A01\n");
    scanf ("%s", &codigo);

    printf ("Informe o número de habitantes da cidade:\n");
    scanf ("%d", &pop);

    printf ("Informe o número de pontos turísticos da cidade:\n");
    scanf ("%d", &pontosT);

    printf ("Informe o PIB da cidade:\n");
    scanf ("%f", &PIB);

    printf ("Informe a área da cidade:\n");
    scanf ("%f", &area);

    float densidadeP = (float) pop / area;
    float PIBC = (float) PIB / pop;

    printf("Nome da cidade: %s\n", city);
    printf("Código da Carta: %s\n", codigo);
    printf("Número de habitantes: %d\n", pop);
    printf("Número de pontos turísticos: %d\n", pontosT);
    printf("PIB da cidade: %.2f\n", PIB);
    printf("PIB per Capita da cidade: %.2f\n", PIBC);
    printf("Densidade Populacional: %.2f\n", densidadeP);
    printf("Área da cidade: %.2f\n", area);

return 0;
}