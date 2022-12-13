#include<stdio.h>
#include <locale.h>

int main (void)
{
 setlocale(LC_ALL, "portuguese");
 int ano_atual, ano_nascimento, idade_atual, idade_em_2026;
 ano_nascimento = 2007;
 ano_atual = 2022;
 idade_atual = ano_atual - ano_nascimento;
 idade_em_2026 = 2026 - ano_nascimento;
 printf("A idade atual é:%d\n", idade_atual);
 printf("A idade na copa de 2026 será de :%d\n", idade_em_2026);
 return(0);
}
