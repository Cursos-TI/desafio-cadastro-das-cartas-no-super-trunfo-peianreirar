#include <stdio.h>

// Desafio Super Trunfo - Países
// Tema 1 - Cadastro das Cartas
// Este código inicial serve como base para o desenvolvimento do sistema de cadastro de cartas de cidades.
// Siga os comentários para implementar cada parte do desafio.
//Teste larissa

int main() {
    //Declaração de variáveis carta 1

    char estado, codigo[4], nome[50];
    int populacao, PontosTuristicos;
    float area, PIB;

    //Declaração de variáveis carta 2

    char estado2, codigo2[4], nome2[50];
    int populacao2, Pontosturisticos2;
    float area2, PIB2;

    //Entrada de dados da carta 1 

    printf("Digite uma letra que represente o estado da carta 1 (de A a H)");
    scanf(" %c", &estado);

    printf("Digite o código da carta 1 (letra que represente o estado + um número de 1 a 4)");
    scanf("%s", codigo);

    printf("Digite o nome da cidade");
    scanf("%s", nome);

    printf("Digite a população da cidade");
    scanf("%d", &populacao);

    printf("Digite a quantidades de pontos turísticos da cidade");
    scanf("%d", &PontosTuristicos);

    printf("Digite a área da cidade (em km²)");
    scanf("%f", &area);

    printf("Digite o PIB (Produto Interno Bruto) da cidade");
    scanf("%f", &PIB);

    //Entrada de dados carta 2

    printf("Digite uma letra que represente o estado da carta 2 (de A a H)");
    scanf(" %c", &estado2);

    printf("Digite o código da carta 2 (letra que represente o estado + um número de 1 a 4)");
    scanf("%s", codigo2);

    printf("Digite o nome da cidade")
    scanf("%s", nome2);

    printf("Digite a população da cidade");
    scanf("%d", &populacao2);

    printf("Digite a quantidade de pontos turisticos da cidade");
    scanf("%d", Pontosturisticos2);

    printf("Digite a área da cidade (em km²)");
    scanf("%f", &area2);

    printf("Digite o PIB (Produto Interno Bruto) da cidade");
    scanf("%f", &PIB2);

    




    return 0;
}
