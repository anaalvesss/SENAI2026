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

    strcpy(prods[0].nome, "Notebook");
    strcpy(prods[1].nome, "Mouse");
    strcpy(prods[2].nome, "Teclado");
    strcpy(prods[3].nome, "Monitor");
    strcpy(prods[4].nome, "Impressora");

    prods[0].preco = 3500;
    prods[1].preco = 80;
    prods[2].preco = 150;
    prods[3].preco = 900;
    prods[4].preco = 650;

    prods[0].quantidade = 2;
    prods[1].quantidade = 10;
    prods[2].quantidade = 5;
    prods[3].quantidade = 8;
    prods[4].quantidade = 3;

    float totalGeral = 0;

    for(int i = 0; i < 5; i++){
        float total = prods[i].preco * prods[i].quantidade;
        totalGeral += total;

        printf("%s, %.2f, %d, %.2f\n",
               prods[i].nome,
               prods[i].preco,
               prods[i].quantidade,
               total);
    }

    printf("TOTAL GERAL: %.2f\n", totalGeral);

    getch();
}