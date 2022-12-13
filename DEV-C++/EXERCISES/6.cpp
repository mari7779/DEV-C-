#include <stdio.h>

#define texto "dados"

int main(void){
	
	printf("%s\n", texto);
	
	char (letra)[1] = {'A'};
	printf("o caractere > (%c) < foi atribuida a um vetor", letra[0]);
	
	return(0);
}
