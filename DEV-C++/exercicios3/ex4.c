#include<stdio.h>
#include <locale.h>
void main()
{
setlocale(LC_ALL, "portuguese");
int trabalho, prova, media;
trabalho = 4.0;
prova = 4.5;
media = trabalho + prova;

if (media >= 8)
{
printf("%d\n", media);
printf("Aprovado... Parab�ns!");
}
else {
printf("sua m�dia �: %d\n", media);
printf("Ficou de Exame... Estude mais!!!");
}
}
