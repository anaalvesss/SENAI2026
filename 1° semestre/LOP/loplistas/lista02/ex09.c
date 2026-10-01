#include <stdio.h>

void main(){
	int num;
	
	printf("Digite um número inteiro:\n");
	scanf("%d", &num);
	
	if(num>100) {
		printf("Número maior que 100");
	}else {
		printf("Número menor que 100");
	}
}