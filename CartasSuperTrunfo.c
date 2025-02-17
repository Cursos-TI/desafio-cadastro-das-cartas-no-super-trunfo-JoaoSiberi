#include <stdio.h>

int main() {

    char city[50];
    char codigo[10];
    int pop;
    int pontosT;
    float PIB;
    float area;
    float superpoder;

    char city2[50];
    char codigo2[10];
    int pop2;
    int pontosT2;
    float PIB2;
    float area2;
    float superpoder2;

    printf ("Informe o nome da cidade 1:\n");
    scanf ("%s", &city);

    printf ("Informe o código da cidade 1 assim como o seguinte modelo: A01\n");
    scanf ("%s", &codigo);

    printf ("Informe o número de habitantes da cidade 1:\n");
    scanf ("%d", &pop);

    printf ("Informe o número de pontos turísticos da cidade 1:\n");
    scanf ("%d", &pontosT);

    printf ("Informe o PIB da cidade 1:\n");
    scanf ("%f", &PIB);

    printf ("Informe a área da cidade 1:\n");
    scanf ("%f", &area);

    float densidadeP = (float) pop / area;
    float PIBC = (float) PIB / pop;
    superpoder = (float)pop + (float)pontosT + PIB + area + densidadeP + PIBC;

    printf ("Informe o nome da cidade 2:\n");
    scanf ("%s", &city2);

    printf ("Informe o código da cidade 2 assim como o seguinte modelo: A01\n");
    scanf ("%s", &codigo2);

    printf ("Informe o número de habitantes da cidade 2:\n");
    scanf ("%d", &pop2);

    printf ("Informe o número de pontos turísticos da cidade 2:\n");
    scanf ("%d", &pontosT2);

    printf ("Informe o PIB da cidade 2:\n");
    scanf ("%f", &PIB2);

    printf ("Informe a área da cidade 2:\n");
    scanf ("%f", &area2);

    float densidadeP2 = (float) pop2 / area2;
    float PIBC2 = (float) PIB2 / pop2;
    superpoder2 = (float)pop2 + (float)pontosT2 + PIB2 + area2 + densidadeP2 + PIBC2;
      
if (pop < pop2)
{
    printf("A cidade %s tem mais habitantes\n", city2);

}
else {
    printf ("A cidade %s tem mais habitantes\n", city);
}

if (pontosT < pontosT2)
{
    printf("A cidade %s tem mais pontos turísticos\n", city2);

}
else {
    printf ("A cidade %s tem mais pontos turísticos\n", city);
}

if (PIB < PIB2)
{
    printf("A cidade %s tem um PIB maior\n", city2);

}
else {
    printf ("A cidade %s tem um PIB maior\n", city);
}

if (PIBC < PIBC2)
{
    printf("A cidade %s tem um PIB per capita maior\n", city2);

}
else {
    printf ("A cidade %s tem um PIB per capita maior\n", city);
}

if (densidadeP > densidadeP2)
{
    printf("A cidade %s tem uma densidade populacional maior\n", city2);

}
else {
    printf ("A cidade %s tem uma densidade populacional maior\n", city);
}

if (area < area2)
{
    printf("A cidade %s tem uma área maior\n", city2);

}
else {
    printf ("A cidade %s tem uma área maior\n", city);
}

if (superpoder < superpoder2)
{
    printf("A cidade %s tem um superpoder maior\n", city2);

}
else {
    printf ("A cidade %s tem um super poder maior\n", city);
}


return 0;
}