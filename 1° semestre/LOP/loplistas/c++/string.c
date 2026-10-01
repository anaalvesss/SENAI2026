#include <stdio.h>

void main(){
	char nome1[20], nome2[20];
	
	printf("Digite um nome:\n");
	scanf("%s[^\n]", &nome1);
	fflush(stdin);
	printf("Digite outro nome:\n");
	scanf("%s[^\n]", &nome2);
	fflush(stdin);
	
	printf("O primeiro nome é %s\n", nome1);
	printf("O segundo nome é %s\n", nome2);
	getch();
}