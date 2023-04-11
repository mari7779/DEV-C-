#include<stdio.h>
#include<math.h>


int main(void){
	int num, a;
	int f, fa=0, fb=1;
	
	printf("digite um numero inteiro \n");
	scanf("%d", &num);
	printf("a primeira casa %d e a segunda casa %d\n", fa, fb);
	
	for(a=2; a<num+1; a++){
		
		f=fa+fb;
		printf("%d , %d\n", a, f);
		fa=fb;
		fb=f;
	}
	return(0);
}
