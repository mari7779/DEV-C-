#include <stdio.h>
#include <locale.h>
#include <math.h>

int main(void){

setlocale(LC_ALL, "portuguese");
float raio, area, pi, quadrado;
raio = 200;
pi = 3.1415;
quadrado = pow(raio,2);
area = pi*quadrado;

printf("a área do círculo é de: %f\n", area);
return(0);
}

