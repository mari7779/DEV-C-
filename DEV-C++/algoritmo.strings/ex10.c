#include <stdio.h>
#include <string.h>

int main() {
    char string1[100], string2[100];
    int res;
    
    printf("digite a primeira string: ");
    gets(string1);
    
    printf("digite a segunda string: ");
    gets(string2);
    
    res = strcmp(string1, string2);
    
    if(res == 0){
    	printf("as strings sao iguais");
	}
	else{
		printf("as strings sao diferentes");
	}
	
	return 0;
}
