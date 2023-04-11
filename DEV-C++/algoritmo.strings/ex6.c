#include <stdio.h>
#include <string.h>

int main() {
    char palavra[50], car;
    int i, vog = 0;

    printf("digite uma palavra: ");
    gets(palavra);

    printf("digite um caractere: ");
    scanf(" %c", &car);

    for(i=0; i< strlen(palavra); i++) {
        if(palavra[i]=='a'|| palavra[i]=='e'|| palavra[i]=='i'|| palavra[i]=='o'|| palavra[i]=='u') {
            vog++;
            palavra[i] = car;
        }
    }

    printf("a palavra digitada possui %d vogais\n", vog);
    printf("palavra modificada: %s\n", palavra);

    return 0;
}
