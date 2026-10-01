#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<windows.h>

struct Produto{
    char nome[50];
    float preco;
    int quantidade;
};

void main(){
    SetConsoleOutputCP(CP_UTF8);

    struct Produto prods[5];
    float totalGeral = 0;
    int sair;

    for(int i = 0; i < 5; i++){

        printf("\nNome: ");
        scanf(" %[^\n]", prods[i].nome);

        printf("Preco: ");
        scanf("%f", &prods[i].preco);

        printf("Quantidade: ");
        scanf("%d", &prods[i].quantidade);

        float total = prods[i].preco * prods[i].quantidade;
        totalGeral += total;

        printf("%s, %.2f, %d, %.2f\n",
               prods[i].nome,
               prods[i].preco,
               prods[i].quantidade,
               total);

        printf("\nDigite 0 para parar ou 1 para continuar: ");
        scanf("%d", &sair);

        if(sair == 0){
            break;
        }
    }

    printf("\nTOTAL GERAL: %.2f\n", totalGeral);
}