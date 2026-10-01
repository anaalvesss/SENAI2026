#include <stdio.h>
void main(){
	float v, d, t;
	int h, m;
	printf("Digite a velocidade em km/h:\n");
	scanf("%f", &v);
	printf("Digite a distância a ser percorrida em km\n");
	scanf("%f", &d);
	
	t = d / v * 60;
	h = t / 60;
	m = t - h * 60;
	
	printf("Você levará %d horas e %d minutos para percorrer.", h, m);
	getch();
}