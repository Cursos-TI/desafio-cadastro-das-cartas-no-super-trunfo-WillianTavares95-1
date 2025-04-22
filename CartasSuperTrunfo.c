#include <stdio.h>


int main(){

    // Dados da primeria carta:

    char estado1[3];   
    char codigo1[5];
    char nome_cidade1[30];
    unsigned long int populacao1;
    float area1;
    float pib1;
    int pontos_turisticos1;      
    float densidade_populacional1;  
    float pib_per_capita1; 

    float resultado1;
    float superPoder1;

    // Dados da segunda carta;
    char estado2[3];
    char codigo2[5];
    char nome_cidade2[30];
    unsigned long int populacao2;
    float area2;
    float  pib2;
    int pontos_turisticos2;
    float densidade_populacional2;
    float pib_per_capita2;

    float  resultado2;
    float superPoder2;

    int comparacao_Populacao;
    int resultado_Populacao;

    float compracao_Area;
    float resultado_Area;

    float comparacao_pib;
    float resultado_pib;

    int comparacao_pontos_turisticos;
    int resultado_pontos_turisticos;

    float comparacao_densidade_populacional;
    float resultado_densidade_populacional;

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
    scanf("%lu", &populacao1);

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
    scanf("%lu", &populacao2);

    printf("Digite a área em km²:\n");
    scanf("%f", &area2);

    printf("Digite o PIB:\n");
    scanf("%f", &pib2);

    printf("Quantidade de pontos turisticos na cidade:\n");
    scanf("%i", &pontos_turisticos2);
    //Dados da primeria carta;
    densidade_populacional1 = populacao1 / area1;
    pib_per_capita1 = populacao1 / pib1;
    resultado1 = densidade_populacional1 + pib_per_capita1;
    superPoder1 = (float) populacao1 + area1 + pib1 + pontos_turisticos1 + pib_per_capita1 + densidade_populacional1;


    //Dados da segunda carta;
    densidade_populacional2 = populacao2 / area2;
    pib_per_capita2 = populacao2 / pib2; 
    resultado2 = densidade_populacional2 + pib_per_capita2;
    superPoder2 = (float) populacao2 + area2 + pib2 + pontos_turisticos2 + pib_per_capita2 + densidade_populacional2;

     //Comparação das cartas:
    comparacao_Populacao = populacao1 > populacao2;
    resultado_Populacao = comparacao_Populacao;

    comparacao_Populacao = area1 > area2;
    resultado_Area = compracao_Area;

    comparacao_pib = pib1 > pib2;
    resultado_pib = comparacao_pib;

    comparacao_pontos_turisticos = pontos_turisticos1 > pontos_turisticos2;
    resultado_pontos_turisticos = comparacao_pontos_turisticos;

   // comparacao_densidade_populacional = densidade_populacional1 < densidade_populacional2;
   // resultado_densidade_populacional = comparacao_densidade_populacional;

    printf("*** Resultado das cartas ***\n");

    printf("***Carta 1:\n***");

    printf("Estado: %s\n", estado1);
    printf("Código: %s\n", codigo1);
    printf("Nome da cidade: %s\n", nome_cidade1);
    printf("População: %lu\n", populacao1);
    printf("Área: %.2f km²\n", area1);
    printf("PIB: %.2f Bilhões de reais\n", pib1);
    printf("Número de pontos turísticos: %i\n", pontos_turisticos1);
    printf("Densidade Populacional: %.2f hab/Km²\n", densidade_populacional1);
    printf("PIB per Capita: %f Reais\n", pib_per_capita1);
    printf("Calculo densidade populacional + PIB per capita: %.2f\n", resultado1);
    printf("Calculo de todos os resultados: %.15f\n", superPoder1);
    

    printf("***Carta 2:\n***");

    printf("Estado: %s\n", estado2);
    printf("Código: %s\n", codigo2);
    printf("Nome da cidade: %s\n", nome_cidade2);
    printf("População: %lu\n", populacao2);
    printf("Área: %.2f Km²\n", area2);
    printf("PIB: %.2f Bilhões de reais\n", pib2);
    printf("Número de pontos turísticos: %i\n", pontos_turisticos2);
    printf("Densidade Populacional: %.2f hab/Km²\n", densidade_populacional2);
    printf("PIB per Capita: %f Reais\n", pib_per_capita2);
    printf("Calculo densidade populacional + PIB per capita: %.2f\n", resultado2);
    printf("Calculo de todos os resultados: %.2f\n", superPoder2);
    
    printf("***Comparação das cartas:\n***");

    printf("Resultado da comparação: %i\n venceu", resultado_Populacao);
    printf("Área %.2f\n venceu", resultado_Area);
    printf("PIB %.2f\n venceu", resultado_pib);
    printf("Pontos turísticos %i\n", resultado_pontos_turisticos);
    printf("Densidade populacional %.2f\n", resultado_densidade_populacional);



    return 0;




}