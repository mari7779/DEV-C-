
#include <stdio.h>

int main() {
    int vetor[6];
    int i;
    
    for(i=0; i<6; i++) {
        printf("digite o %d número: ", i+1);
        scanf("%d", &vetor[i]);
    }
    
    printf("\n os valores na ordem inversa sao: ");
    for (i=5; i>=0; i--) {
        printf("%d ", vetor[i]);
    }
    
    return 0;
}

