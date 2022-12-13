#include <stdio.h>
#include <locale.h>

int main(void){
	
	setlocale(LC_ALL, "portuguese");
	float quadrado, multiplicacao, total;
	
	printf("quais os lados do quadrado? ");
	scanf("%f", &quadrado);
	
	multiplicacao = quadrado * quadrado;
	
	printf("a área é: %.2f\n", multiplicacao);
	
	return (0);
}
