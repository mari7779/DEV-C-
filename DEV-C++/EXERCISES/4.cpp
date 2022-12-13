#include <stdio.h>

int main(void){
	
	int dia, mes, ano;
	
	printf("Digite um dia:\n");
	scanf("%d",&dia);
	
	printf("Digite um mes:\n");
	scanf("%d",&mes);
	
	printf("Digite um ano:\n");
	scanf("%d",&ano);
	
	printf("Data: \n%d/%d/%d", dia, mes, ano);
	printf("\nData invertida: \n%d/%d/%d", ano, mes, dia);
	
	return(0);
}
