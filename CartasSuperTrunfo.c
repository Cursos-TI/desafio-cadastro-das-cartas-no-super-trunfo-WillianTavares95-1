#include <stdio.h>

int main(){

    char codigo_carta [3];
    char estado [2];
    char nome_cidade [40];
    int populacao;
    float area_km²;
    float pib;
    int numero_pontos_turisticos;

    printf("Cadastre o código da carta. Exemplo:A01,B01,C01:");
    scanf("%s", &codigo_carta);

    printf("Cadastre o estado carta, usando somente a sigla:");
    scanf("%s", estado);

    printf("Cadastre o nome da cidade:");
    scanf("%s", nome_cidade);

    prinf("Cadastre a população da cidade:");
    scanf("%d", populacao);

    printf("Cadastre a area em km²:");
    scanf("%f", area_km²);



    printf("Código:%s\n", codigo_carta);
    printf("Estado:%s\n", estado);
    printf("Nome cidade:%s\n", nome_cidade);
    printf("População:%d\n", populacao);
    printf("Area km²:%f\n", area_km²);
}