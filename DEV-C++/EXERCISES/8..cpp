#include <stdio.h>

int main(void){
	float nota1, nota2, nota3, nota4, soma, divs;
	
	printf("digite a primeira nota:\n");
	scanf("%f", &nota1);
	
	printf("digite a segunda nota:\n");
	scanf("%f", &nota2);
	
	printf("digite a terceira nota:\n");
	scanf("%f", &nota3);
	
	printf("digite a quarta nota:\n");
	scanf("%f", &nota4);
	
	soma= nota1+nota2+nota3+nota4;
	divs = soma/4;
	
	printf("resultados: %.2f \n", soma);
	printf("media: %.2f \n", divs);
}
