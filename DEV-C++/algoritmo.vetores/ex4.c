#include <stdio.h>

int main() {
    int vetor[8];
    int i, X, Y, soma;

    printf("digite os valores:\n");
    for(i=0; i<8; i++){
        scanf("%d", &vetor[i]);
    }

    printf("escolha as posicoes X e Y (entre 0 e 7):\n");
    scanf("%d %d", &X, &Y);

    soma = vetor[X] + vetor[Y];

    printf("A soma dos valores nas posicoes %d e %d eh %d\n", X, Y, soma);

    return 0;
}

