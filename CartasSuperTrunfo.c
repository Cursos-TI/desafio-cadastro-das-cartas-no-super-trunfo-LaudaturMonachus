#include <stdio.h>

// Desafio Super Trunfo - Países
// Tema 1 - Cadastro das Cartas
// Este código inicial serve como base para o desenvolvimento do sistema de cadastro de cartas de cidades.
// Siga os comentários para implementar cada parte do desafio.

// Sugestão: Defina variáveis separadas para cada atributo da cidade.
// Exemplos de atributos: código da cidade, nome, população, área, PIB, número de pontos turísticos.
    
// Cadastro das Cartas:
// Sugestão: Utilize a função scanf para capturar as entradas do usuário para cada atributo.
// Solicite ao usuário que insira as informações de cada cidade, como o código, nome, população, área, etc.
    
// Exibição dos Dados das Cartas:
// Sugestão: Utilize a função printf para exibir as informações das cartas cadastradas de forma clara e organizada.
// Exiba os valores inseridos para cada atributo da cidade, um por linha.

int main() {
    
    char cidade[50];
    int codigo, populacao;
    float area;

    
    //introdução ao jogo
    printf("Bem vindo ao Super Trunfo\n");

    //Cadastro do nome da carta
    printf("Nome da carta ou cidade de sua escolha:\n");
    scanf("%s", &cidade);

    //Cadastro do codigo
    printf("Código da cidade ou carta escolhida:\n");
    scanf(" %d", &codigo);

    //Cadastro população
    printf("Informe a população:\n");
    scanf("%d", &populacao);

    //Cadastro área
    printf("Informe a área da carta ou cidade:\n");
    scanf("%f", &area);

    //Print na tela dos dados fornecidos pelo usuário
    printf("Aqui está os dados da carta que você cadastrou!\n");
    printf("Nome da carta: %s", cidade);
    printf("\nCódigo da carta: %d", codigo);
    printf("\nPopulação: %d", populacao);
    printf("\nÁrea: %f", area);

    return 0;
}
