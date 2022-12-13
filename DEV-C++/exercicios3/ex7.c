#include<stdio.h>
int main(void)
{
int num;
char conceito;
printf("digite um numero inteiro: \n");
scanf("%d", &num);

if (2 % num == 0)
{
	printf("seu numero %d\n e par", num);
}
else
{
	printf("seu numero %d\n e impar", num);
}
}
