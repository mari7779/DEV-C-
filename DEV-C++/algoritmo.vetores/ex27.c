#include <stdio.h>

int main(){
	int vetor, i, res = 0;
	
	printf("digite um numero\n");
	scanf("%d", &vetor);
	
	 for (i=1; i <= vetor; i++){
	 	if(vetor%i == 0){
	 		res++;
		 }
	 }
	 
	 if(res == 2)
	 	printf("%d e um numero primo", vetor);
	else
		printf("%d nao e um numero primo", vetor);
	 
	 return(0);
	 }
