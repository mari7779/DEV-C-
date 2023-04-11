#include<stdio.h>
#include<math.h>
int main(){
	int vetor[15];
	int i, soma=0;
	float media;
	
		for(i=0; i<15; i++){
		printf("digite a nota do aluno %d: ", i + 1 );
		scanf("%d", &vetor[i]);
		soma+= vetor[i];
	}
	
		media= (float)soma/ 15;
		printf("a media da nota dos alunos é: %.2f\n", media);
		return(0);
	}
