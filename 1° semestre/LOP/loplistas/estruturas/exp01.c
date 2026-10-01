#include <stdio.h>
#include <windows.h>
struct Cliente{
	char nome[50];
	int idade;
	char email[100];

};
void main(){
		SetConsoleOutputCP(65001);
		struct Cliente c1, c2, c3;
		
		strcpy(c1.nome, "Beatriz Alves");
		c1.idade = 18;
		strcpy(c1.email,"beatriz@gmail.com");
		strcpy(c2.nome, "Ana da Silva");
		c2.idade = 25;
		strcpy(c2.email,"ana@gmail.com");
		strcpy(c3.nome, "Maria da Oliveira");
		c3.idade = 48;
		strcpy(c3.email,"maria@gmail.com");
		
		printf("%s, %d, %s", c1.nome, c1.idade, c1.email);
		printf("%s, %d, %s", c2.nome, c2.idade, c2.email);
		printf("%s, %d, %s", c3.nome, c3.idade, c3.email);
		getch();
}