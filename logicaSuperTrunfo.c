#include <stdio.h>

int main(){

    //Variaveis carta 1
    char estado1[4] = "SP"; 
    char codigo1[10] = "A01";
    char nome1[50] = "São Paulo";
    unsigned long int populacao1 = 12300000;
    float area1 = 1521.11;
    double pib1 = 6.5; 
    int pontos1 = 40;
    double densidade1;
    double pibPerCapita1;
    float superpoder1;

    //Variaveis carta 2
    char estado2[4] = "RJ";
    char codigo2[10] = "B01";
    char nome2[50] = "Rio de Janeiro";
    unsigned long int populacao2 = 6748000;
    float area2 = 1182.3;
    double pib2 = 2.7;
    int pontos2 = 50;
    double densidade2;
    double pibPerCapita2;
    float superpoder2;

    // Variaveis Funcionamento do jogo
    int escolha;
    int regra;
    int escolhacarta;
    int escolhaatributos;


    //Cálculo para a carta 1
    densidade1 = (double)populacao1 / area1;
    pibPerCapita1 = (pib1 * 1000000000.0) / (double)populacao1; 
    superpoder1 = (float)populacao1 + area1 + pib1 + pibPerCapita1 + pontos1 + (1 / densidade1);

    //Cálculo para a carta 2
    densidade2 = (double)populacao2 / area2;
    pibPerCapita2 = (pib2 * 1000000000.0) / (double)populacao2;
    superpoder2 = (float)populacao2 + area2 + pib2 + pibPerCapita2 + pontos2 + (1 / densidade2);

    printf("*** Super Trunfo - Cartas de Cidades ***\n");
    printf("Escolha uma opçao:\n");
    printf("1. Iniciar Jogo\n");
    printf("2. Ver Regras\n");
    printf("3. Sair\n");
    printf("Digite sua escolha: ");
    scanf("%d", &escolha);

    switch(escolha){
        case 1:
            printf("### INICIANDO JOGO ###\n");

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


    printf("\nEscolha uma carta para jogar:\n");
    printf("1. Carta 1 - São Paulo\n");
    printf("2. Carta 2 - Rio de Janeiro\n");
    printf("Digite sua escolha: ");
    scanf("%d", &escolhacarta);

     switch (escolhacarta) {
        case 1:
            printf("\nVocê escolheu a Carta 1 - São Paulo.\n");
            break;
        case 2:
            printf("\nVocê escolheu a Carta 2 - Rio de Janeiro.\n");
            break;
        default:
            printf("Opção inválida. Por favor, escolha uma carta válida.\n");
        break;
    }

    printf("\nEscolha um atributo para comparar:\n");
    printf("1. População\n");
    printf("2. Área\n");
    printf("3. PIB\n");
    printf("4. Pontos turísticos\n");
    printf("5. Densidade Demográfica\n");
    printf("6. PIB per Capita\n");
    printf("7. Superpoder\n");
    scanf("%d", &escolhaatributos);
    if (escolhaatributos < 1 || escolhaatributos > 7) {
        printf("Opção inválida. Por favor, escolha um atributo válido.\n");
        return 0;
    }

    printf("\n***Atributos escolhidos:***\n");
    if (escolhaatributos == 1) {
        printf("População\n");
        printf("População da Carta 1 (São Paulo): %lu\n", populacao1);
        printf("População da Carta 2 (Rio de Janeiro): %lu\n", populacao2);
    } else if (escolhaatributos == 2) {
        printf("Área\n");
        printf("Área da Carta 1 (São Paulo): %.2f km²\n", area1);
        printf("Área da Carta 2 (Rio de Janeiro): %.2f km²\n", area2);
    } else if (escolhaatributos == 3) {
        printf("PIB\n");
        printf("PIB da Carta 1 (São Paulo): R$%.2f bilhões de reais\n", pib1);
        printf("PIB da Carta 2 (Rio de Janeiro): R$%.2f bilhões de reais\n", pib2);
    } else if (escolhaatributos == 4) {
        printf("Pontos turísticos\n");
        printf("Pontos turísticos da Carta 1 (São Paulo): %d\n", pontos1);
        printf("Pontos turísticos da Carta 2 (Rio de Janeiro): %d\n", pontos2);
    } else if (escolhaatributos == 5) {
        printf("Densidade Demográfica\n");
        printf("Densidade Demográfica da Carta 1 (São Paulo): %.2f hab/km²\n", densidade1);
        printf("Densidade Demográfica da Carta 2 (Rio de Janeiro): %.2f hab/km²\n", densidade2);
    } else if (escolhaatributos == 6) {
        printf("PIB per Capita\n");
        printf("PIB per Capita da Carta 1 (São Paulo): R$%.2f\n", pibPerCapita1);
        printf("PIB per Capita da Carta 2 (Rio de Janeiro): R$%.2f\n", pibPerCapita2);
    } else if (escolhaatributos == 7) {
        printf("Superpoder\n");
        printf("Superpoder da Carta 1 (São Paulo): %.2f\n", superpoder1);
        printf("Superpoder da Carta 2 (Rio de Janeiro): %.2f\n", superpoder2);
    }



  //Comparação das cartas
    printf("\n***Comparando as cartas:***\n");

    switch (escolhaatributos) {
        case 1:
            if (populacao1 > populacao2) {
                printf("A carta 1 (São Paulo) venceu.\n");
            } else if (populacao1 < populacao2) {
                printf("A carta 2 (Rio de Janeiro) venceu.\n");
            } else {
                printf("Empate.\n");
            }
            break;
        case 2:
            if (area1 > area2) {
                printf("A carta 1 (São Paulo) venceu.\n");
            } else if (area1 < area2) {
                printf("A carta 2 (Rio de Janeiro) venceu.\n");
            } else {
                printf("Empate.\n");
            }
            break;
        case 3:
            if (pib1 > pib2) {
                printf("A carta 1 (São Paulo) venceu.\n");
            } else if (pib1 < pib2) {
                printf("A carta 2 (Rio de Janeiro) venceu.\n");
            } else {
                printf("Empate.\n");
            }
            break;
        case 4:
            if (pontos1 > pontos2) {
                printf("A carta 1 (São Paulo) venceu.\n");
            } else if (pontos1 < pontos2) {
                printf("A carta 2 (Rio de Janeiro) venceu.\n");
            } else {
                printf("Empate.\n");
            }
            break;
        case 5:
            if (densidade1 < densidade2) {
                printf("A carta 1 (São Paulo) venceu.\n");
            } else if (densidade1 > densidade2) {
                printf("A carta 2 (Rio de Janeiro) venceu.\n");
            } else {
                printf("Empate.\n");
            }
            break;
        case 6:
            if (pibPerCapita1 > pibPerCapita2) {
                printf("A carta 1 (São Paulo) venceu.\n");
            } else if (pibPerCapita1 < pibPerCapita2) {
                printf("A carta 2 (Rio de Janeiro) venceu.\n");
            } else {
                printf("Empate.\n");
            }
            break;
        case 7:
            if (superpoder1 > superpoder2) {
                printf("A carta 1 (São Paulo) venceu.\n");
            } else if (superpoder1 < superpoder2) {
                printf("A carta 2 (Rio de Janeiro) venceu.\n");
            } else {
                printf("Empate.\n");
            }
            break;
       
    }

   
    printf("\n***Fim do jogo***\n");
    printf("### Obrigado por jogar! ###\n");
            break;
        case 2:
            printf("### REGRAS DO JOGO ###\n");
            printf("Vence a carta com o maior valor no atributo escolhido, para a Densidade Demográfica, vence a carta com o menor valor.");
            break;
        case 3:
            printf("### SAINDO DO JOGO ###\n");
            printf("Obrigado por jogar!\n");
            break;
        default:
            printf("Opção inválida. Por favor, escolha uma opção válida.\n");
            return 0;
    }


 















































    return 0;
}