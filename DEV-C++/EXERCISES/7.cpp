#include <stdio.h>

#define texto "Caractere"

int main(void){
	printf("%s\n", texto);
	char (letra)[1] = "";
	
	printf("digite uma letra qualquer:\n");
	scanf("%s", &letra);
	printf("%s", letra);
	return(0);
}
