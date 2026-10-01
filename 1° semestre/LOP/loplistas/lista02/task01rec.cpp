#include<stdio.h>
int main(){
	int empresas, anos, totalexperiencia, i;
	
	totalexperiencia = 0;
	
	printf("Em quantas empresas o paciente já trabalhou?\n ");
	scanf("%d", &empresas);
	
	 for (i = 1; i <= empresas; i++) {
		printf("Na %d da empresa ficou quantos anos?\n ", i);
		scanf("%d", &anos);
		
		totalexperiencia += anos;
	}printf("O paciente possui %d anos de experiência ", totalexperiencia);
	
	return 0;
}
	