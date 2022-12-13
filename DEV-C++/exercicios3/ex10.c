#include<stdio.h>
void main ()
{
int op;
printf ("Digite um numero inteiro:\n");
scanf("%d", &op);
switch (op)
{
case 1:
printf("Entrou no caso 1!\n");//a) se a entrada for 1 a saída é case1
break;
case 2:
printf("Entrou no caso 2!\n");//b) se a entrada for 2 a saida é a case2
default:
printf("Entrou no caso padrao!\n");//c) se a entrada for 3 a sauda é a default
}
}
