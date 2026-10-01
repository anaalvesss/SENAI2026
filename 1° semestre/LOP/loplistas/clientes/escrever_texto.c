#include <stdio.h>
#include <windows.h>

void main(){
	SetConsoleOutputCP(CP_UTF8);
	FILE *arquivo = fopen("nao_estruturado.txt", "w");
	if(arquivo == NULL){
		printf("Erro ao escrever no arquivo nao_estruturado.txt");
		return;
	}else{
		printf("Arquivo escrito com sucesso.\n");
	
	}
	for(int i=0; i < 10000; i++){
		fprintf(arquivo, "O que eu quiser escrever.");
	}
	fclose(arquivo);
	getch();
}