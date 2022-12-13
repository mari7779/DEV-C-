#include<stdio.h>
#include<math.h>
int main(void){
	float quadrado, num, ele, raiz;
	
	printf("Digite um numero \n");
	scanf("%f", &num);
	printf("Digite a potência: \n");
	scanf("%f", &ele);
	printf("Digite uma raiz: \n");
	scanf("%f", &raiz);
	
	raiz= sqrt(raiz);
	quadrado = pow(num, ele);

	printf("O resultado é: %f\n", quadrado);
	printf("A raiz é: %f\n", raiz);
}
