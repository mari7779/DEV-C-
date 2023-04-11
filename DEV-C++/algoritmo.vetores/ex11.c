#include<stdio.h>

int main(){
	float vetor[10];
	int i, negativo=0 ;
	float soma=0;
	
	for(i=0; i<10; i++){
		printf("digite um valor real: " );
		scanf("%f", &vetor[i]);
	}
	
	for(i=0; i<10; i++){
		
	if(vetor[i]<0){
		negativo++;
	}
	
		else{ 	
		soma +=vetor[i];
}
}
	printf("o vetor tem %d numeros que sao negativos ", negativo);
	printf("a soma dos valores positivos é %f\n", soma);
	
	return(0);

}
