#include <stdio.h>

#include <locale.h>

int main(void){
	
	setlocale(LC_ALL, "portuguese");
	int num, divs;
	
	printf("digite um n�mero inteiro:\n");
	scanf("%d", &num);
	
	if(num % 2 == 0){
		printf("o n�mero � par: %d\n", num);
		printf("o resto da sua divis�o com 2 �: %d\n", divs);
	}
	else{
		printf("o n�mero � �mpar: %d\n", num);
	}
	return(0);
}
