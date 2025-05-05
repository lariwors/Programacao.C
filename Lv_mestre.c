#include <stdio.h> 
//Iniciando o nível aventureiro para a criação do jogo: Super Trunfo - Países.

int main (){
    printf("Super Trunfo! - Desafio Aventureiro.\n");

// Serão inseridas apenas duas cartas do jogo por enquanto, com as variáveis abaixo:
    char estado1, estado2; 
    char codigo1[4], codigo2[4]; //código da carta.
    char cidade1[30], cidade2[30]; //nome da cidade.
    unsigned long int populacao1, populacao2; // Atualizado com o unsigned long int para suportar maiores valores.
    float area1, area2; //área em Km².
    float PIB1, PIB2;
    int pontos_turisticos1, pontos_turisticos2;
    
//variáveis calculadas na conversão explícita.
    float densidade_pop1, densidade_pop2; 
    float PIB_per_capita1, PIB_per_capita2; 

//SUPER PODER: soma de todas as propriedades
    float SuperPoder1, SuperPoder2;

//RESULTADO das cartas.


//Entrada da carta 1:
    printf("\nDigite os dados da primeira carta:\n");

    printf("Estado (inicial do estado): ");
        scanf(" %c", &estado1);
    printf("Código da carta: ");
        scanf("%s", &codigo1);
    printf("Nome da cidade: ");
        scanf("%s", &cidade1);
    printf("População: ");
        scanf("%lu", &populacao1);
    printf("Área (em Km²): ");
        scanf("%f", &area1);
    printf("PIB (em bilhões de reais): ");
        scanf("%f", &PIB1);
    printf("Pontos turísticos: ");
        scanf("%d", &pontos_turisticos1);

//Entrada da carta 2.
    printf("\nDigite os dados da segunda carta:\n");

    printf("Estado (inicial do estado): ");
        scanf(" %c", &estado2);
    printf("Código da carta: ");
        scanf("%s", &codigo2);
    printf("Nome da cidade: ");
        scanf("%s", &cidade2);
    printf("População: ");
        scanf("%lu", &populacao2);
    printf("Área (em Km²): ");
        scanf("%f", &area2);
    printf("PIB (em bilhões de reais): ");
        scanf("%f", &PIB2);
    printf("Pontos turísticos: ");
        scanf("%d", &pontos_turisticos2);

// Cálculo utilizando a conversão explícita na carta1 (float)
   densidade_pop1 = (float) populacao1 / area1; 
   PIB_per_capita1 = (float) PIB1 * 1000000000 / (float) populacao1;

// Cálculo do Super Poder na carta 1.
    SuperPoder1 = populacao1 + area1 + PIB1 + pontos_turisticos1 + PIB_per_capita1 + (1.0 / densidade_pop1);

//Saída da carta 1:
    printf("\n---- Carta 1 ----\n");
    printf("Estado: %c\n", estado1);
    printf("Código da carta: %s\n", codigo1);
    printf("Nome da cidade: %s\n", cidade1);
    printf("População: %lu\n", populacao1);
    printf("Área: %.2f Km²\n", area1);
    printf("Densidade populacional: %.2f hab/km²\n", densidade_pop1 );
    printf("PIB: %.2f bilhões de reais\n", PIB1);             
    printf("PIB per capita: %.2f reais\n", PIB_per_capita1);
    printf("Pontos turísticos: %d\n\n", pontos_turisticos1);
    printf("Super Poder: %.2f\n", SuperPoder1); // Inserido o Super Poder da carta 1.

// Cálculo utilizando a conversão explícita na carta2 (float)
    densidade_pop2 = (float) populacao2 / area2;
    PIB_per_capita2 = (float) PIB2 * 1000000000 / (float) populacao2;

// Cálculo do Super Poder na carta 2.
    SuperPoder2 = populacao2 + area2 + PIB2 + pontos_turisticos2 + PIB_per_capita2 + (1.0 / densidade_pop2);

//Saída da carta 2.
    printf("---- Carta 2 ----\n");
    printf("Estado: %c\n", estado2);
    printf("Código da carta: %s\n", codigo2);
    printf("Nome da cidade: %s\n", cidade2);
    printf("População: %lu\n", populacao2);
    printf("Área: %.2f Km²\n", area2);
    printf("Densidade populacional: %.2f hab/km²\n", densidade_pop2);
    printf("PIB: %.2f bilhões de reais\n", PIB2);    
    printf("O PIB per capita: %.2f reais\n", PIB_per_capita2);
    printf("Pontos turísticos: %d\n\n", pontos_turisticos2);
    printf("Super Poder: %.2f\n", SuperPoder2); // Inserido o Super Poder da carta 2.

//Comparação dos atributos.
    printf("\n***Comparação das Cartas:***\n");

    printf("População: A carta %d venceu!!\n", 2 - (populacao1 > populacao2));
    printf("Área: A carta %d venceu!!\n", 2 - (area1 > area2));
    printf("PIB: A carta %d venceu!!\n", 2 - (PIB1 > PIB2));
    printf("Pontos Turísticos: A carta %d venceu!!\n", 2 - (pontos_turisticos1 > pontos_turisticos2));
    printf("Densidade Populacional: A carta %d venceu!!\n", 2 - (densidade_pop1 < densidade_pop2));
    printf("PIB Per Capita: A carta %d venceu!!\n", 2 - (PIB_per_capita1 > PIB_per_capita2));
    printf("Super Poder: A carta %d venceu!!\n", 2 - (SuperPoder1 > SuperPoder2)); 

return 0;
//Programa finalizado, com duas cartas rodando normalmente.
    }