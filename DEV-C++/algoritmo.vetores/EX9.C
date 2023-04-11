#include <stdio.h>

int main() {
    int vetor[6], i;
    
    for(i=0; i<6; i++) {
        do {
		printf("Digite o valor %d\n", i +1);
        scanf("%d\n", &vetor[i]);
    }  
	
	while(vetor[i] % 2 != 0);
    
    }
    
    printf("valores na ordem inversa: ");
    for(i=5; i>=0; i--) {
        printf("%d\n ", vetor[i]);
    }
    
    return(0);
}
