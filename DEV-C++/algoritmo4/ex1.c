#include<stdio.h>
#include<math.h>

int main(void){
int num[50];
int i = 0;
int comp = 0;


for (i; i <= 1; i++){
printf("Digite o valor na posi��o %d do vetor: \n",i);
scanf("%d", &num[i]);

if(num[i] == num[0]){
comp = num[i];

if(num[i] < comp){
comp = num[i];


}
printf("O menor numero �: %d", comp);
}
for (i; i <= 1; i++){
printf("O valor na posi��o %d do vetor eh: %d \n",i,num[i]);

return 0;
}
/* #include<stdio.h>
#include<math.h>
int main(void){
	int num[50];
	int i = 0;
	int comp = 0;
	int vetores = 0;
	
	printf("Quantos vetores voc� deseja? ");
	scanf("%d", &vetores);

	for (i; i <= vetores; i++){
		printf("Digite o valor na posi��o %d do vetor: \n",i);
		scanf("%d", &num[i]);
		if(num[i] == num[0]){
			comp = num[i];
			if(num[i] < comp){
			comp = num[i];	
		}	
	}
	
	}
	for (i; i <= 1; i--){
		printf("O valor na posi��o %d do vetor eh: %d \n",i,num[i]);
	}
	printf("O menor numero �: %d\n", comp);

	return 0;
} //
