#include <stdio.h>

void main (){
	int media, nota;
	printf("Informe sua nota\n");
	scanf("%", &nota);
	
	if(nota >= 7) {
		printf("Aprovado\n");
	} else ( nota < 6 ); {
		printf("Reprovado\n");
	}
}