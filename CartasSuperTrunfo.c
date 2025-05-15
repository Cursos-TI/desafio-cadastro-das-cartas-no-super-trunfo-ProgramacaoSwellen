#include <stdio.h>

// Desafio Super Trunfo - Países
// Tema 1 - Cadastro das Cartas
// Este código inicial serve como base para o desenvolvimento do sistema de cadastro de cartas de cidades.
// Siga os comentários para implementar cada parte do desafio.
//Teste larissa

int main() {
    // Sugestão: Defina variáveis separadas para cada atributo da cidade.
    // Exemplos de atributos: código da cidade, nome, população, área, PIB, número de pontos turísticos.

    int codigo;
    char nome [100];
    int populacao;
    float area;
    float pib;
    int pontos_turisticos;

    
    // Cadastro das Cartas:    
    // Sugestão: Utilize a função scanf para capturar as entradas do usuário para cada atributo.
    // Solicite ao usuário que insira as informações de cada cidade, como o código, nome, população, área, etc.
    
    printf("Digite o código da cidade: ");
    scanf("%d", &codigo);

    print("Digite o nome da cidade: ");
    scanf("%s" , nome);

    print("Digite a população:  ");
    scanf("%d", &populacao);

    print("Digite a área: ");
    scanf("%f", &area);

    print("Digite o PIB: ");
    scanf("%f", &pib);

    print("Digite o número de pontos turísticos: ");
    scanf("%d", &pontos_turisticos);


    // Exibição dos Dados das Cartas:

    printf("\n --- Dados da Cidade --- \n");
    printf("Código: %d\n", codigo);
    printf("Nome: %s\n", nome);
    printf("População: %d\n", populacao);
    printf("Área: %.2f km²\n", area);
    printf("PIB: %.2f bilhões\n", pib);
    printf("Pontos Turísticos: %d\n", pontos_turisticos);

    // Sugestão: Utilize a função printf para exibir as informações das cartas cadastradas de forma clara e organizada.
    // Exiba os valores inseridos para cada atributo da cidade, um por linha.

    return 0;
}
