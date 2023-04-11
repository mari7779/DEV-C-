   	 #include <stdio.h>

int main() {
    int vetor[10], i;

    
    for(i=0; i<10; i++){
    	printf("digite os numeros \n");
    	scanf("%d\n", &vetor[i]);
    }
    	
    for(i=0; i<10; i++){
    	if(vetor[i]<0){
    		vetor[i]= 0;
		}
	}
	
	printf("o vetor agora e assim:");
	for(i=0; i<10; i++){
	printf("%d\n ", vetor[i]);
}
	return(0);
}
