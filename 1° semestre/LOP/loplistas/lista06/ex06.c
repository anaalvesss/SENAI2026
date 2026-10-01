#include <stdio.h>
void main(){
	int area, latas, galoes;
	int difLatas, difGaloes;
	int areaGalao = 21, areaLata = 108;
	float precoGaloes, precoLatas;
	//Galão 3.6 litros, lata 18 litros
	//1 litro pinta 6m2
	printf("Informe a área em m2(inteiro) a ser pintada:\n");
	scanf("%d", &area);
	//resolvendo matematicamente
	latas = area / areaLata;
	difLatas = area % areaLata;
	galoes = difLatas / areaGalao;
	if(difLatas % areaGalao != 0){
		galoes = galoes + 1;
	}
	if(galoes > 3){
		galoes = 0;
		latas = latas + 1;
	}
	precoLatas = latas * 80.0;
	precoGaloes
}