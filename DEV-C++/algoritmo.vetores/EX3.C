#include <stdio.h>

int main() {
    int i;
    float vetorA[10], vetorB[10];

    for(i=0; i<10; i++){
        printf("digite o elemento %d do conjunto: ", i+1);
        scanf("%f", &vetorA[i]);
    }

    for(i=0; i<10; i++){
        vetorB[i] = vetorA[i] * vetorA[i];
    }

    printf("o 1 conjunto e: ");
    for(i=0; i<10; i++){ 
        printf("%.2f ", vetorA[i]);
    }
    printf("\n");

    printf("o 2 conjunto, o quadrado do 1 conjunto e: ");
    for(i=0; i<10; i++){
        printf("%.2f ", vetorB[i]);
    }
    printf("\n");

    return 0;
}

