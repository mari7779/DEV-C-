#include <stdio.h>
#include <string.h>

int main() {
    char string[50], novogaiss[50];
    int i, v= 0;
    
    printf("digite uma palavra: ");
    gets(string);
    
    for(i=0; i< strlen(string); i++) {
        if(string[i]!='a' && string[i]!='e'&& string[i]!='i'&& string[i]!='o'&& string[i]!='u' && string[i]!='A' && string[i]!='E'&& string[i]!='I'&& string[i]!='O'&& string[i]!='U') {

        	novogaiss[v]=string[i];
        	v++;
        }
    }
    novogaiss[v]= '\0';
    printf("sua string sem vogais fica: %s\n", novogaiss);
    return(0);
}
