#include <stdio.h> // biblioteca padrao de entrada e saida 

int main() { //onde o programa comeca
    char Estado1,Estado2;                     // Letra dos estados 1 e 2                            (char armazena caractrs)
    char codigo1[10],codigo2[10];                // Código das cartas 1 e 2  permitindo 10 caracters
    char nomeCidade1[70],nomeCidade2[70];          // Nome da cidade 1 e 2   permitindo 70 caractrs 
    int populacao1,populacao2;                 // População 1 e 2                                   (int numeros inteiros) 
    float area1,area2;                    // Area em km²1 e 2                                       (armazena numeros decimais)
    float pib1,pib2;                     // PIB 1 e 2
    int pontosTuristicos1,pontosTuristicos2;         // Numero de pontos turísticos 1 e 2  
    float Densidade1,Densidade2;                  // dividir populaçao por sua area
    float percapita,percapita2;    // dividir pib por população
    
/*
    // Captura de dados usuariio
    
    printf("Digite a letra do Estado 1:\n"); // imprime a mensagem ao usuario
    scanf(" %c", &Estado1);  // le os dados digitados 

printf("Digite o codigo da carta 1:\n"); // \n pula linha
    scanf(" %s", codigo1);

    printf("Digite o nome da cidade 1:\n");
    scanf(" %[^\n]", nomeCidade1);  // Lê a linha inteira com espaços

printf("Digite a populacao 1:\n");
    scanf("%d", &populacao1);

printf("Digite a area km 1:\n");
    scanf("%f", &area1);

printf("Digite o PIB (em bilhoes de reais) 1:\n");
    scanf("%f", &pib1);

printf("Digite o numero de pontos turisticos 1:\n");
    scanf("%d", &pontosTuristicos1);
*/


    //captura dos dados do usuario carta 2

    printf("Digite a letra do estado 2:\n"); 
    scanf(" %c", &Estado2);
    
    printf("digite o codigo da carta 2:\n"); 
    scanf(" %s", codigo2);

printf("Digite o nome da cidade 2:\n");
    scanf(" %[^\n]", nomeCidade2); 
    
printf("Digite a populacao 2:\n");
    scanf("%d", &populacao2);

printf("Digite a area km 2:\n");
    scanf("%f", &area2);

printf("Digite o PIB (em bilhoes de reais) 2:\n");
    scanf("%f", &pib2);
    
printf("Digite o numero de pontos turisticos 2:\n");
    scanf("%d", &pontosTuristicos2);


/*
    // Exibição dos dados coletados carta 1
    printf("\nCarta 1 \n");
    printf("Estado: %c\n", Estado1);
    printf("Codigo : %s\n", codigo1);
    printf("Nome da Cidade : %s\n", nomeCidade1);
    printf("Populacao : %d\n", populacao1);
    printf("area : %.2f km\n", area1);
    printf("PIB : %.2f bilhoes de reais \n", pib1);      // %.2f formata o numero para duas casas decimais 
    printf("Numero de Pontos Turisticos : %d\n", pontosTuristicos1);

    Densidade1 = (float)populacao1 / area1; // divisao
    printf("Densidade Populacional %.3f\n", Densidade1);

    percapita = (float)pib1 / populacao1; // Divisao
    printf("Pib per capita: %.2f\n", percapita);
    */
    // Exibição dos dados coletados carta 2 
    printf("\nCarta 2 \n");
    printf("Estado  %c\n", Estado2);
    printf("codigo: %s\n", codigo2);
    printf("Nome da Cidade : %s\n", nomeCidade2); 
    printf("Populacao : %d\n", populacao2);
    printf("area : %.2f km\n", area2);
    printf("PIB : %.2f bilhoes de reais 2\n", pib2);
    printf("Numero de Pontos Turisticos : %d\n", pontosTuristicos2);

Densidade2 = (float)populacao2 / area2; // divisao
    printf("Densidade Populacional %.3f\n", Densidade2);

    percapita2 = (float)pib2 / populacao2; // Divisao
    printf("Pib per capita: %.2f\n", percapita2);


 return 0;
}
 // Testado ok.. 

