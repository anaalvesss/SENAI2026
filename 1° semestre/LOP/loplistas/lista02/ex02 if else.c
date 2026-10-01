#include <stdio.h>

void main(){
	int nascimento, idade;
	
	printf("Informe seu ano de nascimento : ");
	scanf("%d", &nascimento);
	
	idade = 2026 - nascimento;
	
	if(idade >= 18) {
		printf("Maior de idade\n");
	} else {
		printf("Menor de idade\n");												
	}
}