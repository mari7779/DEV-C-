#include<stdio.h>
#include<string.h>

int main(){
	char nome[50];
	
	printf("digite um nome: ");
	gets(nome);

	if(nome[0] == 'a' || nome[0] == 'A'){
			printf("seu nome: %s foi aceito", nome);
		}
		return(0);
}
