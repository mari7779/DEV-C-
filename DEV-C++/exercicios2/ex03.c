#include <stdio.h>
#include <locale.h>

int main(void){

setlocale(LC_ALL, "portuguese");
float salario, por, porcentagem, aumento;
salario = 1000;

por = 30;
porcentagem = por/100;
aumento = porcentagem*salario+(salario);
printf("o salário do funcionário com o aumento ficou:%f\n", aumento);
return(0);
}
