#include <stdio.h>

void main(){
	int soma = 0;
	
	for(int i = 0; i <= 100; i++){
		soma += i;
	}printf("A soma dos números de 0 a 100 = %d:\n", soma);
}