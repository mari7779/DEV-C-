#include <stdio.h>

int main(void){
	float dolar, moneyD, moneyR, real;
	
	printf("digite algum valor(US$):\n");
	scanf("%f", &dolar);
	
	printf("digite algum valor(R$):\n");
	scanf("%f", &real);
	
	moneyD = real / 5,21;
	moneyR = dolar * 5,21;
	
	printf("quantos dolares voce teria: %f\n", moneyD);
	printf("quantos reais voce teria: %f\n", moneyR);
	
	return(0);
	}
