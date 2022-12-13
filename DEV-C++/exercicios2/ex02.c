#include <stdio.h>
#include <locale.h>

int main(void){

setlocale(LC_ALL, "portuguese");
int nota1, nota2, nota3, soma, media;
nota1 = 60;
nota2 = 55;
nota3 = 70;
soma = nota1+nota2+nota3;
media = soma/3;
printf("sua média:%d\n", media);
return(0);
}
