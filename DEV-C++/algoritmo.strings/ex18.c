#include<stdio.h>
#include <string.h>

int main() {
    char string1[100], string2[100];
    int com;
    
    printf("Digite a primeira string: ");
    gets(string1);

    printf("Digite a segunda string: ");
    gets(string2);

    if (strcmp(string1, string2) < 0) {
    	
    	printf("a primeira string é menor, essa e a string em ordem alfabetica: %s", string1);
    }
    else if(strcmp(string1, string2) > 0){
    	printf("a segunda string é menor, essa e a string em ordem alfabetica: %s", string2);
	} else {
		printf("as strings sao iguais");
	}
	return(0);
}
