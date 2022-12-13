#include <stdio.h>

#include <locale.h>

int main(void){
	
	setlocale(LC_ALL, "portuguese");
	int num, divs;
	
	printf("digite um número inteiro:\n");
	scanf("%d", &num);
	
	if(num % 2 == 0){
		printf("o número é par: %d\n", num);
		printf("o resto da sua divisão com 2 é: %d\n", divs);
	}
	else{
		printf("o número é ímpar: %d\n", num);
	}
	return(0);
}
