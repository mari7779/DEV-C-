#include<math.h>
#include<stdio.h>
	int main(void){
		int num, vet;
		int s=1;
		printf("escolha um numero n");
		scanf("%d", &num);
		
		while(s<num+2){
			for(vet=s; vet<=s*s; vet=vet+s){
			
			printf("%i ", vet);
			}
			s++;	
			printf("\n");
	
		}
				return(0);
	}
