#include <stdio.h>

//carta 1 desafio super trunfo
int main(){

    char estado1; //uma letra de 'A' a 'H'
    char codigocarta1[20];  //A letra do estado seguido de um número.
    char nomecidade1[50];  // Nome da cidade
    int populacao; // Número de habitantes
    float area;  // Área da cidade em km²
    float pib;  // Produto Interno Bruto
    int pontosturisticos; // Número de pontos turísticos

    // Leitura dos dados da primeira carta
    printf("Digite o Estado: \n");
    scanf(" %c", &estado1);

    printf("Digite o código da carta: \n");
    scanf("%s", codigocarta1);

    printf("Digite o nome da Cidade: \n");
    scanf("%s", nomecidade1);
    while (getchar() != '\n'); // Limpa o enter que sobrou no buffer

    printf("Digite a população: \n");
    scanf("%d", &populacao);

    printf("Digite a área em km²:  \n");
    scanf("%f", &area);
    while (getchar() != '\n'); // Limpa o enter que sobrou no buffer

    printf("Digite o PIB:  \n");
    scanf("%f", &pib);
    while (getchar() != '\n'); // Limpa o enter que sobrou no buffer

    printf("Digite o número de pontos turísticos: \n");
    scanf("%d", &pontosturisticos);

    // Exibição organizada das informações
    printf("\nCarta 1:\n");
    printf("Estado: %c\n", estado1);
    printf("Código: %s\n", codigocarta1);
    printf("Nome da Cidade: %s\n", nomecidade1);
    printf("População: %d\n", populacao);
    printf("Área: %.2f km²\n", area);
    printf("PIB: %.2f bilhões de reais\n", pib);
    printf("Número de Pontos Turísticos: %d\n", pontosturisticos);

    // Carta 2
    char estado2;
    char codigocarta2[20];
    char nomecidade2[50];
    int populacao2;
    float area2;
    float pib2;
    int pontosturisticos2;

    // Leitura dos dados da segunda carta
    printf("\n--- Segunda Carta ---\n");

    printf("Digite o Estado: \n");
    scanf(" %c", &estado2);

    printf("Digite o código da carta: \n");
    scanf("%s", codigocarta2);

    printf("Digite o nome da Cidade: \n");
    scanf("%s", nomecidade2);
    while (getchar() != '\n'); // Limpa o enter que sobrou no buffer

    printf("Digite a população: \n");
    scanf("%d", &populacao2);

    printf("Digite a área em km²:  \n");
    scanf("%f", &area2);
    while (getchar() != '\n'); // Limpa o enter que sobrou no buffer

    printf("Digite o PIB:  \n");
    scanf("%f", &pib2);
    while (getchar() != '\n'); // Limpa o enter que sobrou no buffer

    printf("Digite o número de pontos turísticos: \n");
    scanf("%d", &pontosturisticos2);

    // Exibição dos dados da segunda carta
    printf("\nCarta 2:\n");
    printf("Estado: %c\n", estado2);
    printf("Código: %s\n", codigocarta2);
    printf("Nome da Cidade: %s\n", nomecidade2);
    printf("População: %d\n", populacao2);
    printf("Área: %.2f km²\n", area2);
    printf("PIB: %.2f bilhões de reais\n", pib2);
    printf("Número de Pontos Turísticos: %d\n", pontosturisticos2);

    return 0;
}
