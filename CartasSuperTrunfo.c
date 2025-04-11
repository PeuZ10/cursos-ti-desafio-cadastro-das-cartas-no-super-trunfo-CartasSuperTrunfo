#include <stdio.h>

int main() {

    
    char nome1 [50], nome2 [50];  // Nome do estado
    char codcarta1 [30], codcarta2 [30];  // Código da carta
    char nomecidade1 [30], nomecidade2[30]; // Nome da cidade
    int população1, população2; // População
    float área1, área2; // Área de km2
    float PIB1, PIB2; // valor do PIB
    int pontosturisticos1, pontosturisticos2; // Pontos turísticos

    printf("Desafio Super Trunfo\n");

    printf("PRIMEIRA CARTA\n"); // Incio da primeira carta

    printf("Digite o nome do estado:\n");
    scanf("%s", nome1);

    printf("Digite o código da carta:\n");
    scanf("%s", codcarta1);
    
    printf("Digite o nome da cidade:\n");
    scanf("%s", nomecidade1);

    printf("Digite a população:\n");
    scanf("%d", &população1);

    printf("Digite a área em km2:\n");
    scanf("%f", &área1);

    printf("Digite o PIB:\n");
    scanf("%f", &PIB1);

    printf("Digite o Número de pontos turísticos:\n");
    scanf("%d", &pontosturisticos1);
    
    printf("SEGUNDA CARTA\n"); // Incio da segunda carta

    printf("Digite o nome do estado:\n");
    scanf("%s", nome2);

    printf("Digite o código da carta:\n");
    scanf("%s", codcarta2);
    
    printf("Digite o nome da cidade:\n");
    scanf("%s", nomecidade2);

    printf("Digite a população:\n");
    scanf("%d", &população2);

    printf("Digite a área em km2:\n");
    scanf("%f", &área2);

    printf("Digite o PIB:\n");
    scanf("%f", &PIB2);

    printf("Digite o Número de pontos turísticos:\n");
    scanf("%d", &pontosturisticos2);

    

    printf("Dados da carta 01\n");

    printf("Nome do estado: %s\n", nome1);
    printf("Código da carta: %s\n", codcarta1);
    printf("Nome da cidade: %s\n", nomecidade1);
    printf("População: %d\n", população1);
    printf("Área em km2: %f\n", área1); 
    printf("PIB: %f\n", PIB1);
    printf("Pontos turísticos: %d\n", pontosturisticos1);

    printf("Dados da segunda carta\n");

    printf("Nome do estado: %s\n", nome2);
    printf("Código da carta: %s\n", codcarta2);
    printf("Nome da cidade: %s\n", nomecidade2);
    printf("População: %d\n", população2);
    printf("Área em km2: %f\n", área2); 
    printf("PIB: %f\n", PIB2);
    printf("Pontos turísticos: %d\n", pontosturisticos2); 


    return 0;









}