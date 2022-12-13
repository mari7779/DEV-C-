#include <stdio.h>

#include <locale.h>

int main(void){
	
	setlocale(LC_ALL, "portuguese");
	
	int div, rest;
	int div2, rest2, di;
	int div3, rest3, di2, cent;
	int div4, rest4, di3, cent2, k;
	
	int numero = 1000;

	
	printf("%d\n", numero);
	div = numero / 10;
	rest = numero % 10;
	
	div2 = numero / 100;
	rest2 = numero % 100;
	di = rest2 / 10; 
	
	div3 = numero / 1000;
	rest3 = numero % 1000;
	di2 = rest3 / 100;

	
	div4 = numero / 10000;
	rest4 = numero % 10000;
	di3 = rest4 / 1000;


	
	printf("Resto é: %d\n", rest);
	printf("Resto é: %d\n", di);
	printf("Resto é: %d\n", di2);
	printf("Resto é: %d\n", di3);
	
	return(0);
}
