#include <stdio.h>
void main(){
	char nomes[7][50] = {
		"Jacinto Pena",
		"Jacinto Paixão",
		"Jacinto Amor",
		"Osmar Motta",
		"Osmar Educado",
		"O0smar Dito",
		"Osmar Amado",
	};
	srand(time(NULL));
	int i= rand() % 7;
	printf("%s\n", nomes [i]);	
	
	getch();
}