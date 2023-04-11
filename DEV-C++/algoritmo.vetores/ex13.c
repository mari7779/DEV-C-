
#include <stdio.h>

int main() {
    int vetor[5];
    int i;
    int maior= 0, menor= 0;
    
    printf("digite os valores ");
    for(i=0; i<0; i++){
        scanf("%d", &vetor[i]);
    	}

        if(vetor[i]>maior) {
            maior = i;
        }
        if(vetor[i]<menor) {
            menor= i;
        }
    printf("o maior valor se encontra na posicao %d.\n", maior);
    printf("o menor valor se encontra na posicao %d.\n", menor);
    return 0;
}


