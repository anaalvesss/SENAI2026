#include <stdio.h>
void main(){
	int caminhao = 18;
	int alqueire = 250;
	int caminhoes, alqueires, viagens, quebrados;
	printf("Digite quantos caminhoes o fazendeiro possui:\n");
	scanf("%d", &caminhoes);
	printf("Digite quantos alqueires a fazenda possui:\n");
	scanf("%d", &alqueires);
	
	viagens = (alqueires * alqueire) / (caminhoes + caminhao) + 1;
	quebrados = (alqueires * alqueire) % (caminhoes + caminhao) + 1;
	if(quebrados !=0){
		viagens = viagens + 1;
	}
	
	printf("Será necessário %d viagens para transportar a colheita.", viagens);
	getch();
}