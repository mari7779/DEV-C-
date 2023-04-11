 #include <stdio.h>

int main() {
    int num[6], i;
    int qimpar=0, soma=0;
    
    printf("digite os numeros \n");
    
   	for(i=0; i<6; i++){
   		scanf("%d", &num[i]);
   		
   		
   	if(num[i] % 2 ==0){
   			printf("esse numero e par: %d\n", num[i]);
   			soma += num[i];
		   }
	
	else{
		printf("esse numero e impar: %d\n", num[i]);
		qimpar++;
	}
}
	printf("a soma dos numeros pares e de: %d\n", soma);
	printf("a quantidade de numeros impares e de: %d\n", qimpar);
	return(0);
}
