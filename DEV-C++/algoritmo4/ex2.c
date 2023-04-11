
#include<stdio.h>

int main(void){
int num[50], comp=0, i=0;

for(i; i <= 5; i++){
printf("digite um número %d: \n",i);
scanf("%d", &num[i]);

if(num[i] % 2 == 0){
printf("numeros pares: %d: ", num[i]);
}

else{
printf("numeros impares: %d", num[i]);
}
return 0;
}
}
