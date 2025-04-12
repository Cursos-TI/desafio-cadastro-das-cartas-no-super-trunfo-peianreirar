#include <stdio.h>

int main() {
    //Declaração de variáveis carta 1

    char estado, codigo[4], nome[50];
    int populacao, PontosTuristicos;
    float area, PIB;
    float densidade, pibPerCapta; //Declaração de novas variáveis - Nivel aventureiro

    //Declaração de variáveis carta 2

    char estado2, codigo2[4], nome2[50];
    int populacao2, Pontosturisticos2;
    float area2, PIB2;
    float densidade2, pibPerCapta2; //Declaração de novas variáveis - Nivel aventureiro 

    //Entrada de dados da carta 1 

    printf("Digite uma letra que represente o estado da carta 1 (de A a H): \n");
    scanf(" %c", &estado);

    printf("Digite o código da carta 1 (letra que represente o estado + um número de 1 a 4): \n");
    scanf("%s", codigo);

    printf("Digite o nome da cidade: \n");
    scanf("%s", nome);

    printf("Digite a população da cidade: \n");
    scanf("%d", &populacao);

    printf("Digite a quantidade de pontos turísticos da cidade: \n");
    scanf("%d", &PontosTuristicos);

    printf("Digite a área da cidade (em km²): \n");
    scanf("%f", &area);

    printf("Digite o PIB (Produto Interno Bruto) da cidade: \n");
    scanf("%f", &PIB);

    //Entrada de dados carta 2

    printf("Digite uma letra que represente o estado da carta 2 (de A a H): \n");
    scanf(" %c", &estado2);

    printf("Digite o código da carta 2 (letra que represente o estado + um número de 1 a 4): \n");
    scanf("%s", codigo2);

    printf("Digite o nome da cidade: \n");
    scanf("%s", nome2);

    printf("Digite a população da cidade: \n");
    scanf("%d", &populacao2);

    printf("Digite a quantidade de pontos turisticos da cidade: \n");
    scanf("%d", &Pontosturisticos2);

    printf("Digite a área da cidade (em km²): \n");
    scanf("%f", &area2);

    printf("Digite o PIB (Produto Interno Bruto) da cidade: \n");
    scanf("%f", &PIB2);

    //Cálculo da densidade populacional e PIB per capta da carta 1

    densidade = (float) populacao / area;
    pibPerCapta = (float) PIB / populacao;

    //Cálculo da densidade populalcional e PIB per capta da carta 2

    densidade2 = (float) populacao2 / area2;
    pibPerCapta2 = (float) PIB2 / populacao2;

    //Exibição de dados da carta 1 

    printf("\n---Dados da carta 1:\n");
    printf("Estado: %c \n", estado);
    printf("Código: %s \n", codigo);
    printf("Nome: %s \n", nome);
    printf("População: %d \n", populacao);
    printf("Pontos turísticos: %d \n", PontosTuristicos);
    printf("Área: %.2f km² \n", area);
    printf("PIB: %.2f bilhões de reais \n", PIB);
    printf("Densidade populacional: %.2f \n", densidade);
    printf("PIB per capta: %.2f \n", pibPerCapta);


    //Exibição de dados da carta 2

    printf("\n---Dados da carta 2:---\n");
    printf("Estado: %c \n", estado2);
    printf("Código: %s \n", codigo2);
    printf("Nome: %s \n", nome2);
    printf("População: %d \n", populacao2);
    printf("Pontos turísticos: %d \n", Pontosturisticos2);
    printf("Área: %.2f km²\n", area2);
    printf("PIB: %.2f bilhões de reais \n", PIB2);
    printf("Densidade populacional: %.2f \n", densidade2);
    printf("PIB per capta: %.2f \n", pibPerCapta2);



    return 0;
}
