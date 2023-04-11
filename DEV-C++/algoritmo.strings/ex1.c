#include<stdio.h>

int main(void){
	char nome[50];
	
	printf("digite seu nome: \n");
	gets(nome);
	
	printf("%.4s", nome);
}
