#include <stdio.h>

int main(){

    //Variaveis carta 1
    char estado1[4] = "SP"; 
    char codigo1[10] = "A01";
    char nome1[50] = "São Paulo";
    unsigned long int populacao1 = 12325000;
    float area1 = 1521.11;
    double pib1 = 699.28; 
    int pontos1 = 40;
    double densidade1;
    double pibPerCapita1;
    float superpoder1;

    //Variaveis carta 2
    char estado2[4] = "RJ";
    char codigo2[10] = "B01";
    char nome2[50] = "Rio de Janeiro";
    unsigned long int populacao2 = 6748000;
    float area2 = 1200.25;
    double pib2 = 300.50;
    int pontos2 = 50;
    double densidade2;
    double pibPerCapita2;
    float superpoder2;



    //Cálculo para a carta 1
    densidade1 = (double)populacao1 / area1;
    pibPerCapita1 = (pib1 * 1000000000.0) / (double)populacao1; 
    superpoder1 = (float)populacao1 + area1 + pib1 + pibPerCapita1 + pontos1 + (1 / densidade1);

    //Cálculo para a carta 2
    densidade2 = (double)populacao2 / area2;
    pibPerCapita2 = (pib2 * 1000000000.0) / (double)populacao2;
    superpoder2 = (float)populacao2 + area2 + pib2 + pibPerCapita2 + pontos2 + (1 / densidade2);


//Exibição carta 1

    printf("\n***Exibindo as cartas:***\n");
    
    printf("\n ***Carta 1*** \n");

    printf("\nCarta 1:\n");

    printf("Código: %s\n", codigo1);

    printf("Nome da Cidade: %s\n", nome1);

    printf("População: %lu\n", populacao1);

    printf("Área: %.2f km²\n", area1);

    printf("PIB: R$%.2f bilhões de reais\n", pib1);

    printf("Número de Pontos turísticos: %d\n", pontos1);

    printf("Densidade Demográfica: %.2f hab/km²\n", densidade1);

    printf("PIB per Capita: R$%.2f\n", pibPerCapita1);

    printf("Superpoder: %.2f\n", superpoder1);

//Exibição carta 2

    printf("\n ***Carta 2*** \n");

    printf("\nCarta 2:\n");

    printf("Código: %s\n", codigo2);

    printf("Nome da Cidade: %s\n", nome2);

    printf("População: %lu\n", populacao2);

    printf("Área: %.2f km²\n", area2);

    printf("PIB: R$%.2f bilhões de reais \n", pib2);

    printf("Número de Pontos turísticos: %d\n", pontos2);

    printf("Densidade Demográfica: %.2f hab/km²\n", densidade2);

    printf("PIB per Capita: R$%.2f\n", pibPerCapita2);

    printf("Superpoder: %.2f\n", superpoder2);

    //Comparação das cartas
    printf("\n***Comparando as cartas:***\n");

   if (populacao1 > populacao2) {
        printf("A carta 1 venceu.\n");
    } else if (populacao1 < populacao2) {
        printf("A carta 2 venceu.\n");
    } else {
        printf("empate.\n");
    }
    printf("\n***Fim do jogo***\n");

 















































    return 0;
}
