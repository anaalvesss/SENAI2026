#include <stdio.h>
void main(){
	float s, i, ns;
	char nome[20];
	printf("Informe seu nome\n");
	scanf("%s", &nome);
	printf("Digite seu salário atual\n");
	scanf("%f", &s);
	printf("Digite o índice percentual\n");
	scanf("%f", &i);
	
	ns = s + (s * i / 100);	
	
	printf("Seu novo salário de  R$ %2.f será", ns);
	getch();	
}