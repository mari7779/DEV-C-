#include <stdio.h>

int main(void){
	float dolar, moneyD, moneyR, real;
	
	printf("Digite qualquer valor(US$):\n");
	scanf("%f", &dolar);
	
	printf("Digite qualquer valor(R$):\n");
	scanf("%f", &real);
	
	moneyD = real / 5,21;
	moneyR = dolar * 5,21;
	
	printf("Quantos dolares voce teria: %f\n", moneyD);
	printf("Quantos reais voce teria: %f\n", moneyR);
	
	return(0);
	}
