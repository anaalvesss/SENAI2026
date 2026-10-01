#include <stdio.h>

void main(){
	float n1, n2, n3, media;
	
	printf("Informe sua primeira nota:\n");
	scanf("%f", &n1);
	printf("Informe sua segunda nota:\n");
	scanf("%f", &n2);
	printf("Informe sua terceira nota:\n");
	scanf("%f", &n3);
	
	media = (n1 + n2 + n3)/ 3;
	
	if(media >= 7) {
		printf("Aprovado");
	} if(media >= 5 & media < 7) {
		printf("Recuperação");
	} else if(media < 7) {
		printf("Reprovado");
	}
}