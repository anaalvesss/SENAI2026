#include <stdio.h>
void main(){
	int n1, n2, n3;
	printf("Digite um número inteiro positivo\n");
	scanf("%d", &n1);
	
	n2 = n1 + 1;
	n3 = n1 - 1;
	
	printf("n1 + 1 = %d\n", n2);
	printf("n1 - 1 = %d\n", n3);
	getch();
}
