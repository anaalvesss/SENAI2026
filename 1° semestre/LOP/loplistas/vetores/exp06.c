#include <stdio.h>
#include <stdlib.h>
#include <time.h>
void main(){
 	//gerar 10 números aleatórios inteiros de 20 a 50
 	int numeros[10];
 	//pega o tempo atual
 	srand (time(NULL));
 	//gera 10 número a partir do tempo
	 for (int i = 0; i < 10; i++) {
	 	int x = (rand() % 31)+20;
	 	numeros [i] = x;
	 }
 	//mostrar os numeros gerados 
 		for (int i = 0; i < 10; i++) {
	 	printf ("%d\n", numeros [i]);
 }
	getch ();
}