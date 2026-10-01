#include <stdio.h>
#include <stdlib.h>
#include <time.h>
void main(){
	//Gerar números aleatórios
	float numeros[10];
	//Pega o tempo atual
	srand(time(NULL));
	//Gera o número a partir do tempo
	for(int i = 0; i < 10; i++){
	    float x = rand();
	    printf("%f\n", x);	
	}
	getch();
}