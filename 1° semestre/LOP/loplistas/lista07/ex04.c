#include <stdio.h>
#include <windows.h>

float media(float* array, int tamanho){
	float total = 0;
	for(int i = 0; i < tamanho; i++){
		total += array[i];
	}
	return total / tamanho;
}
void main(){
	SetConsoleOutputCP(CP_UTF8);
	int t;
	printf("Digite quantas notas o aluno terá:\n");
	scanf("%d", &t);
	float notas[t];
	for(int i = 0; i < t; i++){
		printf("%s° nota", i + 1);
		scanf("%f", &notas[i]);
	}
	printf("A média das notas digitadas é %.1f\n", media(notas, t));
	getch();
}