#include <stdio.h>

int main()
{
    //base das informacoes
    char Estado1, Estado2, Codigo_da_Carta1[4], Codigo_da_Carta2[4], Cidade1[20], Cidade2[20];
    int Populacao1, Populacao2, Pontos_Turisticos1, Pontos_Turisticos2;
    float Area1, Area2, PIB1, PIB2, Dens_pop1, Dens_pop2, PIBPC1, PIBPC2, SuperPoder1, SuperPoder2;

    printf("Início ao jogo Super Trunfo!\n\n");

    printf("Selecinos as informações da Carta 1:\n");

    //Seleção do Estado1
    printf("Defina seu Estado (A à H): ");
    scanf(" %c", &Estado1);

    //Seleção da carta1
    printf("Defina o Código de sua carta (seguindo o estado e número de 01 à 04): ");
    scanf("%3s", Codigo_da_Carta1);

    //Seleção da Cidade1
    printf("Defina o nome de sua cidade: ");
    scanf("%19s", Cidade1);

    //Seleção da população1
    printf("Qual o tamanho da População: ");
    scanf("%d", &Populacao1);

    //Seleção da Área1
    printf("Qual o Tamanho da Área em Km²: ");
    scanf("%f", &Area1);

    //Seleção do PIB1
    printf("Informe o PIB em reais: ");
    scanf("%f", &PIB1);

    //Seleção dos pontos turísticos1
    printf("Qual a quantidade de pontos turísticos: ");
    scanf("%d", &Pontos_Turisticos1);

    //Seleção da Carta 1 Finalizada
    printf("Seleção da Carta 1 Finalizada!\n\n");

    printf("Selecione as informações da Carta 2:\n");

    //Seleção do Estado2
    printf("Defina seu Estado (A à H): ");       
    scanf(" %c", &Estado2);

    //Seleção da carta2
    printf("Defina o Código de sua carta (seguindo o estado e número de 01 à 04): ");
    scanf("%3s", Codigo_da_Carta2);

    //Seleção da Cidade2
    printf("Defina o nome de sua cidade: ");
    scanf("%19s", Cidade2);

    //Seleção da população2
    printf("Qual o tamanho da População: ");
    scanf("%d", &Populacao2);

    //Seleção da Área2
    printf("Qual o Tamanho da Área em Km²: ");
    scanf("%f", &Area2);

    //Seleção do PIB2
    printf("Informe o PIB em reais: ");
    scanf("%f", &PIB2);

    //Seleção dos pontos turísticos2
    printf("Qual a quantidade de pontos turísticos: ");
    scanf("%d", &Pontos_Turisticos2);
    
    //Seleções carta1 e carta2 finalizadas
    printf("Seleção da Carta 2 Finalizada!\n\n");

    //Resultado das seleções
    printf("Resultados do cadastramento de cartas!\n\n");

    //Resultados carta 1
    printf("Foram selecionadas as seguintes informações sobre a CARTA 1:\n");

    //Estado1
    printf("Estado: %c\n", Estado1);
    
    //Codigo da Carta
    printf("Código da Carta: %s\n", Codigo_da_Carta1);
    
    //Cidade
    printf("Cidade: %s\n", Cidade1);

    //População
    printf("População: %d\n", Populacao1);

    //Area
    printf("Área em Km²: %.2f Km²\n", Area1);

    //PIB
    printf("PIB: R$ %.2f\n", PIB1);

    //Pontos turísticos
    printf("Pontos turísticos: %d\n", Pontos_Turisticos1);

    //Densidade populacional
    Dens_pop1 = (Populacao1 + Area1) / 2;
    printf("Densidade populacional: %.2f\n/", Dens_pop1);

    //PIB Per Carpita
    PIBPC1 = (PIB1 + Populacao1) / 2;
    printf("PIB per Capita: %.2f\n\n/", PIBPC1);

    //Resultados Carta2
    printf("Foram selecionadas as seguintes informações sobre a CARTA 2:\n");

    //Estado
    printf("Estado: %c\n", Estado2);
    
    //Codigo da Carta
    printf("Código da Carta: %s\n", Codigo_da_Carta2);
    
    //Cidade
    printf("Cidade: %s\n", Cidade2);

    //População
    printf("População: %d\n", Populacao2);

    //Area
    printf("Área em Km²: %.2f Km²\n", Area2);

    //PIB
    printf("PIB: R$ %.2f\n", PIB2);

    //Pontos turísticos
    printf("Pontos turísticos: %d\n", Pontos_Turisticos2);

    //Densidade populacional
    Dens_pop2= (Populacao2 + Area2) / 2;
    printf("Densidade populacional: %.2f\n/", Dens_pop2);

    //PIB Per Carpita
    PIBPC2 = (PIB2 + Populacao2) / 2;
    printf("PIB per Capita: %.2f\n/", PIBPC2);

    //Comparação das Cartas
    printf("Instruções: \nse o resultado for \"1\" carta 1 vence\n se resultado for \"0\" carta 2 ganha\n\n");

    //Populacao Resultado
    printf("Populacao:%d\n", Populacao1 > Populacao2);

    //Area Resultado
    printf("Área: %d\n", Area1 > Area2);

    //PIB
    printf("PIB: %df\n", PIB1 > PIB2);

    //Pontos Turisticos
    printf("Pontos Turísticos: %d\n", Pontos_Turisticos1 > Pontos_Turisticos2);

    //Densidade Populacional
    printf("Densidade Populacional: %d\n", Dens_pop1 < Dens_pop2);

    //PIB per Capita
    printf("PIB per Capita: %d\n", PIBPC1 > PIBPC2);

    //Super Poder
    SuperPoder1 = (Populacao1 + Area1 + PIB1 + Pontos_Turisticos1 + PIBPC1 - Dens_pop1);
    SuperPoder2 = (Populacao2 + Area2 + PIB2 + Pontos_Turisticos2 + PIBPC2 - Dens_pop2);
    printf("Super Poder: %d\n", SuperPoder1 > SuperPoder2);


    printf("\n");
    return 0;
}
