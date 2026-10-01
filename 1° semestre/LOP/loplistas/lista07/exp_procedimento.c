#include<stdio.h>
#include<windows.h>
#include<time.h>
#include<string.h>

//Prodecimento / procedure
void well(){
	printf("Bia\n");
}

//Procedimento com parâmetro
void escreva(char texto[20]){
	printf("Texto: %s\n", texto);
}

//Função
int elevado(int x, int y){
	int total = 1;
	for(int i = 0; i < y; i++){
		total = total * x;
	}
	return total;
}



void main(){
	SetConsoleOutputCP(CP_UTF8);
	well();
	printf("Palmeiras não tem mundial!!\n");
	printf("2 elevado a 10 é %d", elevado(2, 10));
	getch();
}