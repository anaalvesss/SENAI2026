#include <stdio.h>
#include <windows.h>
#define MAX_CHAR 200

void main(){
	SetConsoleOutputCP(CP_UTF8);
	FILE *arquivo = fopen("nao_estruturado.txt", "r");
	if(arquivo == NULL){
		printf("Erro ao ler o arquivo nao_estruturado.txt");
		return;
	}else{
		printf("Arquivo aberto.\n");
	
	}
	char linha[MAX_CHAR];
	whilw(fgets(linha,sizeof(linha),arquivo)  != NULL){
	} printf("%s\n", linha);
	}
	fclose(arquivo);
	getch();