#include <stdio.h>

int main(){
    char codigo_carta, codigo_carta2 [4];
    char estado, estado2 [30];
    char nome_cidade, nome_cidade2 [30];
    int populacao, populacao2;
    float area_km², area_km²2;
    float pib, pib2;
    int numero_pontos_turisticos, numero_pontos_turisticos2;

    
    printf("Cadastre o código da primeira carta:");
    scanf("%s", codigo_carta);

    printf("Cadastre o estado carta:");
    scanf("%s", &estado);

    printf("Cadastre o nome da cidade:");
    scanf("%s", &nome_cidade);

    printf("Cadastre a população da cidade:");
    scanf("%d", &populacao);
    
    printf("Cadastre a area em km²:");
    scanf("%f", &area_km²);

    printf("Cadastre o PIB da carta:");
    scanf("%f", &pib);

    printf("Cadastre a quantidade de pontos turisticos:");
    scanf("%d", &numero_pontos_turisticos);


    printf("Cadastre o código da segunda carta:");
    scanf("%s", &codigo_carta2);
        
    printf("Cadastre o estado da segunda carta:");
    scanf("%s", &estado2);

    printf("Cadastre o nome da segunda cidade:");
    scanf("%s", &nome_cidade2);

    printf("Cadastre a população da segunda cidade:");
    scanf("%d", &populacao2);

    printf("Cadastre a area km², da segunda cidade:");
    scanf("%f", &area_km²2);

    printf("Cadastre o PIB da segunda carta:");
    scanf("%f", &pib2);

    printf("Cadastre a quantidade de pontos turisticos da segunda cidade:");
    scanf("%d", &numero_pontos_turisticos2);

    printf("Carta 1:");
    printf("Código:%s", codigo_carta);
    printf("Estado:%s\n", estado);
    printf("Nome da cidade:%s\n", nome_cidade);
    printf("População:%d\n", populacao);
    printf("Area km²%.2f\n",area_km²2 ,area_km²);
    printf("PIB:%.2f\n", pib);
    printf("Número pontos turisticos:%d\n", numero_pontos_turisticos);
    
    printf("Carta 2:");
    printf("Código:%s", codigo_carta2);
    printf("Estado:%s\n", estado2);
    printf("Nome da cidade:%s\n", nome_cidade2);
    printf("População:%d", populacao2);
    printf("Area km²:%.2f", area_km²2);
    printf("PIB:%.2f", pib2);
    printf("Número pontos turisticos:%d", numero_pontos_turisticos2);

    return 0;
}