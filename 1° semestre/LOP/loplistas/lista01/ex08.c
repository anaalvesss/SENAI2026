#include <stdio.h>
void main(){
	float raio, altura, area, volume;
	float pi = 3.14;
	printf("Informe o raio de um cilindro em cm:\n");
	scanf("%f", &raio);
	printf("Informe a altura de um cilindro em cm:\n");
	scanf("%f", &altura);
	
	area = (2 * pi) * raio * (raio + altura);
	volume = pi * (raio * raio) * altura;
	
	printf("A area do cilindro é %2.f cm2\n, ar", area);
	printf("O volume do cilindro é %2.f cm3\n", volume);
	getch();
}