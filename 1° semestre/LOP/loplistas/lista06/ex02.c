#include <stdio.h>
#include<windows.h>
void main(){
	SetConsoleOutputCP(CP_UTF8);
	float peso, excesso, limite = 50, multa = 4;
	
	printf("Qual o peso dos peixes?\n");
	scanf("%f", &peso);
	
		excesso = peso - 50;
		multa = excesso * 4;
	if(peso > 50){
	printf("Você excedeu o limite em %.2f\n", excesso);
	printf("O valor da multa a ser paga é de R$%.2f\n", multa);
	}else{
		printf("Não há multa a ser paga\n");
	}
	getch();
}