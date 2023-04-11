#include<stdio.h>

int main(){
	float vetor[5];
	int i;
	float media, maior, menor;
	
	printf("digite 5 valores: \n");
	for(i=0; i<5; i++){
		scanf("%f", &vetor[i]);	
	}
	
		
	maior = vetor[0];
	menor = vetor[0];	
	
	for(i=1; i<5; i++) {
        if(vetor[i]>maior) {
            maior=vetor[i];
        }
        if(vetor[i]<menor) {
            menor=vetor[i];
        }
    }
    
    for(i=0; i<5; i++) {
    media+= vetor[i];
	}
    media /= 5;
        
        
	printf("os 5 valores sao: \n ");
	for(i=0; i<5; i++){
		printf(" %.2f ", vetor[i]);	
}

	printf("o menor valor e: %.2f", menor);
	printf("o maior valor e: %.2f", maior);
	

	printf("a media dos valores e: %.2f", media);
	
	return(0);
}
