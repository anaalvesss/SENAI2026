#include<stdio.h>
    void main(){
	int quantidade_empresas, i, anos;
	int total_experiencia = 0;
	
	printf("Em quantas empresas já trabalhou?");
	scanf("%d", &quantidade_empresas);
	
	for(i = 1; i <= quantidade_empresas; i ++){
		printf("Na %da empresa ficou quantos anos:\n ", i );
        scanf("%d", &anos);
        
        total_experiencia += anos;
	}
	printf("Você possui %d anos de experiência\n", total_experiencia);
	
	getch();
}