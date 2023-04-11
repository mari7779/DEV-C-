#include<stdio.h>

int main(void){
	char nome[50], sexo[0];
	int idade;
	
	printf("digite seu nome: \n");
	gets(nome);
	
	printf("digite seu sexo com M ou F: \n");
	gets(sexo);
	
	printf("digite sua idade: \n");
	scanf("%d", &idade);
	
	if(sexo[0]=='F' && idade<25){
		printf("%s ACEITA", nome);
		}
		else{
			printf("%s NAO ACEITA", nome);
		
	}
	
}
