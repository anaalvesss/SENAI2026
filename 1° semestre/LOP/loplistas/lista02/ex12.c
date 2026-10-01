#include <stdio.h>

void main(){
	int nascimento, ano_atual, idade;
	
	printf("Informe sua data de nascimento:\n");
	scanf("%d", &nascimento);
	
	idade = 2026 - nascimento;
	
	if(idade>=16) {
		printf("Pode votar");
	}else if(idade<16) {
		printf("Não pode votar");
	}
}