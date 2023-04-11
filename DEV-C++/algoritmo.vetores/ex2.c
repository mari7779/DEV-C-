#include<stdio.h>

int main(){
	int vetor[6];
	int i;
	
	for(i=0; i<6; i++){
		printf("digite o valor %d: ", i + 1 );
		scanf("%d", &vetor[i]);
		
	}
	printf("os valores lidos foram: ");
	for(i=0; i<6; i++){
		printf("%d ", vetor[i]);
	}
	return(0);
}
