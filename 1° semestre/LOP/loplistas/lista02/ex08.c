#include <stdio.h>

void main(){
	int v, vf;
	
	printf("Digite o valor da compra:\n");
	scanf("%d", &v);
	
	if(v>500) {
		vf = v * 0.9; 
	}else if(v>200 && v<=500) {
		vf = v * 0.95;
	}else{
		vf = v;
	} 
	printf("O valor da compra com o desconto é: %d", vf);
	getch();
	return 0;
}
