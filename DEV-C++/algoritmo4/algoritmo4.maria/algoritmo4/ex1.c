#include <stdio.h>

int main(void){
	int num[100];
	int qtd=0;
	int haha, aux;
	printf("digite quantos numeros deseja\n");
	scanf("%d", &qtd);
	
	for (haha=0; haha<=qtd; haha++) {
		printf("Informe um numero\n");
		scanf("%d", &num[haha]);
	}
	aux = num[0];
	for (haha=0; haha<=qtd; haha++){
		if(aux > num[haha]){
			aux = num[haha];
		}
	}
	printf("O menor numero e %d\n", aux);
}

