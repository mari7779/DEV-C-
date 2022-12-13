#include <stdio.h>
#include <locale.h>

int main(void){

setlocale(LC_ALL, "portuguese");
int base, altura, area;
base = 50;
altura = 20;
area = base*altura/2;
printf("a área do triangulo é:%d\n", area);
return(0);
}
