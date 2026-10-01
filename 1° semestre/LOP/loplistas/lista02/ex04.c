#include <stdio.h>

void main(){
	int num1, num2;
	
	printf("Digite um número inteiro\n");
	scanf("%d", &num1);
	printf("Digite outro número inteiro\n");
	scanf("%d", &num2);
	
	if(num1 > num2){
		printf("%d é o maior número", num1);
	}else if(num2 > num1){
		printf("%d é o maior número", num2);
	} else{
		printf("Números iguais");
	}
}