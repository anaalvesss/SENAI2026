#include <stdio.h>

void main(){
	int pontos;
	printf("Digite a quantidade de pontos do time:\n");
	scanf("%d", &pontos);
	
	if (pontos >= 20){
		printf("Classificado\n");
	} else if (pontos >= 10 && pontos < 20) {
		printf("Em disputa\n");
	} else {
		printf("Eliminado\n");
	}
}