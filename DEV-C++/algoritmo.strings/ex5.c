#include <stdio.h>
#include<string.h>
int main() {
    char palav[50], i;
    int tam;
    
    
	printf("digite uma palavra: ");
    scanf("%s", &palav[i]);
	
	tam  = strlen(palav);
    
    
    
    printf("essa palavra na ordem inversa: ");
    for(i=tam -1 ; i>=0; i--) {
        printf("%c ", palav[i]);
    }
    

    return(0);
}


