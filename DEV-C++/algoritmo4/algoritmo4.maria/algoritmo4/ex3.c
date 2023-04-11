#include<math.h>
#include <stdio.h>
int main(void){
	long long int fat=1;
	long long int num;
	
	printf("digite um numero \n");
	scanf("%d", &num);
	
	while(num > 0){
		fat= fat*num;
		num--;
	}
	printf("O fatorial e %lld", fat);
	return 0 ;
}
