#include <stdio.h>

int main(void){
	int num[50];
	int des=0;
	int a=0, spar=1, simpar=1;
	printf("digite os numeros desejados\n");
	scanf("%d", &des);
	
	for (a; a<= des; a++) {
		printf("digite um numero %d: \n",a);
		scanf("%d", &num[a]);
	}
	
	for (a=0; a<= des; a++) {
	if(num[a] % 2 == 0){
		spar= spar*num[a];
		printf("os numeros sao pares : %d: ", num[a]);
	}
	
	else{
		simpar= simpar*num[a];
		printf("os numeros sao impares : %d: ", num[a]);
	}
		
		
}
return(0);
}
	
	
	
