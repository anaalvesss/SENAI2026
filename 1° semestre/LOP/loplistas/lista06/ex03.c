#include <stdio.h>
#include<windows.h>
void main(){
	SetConsoleOutputCP(CP_UTF8);
    float total = 0, preco;
	int quantidade;
    char resp;
    do{
      	printf("Digite o preco produto:\n");
        scanf("%f", &preco);
        printf("Digite a quantidade:\n");
        scanf("%f", &quantidade);
        total = total + preco * quantidade;
        printf("Mais algum produto s/n:\n");
        scanf(" %c", &resp);
	}while(resp == 's');
	printf("O seu orçamento é %.2f", total);
	getch(); 
}