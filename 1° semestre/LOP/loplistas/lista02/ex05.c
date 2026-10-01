#include <stdio.h>

void main(){
	float s, nv;
	
	printf("Informe seu salário\n");
	scanf("%f", &s);
	
	if(s <= 1800){
		nv = s + (s * 0.15);
	}else {
		nv = s + (s * 0.10);
	}
	printf("Seu novo salário é %.2f", nv);
}