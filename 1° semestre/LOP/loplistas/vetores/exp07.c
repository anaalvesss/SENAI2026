#include <stdio.h>
#include <stdlib.h>
#include <time.h>

void main() {
	//sortear um nome aleatorio
    char nomes[7][50] = { // vetor de strings, todo vetor de string é uma matriz
        
        "Jacinto Pena",
        "Jacinto Amor", 
        "Osmar Motta",
        "Osmar Educado",
        "Osmar Dito",
        "Osmar Amado"
        
    };

    srand(time(NULL)); // inicializa o gerador aleatório
    int i = rand() % 7; // gera número de 0 a 6
    printf("%s\n", nomes[i]);

    ;
}