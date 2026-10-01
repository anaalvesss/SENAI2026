#include <stdio.h>

void main(){
	char turno;
	
	printf("Informe seu turno:\n M para manha, V para vespertino e N para noturno:\n");
	scanf("%c", &turno);
	
	if(turno=='M') {
		printf("Bom Dia");
	} if(turno=='V') {
		printf("Boa Tarde");
	}else if(turno=='N') {
		printf("Boa Noite");
	}else{
		printf("Turno inválido");
	}
}








