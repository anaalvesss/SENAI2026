#include <stdio.h>
void main(){
	int t, v, e, p;
	char time [50];
	printf("Informe seu time:\n");
	scanf(" %[^\n]", time);
	printf("Digite as vitórias do seu time:\n");
	scanf("%d", &v);
	printf("Digite os empates do seu time:\n");
	scanf("%d", &e);
	
	p = (v * 3) + (e * 1);
	
	printf	("o time %s tem %d pontos", time,  p);
	getch();
}
         

