#include <stdio.h>
void main(){
	float valor, nv;
	char nome[60];
	printf("Informe o nome da mercadoria:\n");
	scanf("%s", &nome);
	printf("Informe o valor da mercadoria:\n");
	scanf("%f", &valor);
	
	nv = valor + (valor * 0.05);
	
	printf("Mercadoria: %s\n", nome);
	printf("Novo valor: %.2f\n", nv);
	getch();
}