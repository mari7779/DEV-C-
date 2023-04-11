#include <stdio.h>
#include <string.h>

int main() {
    char string[100], reverstring[100];
    int i, j, res = 1;
    
    printf("digite a string: ");
    gets(string);
    
    
    j = strlen(string) - 1;
    
    for (i = 0; i < strlen(string); i++) {
    	if(string[i] != string[j]){
         res = 0;
         break;
         
     }
     j--;	
 }
    if(res == 1){
    	printf("a string e um palindromo. \n");
	}
	else{
		printf("a string nao e um palindromo. \n");
	}
	j = 0;
	
	for(i = strlen(string) - 1; i>= 0; i--) {
		reverstring[j]= string[i];
		j++;
}
	reverstring[j] = '\0';
	printf("a string na ordem inversa fica: %s\n", reverstring);
	return 0;
}
