#include<stdio.h>

int main(){
	int vetor[10];
	int i, pares=0;
	
	for(i=0; i<10; i++){
		printf("digite o %d valor: ", i + 1 );
		scanf("%d", &vetor[i]);
	}
	
	for(i=0; i<10; i++){
	if(vetor[i]%2 ==0){
		pares++;
	}
}
	printf("o vetor tem %d numeros que sao pares", pares);
	return(0);
}

