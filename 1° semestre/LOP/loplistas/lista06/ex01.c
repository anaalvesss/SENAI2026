#include <stdio.h> 
#include<windows.h>

void main(){
float peso, altura, IMC;
	char nome[50];
	
	printf("Informe seu nome:\n");
	scanf("%s", &nome);
	
	printf("Informe sua altura:\n");
	scanf("%f", &altura);
	
	printf("Informe seu peso:\n");
	scanf("%f", &peso);
	
	IMC = peso / (altura * altura);
	
	if(IMC < 15.5){
		printf("Abaixo do peso");
	}else if(IMC >= 18.6 && IMC <= 24.9){
		printf("Peso normal");
	}else if(IMC >= 25 && IMC <= 29.9){
		printf("Sobrepeso");
	}else if(IMC >= 30 && IMC <=34.9){
		printf("Obesidade grau I");
	}else if (IMC >= 35 && IMC <= 39.9){
		printf("Obesidade grau II");
		}else if(IMC > 40){
		printf("Obesidade grau III");
	}
	
	printf("%s IMC se classifica em %.2f", IMC);
	getch();
}