#include <stdio.h>
#include <string.h>

int main() {
    char dia[4]; 
    printf("digite o dia da semana (seg, ter, qua, qui, sex, sab ou dom): ");
    scanf("%s", dia);

    switch (dia[0]) {
        case 's':
            if (dia[2] == 'g') printf("Segunda-feira\n");
            if (dia[2] == 'x') printf("Sexta-feira\n");
            if (dia[2] == 'b') printf("Sabado\n");
            break;
        case 't':
            printf("Terça-feira\n");
            break;
        case 'q':
			if (dia[2] == 'a') printf("Quarta-feira\n");
            else printf("Quinta-feira\n");
            break;
        case 'd':
            printf("Domingo\n");
            break;
        default:
            printf("Dia da semana inválido\n");
    }
    return 0;
}





