#include <stdio.h>
void main(){
	char cidade[100];
	float e, v, p;
	printf("Digite o nome da cidade\n");
	scanf("%s", &cidade);
	printf("Informe o numero total de eleitores\n");
	scanf("%f", &e);
	printf("Informe o numero de votos apurados\n");
	scanf("%f", &v);
	
	p = (v + 100.0) / e;
	
	printf("Cidade: %s \n", cidade);
	printf("Porcentagem de votos é igual a %.2f%%", p);
	getch();
}