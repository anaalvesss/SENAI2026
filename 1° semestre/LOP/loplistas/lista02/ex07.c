#include <stdio.h>

void main(){
	int n1, n2, n3, maior;
	
	printf("Digite o primeiro numero:\n");
	scanf("%d", &n1);
	printf("Digite o segundo numero:\n");
	scanf("%d", &n2);
	printf("Digite o terceiro numero:\n");
	scanf("%d", &n3);
	
	maior = n1;
	
	if (n1>n2&&n1>n3) {
		printf("O maior numero entre %d, %d, %d é %d ",n1, n2, n3, n1);
		}else if(n2>n1 && n2>n3) {
			printf("O maior numero entre %d, %d, %d é %d", n2, n2, n3, n2);
		}else if(n3>n1 && n3>n2) {
			printf("O maior numero entre %d, %d, %d é %d", n3, n1, n2, n3);
		}else if(n1=n2=n3) {
			printf("Todos os numeros são iguais");
		}
	}
	
	