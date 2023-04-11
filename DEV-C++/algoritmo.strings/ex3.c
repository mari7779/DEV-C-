#include <stdio.h>
#include<string.h>
int main() {
    char palav[50];
    int num;
    
    
	printf("digite uma palavra: ");
    scanf("%s", &palav);
	
	num = strlen(palav);
    printf("o tamanho da sua palavra é de: %d", num);
    
    return(0);
}
    
