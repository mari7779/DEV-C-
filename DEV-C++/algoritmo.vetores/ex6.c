#include<stdio.h>

int main(){
	int vetor[10];
	int i, maior, menor;
	
	for(i=0; i<10; i++){
		printf("digite o %d valor: ", i + 1 );
		scanf("%d", &vetor[i]);
	}
	
	maior = vetor[0];
	menor = vetor[0];
	
	for(i=1; i<10; i++) {
        if(vetor[i]>maior) {
            maior=vetor[i];
        }
        if(vetor[i]<menor) {
            menor=vetor[i];
        }
        
    }
    printf("o menor valor do vetor é : %d\n", menor);
    printf("o maior valor do vetor é : %d\n", maior);
    return(0);
}	
