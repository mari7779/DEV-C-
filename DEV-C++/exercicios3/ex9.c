#include<stdio.h>
#include<math.h>
#include <locale.h>

int main(void){
	setlocale(LC_ALL, "portuguese");
	float num, num2, soma, raiz;
	int opcao;
	
	printf("Digite um valor: \n");
	scanf("%f", &num);
	printf("Digite outro valor: \n");
	scanf("%f", &num2);
	
	soma = num+num2;
	raiz = sqrt(num);
	
	printf("Op��o 1 a raiz quadrada de %f � %f\n",num, raiz);
	printf("Op��o 2 a soma de %f e %f � %f\n",num, num2, soma);
	printf("Escolha e digite 1 ou 2: \n");
	scanf("%d", &opcao);
	
	switch(opcao){
		case 1:
		printf("Raiz quadrada: %f\n", raiz);
		break;
	case 2:
		printf("Soma: %f\n", soma);
		break;
	case 3:
		printf("Essa op��o n�o existe");
		break;
	}
}
