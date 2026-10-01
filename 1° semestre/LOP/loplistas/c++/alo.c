#include <stdio.h>

void main(){
	//Variáveis
	int a, b, c;
	//Entrada
	printf("Digite um número inteiro\n");
	scanf("%d",&a);
	printf("Digite outro número inteiro\n");
	scanf("%d",&b);
	//Processamento
	c = a + b;
	//Saída
	printf("A soma dos dois números é %d",c);
	getch();
}