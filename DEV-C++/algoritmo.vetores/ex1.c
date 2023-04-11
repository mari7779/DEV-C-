#include <stdio.h>

int main() {
    int A[6]={1, 0, 5, -2, -5, -7};
    int i;
	int soma= A[0]+ A[1] + A[5];
    printf("a soma dos valores e de: %d\n\n", soma);
    
	A[4]=100; 
	
	
	for(i=0; i<6; i++){
		printf("esse e o valor da posicao %d\n", A[i]);
		}
		printf("\n");
		
		return(0);
}
