#include <stdio.h>
#include <string.h>

int main() {
    char string[50];
    int comp;
    
    printf("digite uma palavra: ");
    gets(string);
    
    comp = strlen(string);
    
    printf("o comprimento da sua string é de: %d\n", comp);
    
    return(0);
}
