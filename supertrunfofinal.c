#include <stdio.h>

int main(){

    char estado1, estado2; //Estado da carta
    char codigo1[50], codigo2[50]; //Codigo da carta
    char cidade1[50], cidade2[50]; // cidadade da carta
    int populacao1, populacao2; // população e ponto turistico
    float area1, area2, pib1, pib2; // area e pib da carta
    float densidade1, densidade2, capita1, capita2, poder1, poder2;
    int resultado, turistico1, turistico2;

    // CARTA NUMERO 1

    printf("♣♣♣ CARTA NUMERO 1 ♣♣♣\n");
    printf("Digite uma Letra que represente 1 estado de A a H: ");
    scanf(" %c", &estado1);

    printf("Digite o Código da carta: ");
    scanf("%s", codigo1);

    printf("Digite o nome da cidade: ");
    scanf("%s", cidade1);

    printf("Digite a população da cidade escolhida: ");
    scanf("%d", &populacao1);

    printf("Digite a área em KM²: ");
    scanf("%f", &area1);

    printf("Digite o PIB da cidade escolhida: ");
    scanf("%f", &pib1);

    printf("Número de pontos turisticos: ");
    scanf("%d", &turistico1);

    //Calculo da Carta1
    densidade1 = (float)populacao1 / area1;
    capita1 = pib1 / populacao1; 
    poder1 = populacao1 + area1 + pib1 + turistico1 + capita1 + densidade1;

    //CARTA NUMERO 2
    printf("♣♣♣ CARTA NUMERO 2 ♣♣♣\n");
    printf("Digite uma Letra que represente 1 estado de A a H: ");
    scanf(" %c", &estado2);

    printf("Digite o Código da carta: ");
    scanf("%s", codigo2);

    printf("Digite o nome da cidade: ");
    scanf("%s", cidade2);

    printf("Digite a população da cidade escolhida: ");
    scanf("%d", &populacao2);

    printf("Digite a área em KM²: ");
    scanf("%f", &area2);

    printf("Digite o PIB da cidade escolhida: ");
    scanf("%f", &pib2);

    printf("Número de pontos turisticos: ");
    scanf("%d", &turistico2);

    //Calculo da Carta2
    densidade2 = (float)populacao2 / area2;
    capita2 = pib2 / populacao2; 
    poder2 = populacao2 + area2 + pib2 + turistico2 + capita2 + densidade2;

    //Vai mostrar as informações Escolhidas da carta 1
    printf("Escolhas da Carta 1 \n\n");
    printf("Letra Escolhida: %c\n", estado1);
    printf("Código Escolhido: %s\n", codigo1);
    printf("Nome da cidade escolhida: %s\n", cidade1);
    printf("Tamanho da população: %d\n", populacao1);
    printf("Tamanho da aréa em KM²: %f\n", area1);
    printf("PIB: %f\n", pib1);
    printf("Número de Pontos Turisticos: %d\n", turistico1);

    printf("A Densidade é de: %f\n", densidade1);

    printf("Pib per Capita: %f\n", capita1);

    //Vai mostrar as informaçoes escolhidas da carta 2
    printf("Escolhas da Carta 2 \n\n");
    printf("Letra Escolhida: %c\n", estado2);
    printf("Código Escolhido: %s\n", codigo2);
    printf("Nome da cidade escolhida: %s\n", cidade2);
    printf("Tamanho da população: %d\n", populacao2);
    printf("Tamanho da aréa em KM²: %f\n", area2);
    printf("PIB: %f\n", pib2);
    printf("Número de Pontos Turisticos: %d\n", turistico2);

    printf("A Densidade é de: %f\n", densidade2);

    printf("Pib per Capita: %f\n", capita2);

    printf("A Carta 1 tem a população de: %d maior que a população de: %d da Carta numero 2? %d \n", populacao1, populacao2, populacao1 > populacao2);
    printf("A Carta 1 tem a Área de: %.2f maior que a Área de: %.2f da Carta numero 2? %d \n", area1, area2, area1 > area2);
    printf("A Carta 1 tem a pib de: %.2f maior que o pib de: %.2f da Carta numero 2? %d \n", pib1, pib2, pib1 > pib2);
    printf("A Carta 1 tem a quantidade de pontos turisticos de: %d maior que a quantidade de pontos turisticos: %d da Carta numero 2? %d \n", turistico1, turistico2, turistico1 > turistico2);
    printf("A Carta 1 tem o Pib por Capita de: %f que é maior que o Pib per capita de: %f da Carta numero 2? %d \n", capita1, capita2, capita1 > capita2);
    printf("A Carta 1 tem a densidade populacional: %f que é menor que a densidade populacional de: %f da Carta numero 2? %d \n", densidade1, densidade2, densidade1 < densidade2);
    printf("A Carta 1 tem o super poder de: %.2f ela vence da carta 2 com o poder de: %.2f? %d \n", poder1, poder2, poder1 > poder2);

    //Resultado final das cartas
    printf("♣♣♣ RESULTADO FINAL ♣♣♣\n");
    printf("Se a Carta 1 for vencedora o Resultado será 1 se a Carta 2 Vencer será 0 \n");
    printf("O Resultado final é: %d \n", poder1 > poder2);


    return 0;


}