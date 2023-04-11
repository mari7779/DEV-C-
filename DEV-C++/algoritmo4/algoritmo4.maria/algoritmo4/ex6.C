#include<math.h>
#include<stdio.h>

	int main(void){
	
		int num;
		
		printf("escolha um numero n");
		scanf("%d", &num);
		
		while(num != 1){
			
				if(num%2 == 0){
					num = num/(2);
					printf("%d ->", num);
}
				else{
					num= 3*num + 1;
					printf("%d ->", num);
		}

			}
		
		return(0);

		}
