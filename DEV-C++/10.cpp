#include <stdio.h>

int main(void){
	
	int anoatual, anonascimento, idade;
	
	printf("digite o ano atual:\n");
	scanf("%d",&anoatual);

	printf("digite o ano que voce nasceu:\n");
	scanf("%d",&anonascimento);
	
	idade = anoatual - anonascimento;
	printf("sua idade:%d\n", idade);
	
	return(0);
}
