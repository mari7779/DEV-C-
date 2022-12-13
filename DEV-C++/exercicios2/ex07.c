#include<stdio.h>
#include<math.h>

int main(void){
	float num=2, quadrado, elevado, raiz;
	
	elevado = 3;
	raiz = 2;
	
	raiz= sqrt(raiz);
	quadrado = pow(num, elevado);

	printf("O resultado é: %f\n", quadrado);
	printf("A raiz é: %f\n", raiz);
}
