#include <stdio.h>

int main(){
    char estado; //Estado da carta
    char codigo[50]; //Codigo da carta
    char cidade[50]; // cidadade da carta
    int populacao, turistico; // população e ponto turistico
    float area, pib; // area e pib da carta
    float densidade, capita;


    printf("Digite uma Letra que represente 1 estado de A a H: ");
    scanf("%c", &estado);

    printf("Digite o Código da carta: ");
    scanf("%s", &codigo);

    printf("Digite o nome da cidade: ");
    scanf("%s", &cidade);

    printf("Digite a população da cidade escolhida: ");
    scanf("%d", &populacao);

    printf("Digite a área em KM²: ");
    scanf("%f", &area);

    printf("Digite o PIB da cidade escolhida: ");
    scanf("%f", &pib);

    printf("Número de pontos turisticos: ");
    scanf("%d", &turistico);

    printf("Letra Escolhida: %c\n", estado);
    printf("Código Escolhido: %s\n", codigo);
    printf("Nome da cidade escolhida: %s\n", cidade);
    printf("Tamanho da população: %d\n", populacao);
    printf("Tamanho da aréa em KM²: %f\n", area);
    printf("PIB: %f\n", pib);
    printf("Número de Pontos Turisticos: %d\n", turistico);

    densidade = populacao / area;
    printf("A Densidade é de: %f\n", densidade);

    capita = pib / populacao; 
    printf("Pib per Capita: %f\n", capita);




    return 0;













}
