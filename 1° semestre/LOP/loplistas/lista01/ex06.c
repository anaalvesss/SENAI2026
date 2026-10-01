#include <stdio.h>
void main(){
	float v, d, t;
	int h, m;
	printf("Informe a distância a ser sobrevoada pelo avião 747-300 em km:\n");
	scanf("%f", &d);
	
	v = 900;
	t = d / 900 * 60;
	h = t / 60;
	m = t - h * 60;
	
	printf("O avião 747-300 levará %d horas e %d minutos para sobrevoar.", h, m);
	getch();
}