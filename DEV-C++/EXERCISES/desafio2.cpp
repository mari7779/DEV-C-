#include <stdio.h>

int main(void){
	int num, divs;
	
	printf("digite um numero inteiro:\n");
	scanf("%d", &num);
	
	if(num % 2 == 0){
		printf("o numero e par: %d\n", num);
		printf("o resto da sua divisao com 2: %d\n", divs);
	}
	else{
		printf("o numero e impar: %d\n", num);
	}
	return(0);
}
