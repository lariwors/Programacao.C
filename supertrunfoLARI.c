#include <stdio.h> //Iniciando o nível novato para a criação do jogo: Super Trunfo - Países, utilizando apenas printf e scanf.

int main (){
    printf("Super Trunfo! - Desafio Novato.\n");

// Serão inseridas apenas duas cartas do jogo por enquanto, com as variáveis abaixo:
    char estado1, estado2;
    char codigo1[4], codigo2[4];
    char cidade1[30], cidade2[30];
    int populacao1, populacao2;
    float area1, area2;
    float PIB1, PIB2;
    int PontosTuristicos1, PontosTuristicos2;

//Entrada da carta 1:
    printf("\nDigite os dados da primeira carta:\n");
    printf("Estado: ");
        scanf("%s", &estado1);
    printf("Código da carta: ");
        scanf("%s", &codigo1);
    printf("Nome da cidade: ");
        scanf("%s", &cidade1);
    printf("População: ");
        scanf("%d", &populacao1);
    printf("Área: ");
        scanf("%f", &area1);
    printf("PIB: ");
        scanf("%f", &PIB1);
    printf("Pontos turísticos: ");
        scanf("%d", &PontosTuristicos1);

//Entrada da carta 2.
    printf("\nDigite os dados da segunda carta:\n");
    printf("Estado: ");
        scanf("%s", &estado2);
    printf("Código da carta: ");
        scanf("%s", &codigo2);
    printf("Nome da cidade: ");
        scanf("%s", &cidade2);
    printf("População: ");
        scanf("%d", &populacao2);
    printf("Área: ");
        scanf("%f", &area2);
    printf("PIB: ");
        scanf("%f", &PIB2);
    printf("Pontos turísticos: ");
        scanf("%d", &PontosTuristicos2);

//Saída da carta 1:
    printf("\n\nCódigo da carta: %s\n", codigo1);
    printf("Nome da cidade: %s\n", cidade1);
    printf("População: %d\n", populacao1);
    printf("Área: %.1f Km²\n", area1);
    printf("PIB: %.1f milhões de reais\n", PIB1);
    printf("Pontos turísticos: %d\n\n", PontosTuristicos1);

//Saída da carta 2.
    printf("Código da carta: %s\n", codigo2);
    printf("Nome da cidade: %s\n", cidade2);
    printf("População: %d\n", populacao2);
    printf("Área: %.1f Km²\n", area2);
    printf("PIB: %.1f milhões de reais\n", PIB2);
    printf("Pontos turísticos: %d\n\n", PontosTuristicos2);

return 0;
//Programa finalizado, com duas cartas rodando normalmente.
    }