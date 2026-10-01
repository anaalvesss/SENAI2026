#include <stdio.h>

void main(){
	int idade;
	
	printf("Digite a sua idade:\n");
	scanf("%d", &idade);
	
	if(idade<12) {
		printf("Criança\n");
	}else if(idade>=12 && idade<18) {
		printf("Adolescente\n");
	}else {
		printf("Adulto");
	}
}