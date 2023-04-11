#include<stdio.h>

int main(){
	float vetor[10];
	int i, b;
	float aux;
	
	
	for(i=0; i<10; i++){
		printf("digite o %d valor: ", i + 1 );
		scanf("%f", &vetor[i]);
	}
	
	for (i = 0; i < 9; i++) {
    	for (b=i +1; b< 10; b++) {
    		if (vetor[i] > vetor[b]) {
        		aux = vetor[i];
        		vetor[i] = vetor[b];
        		vetor[b] = aux;
      }
    }
  }
  
  	printf("esse e o vetor reordenado:\n");
     	for (i = 0; i < 10; i++) {
    		printf("%f ", vetor[i]);
  }
  		printf("\n");
  		
  		return(0);
}
