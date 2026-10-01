#include <stdio.h>

void main() {
	int num;
	
	printf("Informe um valor inteiro : ");
	scanf("%d", &num);
	
	if(num > 0) {
	    printf("Numero Positivo\n");
	} else if (num < 0) {
		printf("Numero Negativo\n");
	} else {
		printf("Numero igual a Zero");
	}
	
}
