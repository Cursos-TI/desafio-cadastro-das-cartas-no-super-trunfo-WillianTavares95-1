#include <stdio.h>


int main(){

   
    char estado1 [3];
    char estado2 [3];

    char codigo1 [5];
    char codigo2 [5];

    char nome_cidade1 [20];
    char nome_cidade2 [20];

    int populacao1, populacao2;
    float area1, area2;
    float pib1, pib2;
    int pontos_turisticos1, pontos_turisticos2;
       
   float densidade_populacional1;
   float densidade_populacional2;
   float pib_per_capita1;
   float pib_per_capita2;

    //informações da primeira carta:
    printf("*** Informações das cartas ***\n");

    printf("Carta 1: \n");
  
    printf("Digite o Estado:\n");
    scanf("%s", &estado1);
    
    printf("Digite o código da carta:\n");
    scanf("%s", &codigo1);

    printf("Digite o nome da cidade:\n");
    scanf("%s", &nome_cidade1);

    printf("Digite a população da cidade:\n");
    scanf("%i", &populacao1);

    printf("Digite a área em km²:\n");
    scanf("%f", &area1);

    printf("Digite o PIB:\n");
    scanf("%f", &pib1);

    printf("Quantidade de pontos turisticos na cidade:\n");
    scanf("%i", &pontos_turisticos1);
   
    // informações da segunda carta:

    printf("Carta 2: \n");

    printf("Digite o estado:\n");
    scanf("%s", &estado2);

    printf("Digite o código da carta:\n");
    scanf("%s", &codigo2);

    printf("Digite o nome da cidade:\n");
    scanf("%s", &nome_cidade2);

    printf("Digite a população da cidade:\n");
    scanf("%i", &populacao2);

    printf("Digite a área em km²:\n");
    scanf("%f", &area2);

    printf("Digite o PIB:\n");
    scanf("%f", &pib2);

    printf("Quantidade de pontos turisticos na cidade:\n");
    scanf("%i", &pontos_turisticos2);

    densidade_populacional1 = populacao1 / area1;
    densidade_populacional2 = populacao2 / area2;
    pib_per_capita1 = populacao1 / pib1;
    pib_per_capita2 = populacao2 / pib2; 

    printf("*** Resultado das cartas ***\n");

    printf("Carta 1:\n");

    printf("Estado: %s\n", estado1);
    printf("Código: %s\n", codigo1);
    printf("Nome da cidade: %s\n", nome_cidade1);
    printf("População: %i\n", populacao1);
    printf("Área: %.2f km²\n", area1);
    printf("PIB: %.2f Bilhões de reais\n", pib1);
    printf("Número de pontos turísticos: %i\n", pontos_turisticos1);
    printf("Densidade Populacional: %.2f hab/Km²\n", densidade_populacional1);
    printf("PIB per Capita: %f Reais\n", pib_per_capita1);

    printf("Carta 2:\n");

    printf("Estado: %s\n", estado2);
    printf("Código: %s\n", codigo2);
    printf("Nome da cidade: %s\n", nome_cidade2);
    printf("População: %i\n", populacao2);
    printf("Área: %.2f Km²\n", area2);
    printf("PIB: %.2f Bilhões de reais\n", pib2);
    printf("Número de pontos turísticos: %i\n", pontos_turisticos2);
    printf("Densidade Populacional: %.2f hab/Km²\n", densidade_populacional2);
    printf("PIB per Capita: %f Reais\n", pib_per_capita2);

    return 0;




}