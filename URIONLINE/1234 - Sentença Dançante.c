#include <stdio.h>
#include <string.h>

int main(){
    char palavra[51];
    int c,n,i;
    while (gets(palavra) != NULL) {
    for(c = 0,i=0;c < strlen(palavra);c++)
            if (palavra[c] >= 'A' && palavra[c] <= 'Z')
                palavra[c] += 32;

    for(c = 0,i=1;c < strlen(palavra);c++){
        if (palavra[c] != ' '){
            if ((palavra[c] >= 'a' && palavra[c] <= 'z') && i == 1){
                palavra[c] -= 32;
                i = 2;
            }
            if ((palavra[c] >= 'a' && palavra[c] <= 'z') && i == 2){
                palavra[c] = palavra[c];
                i = 1;}
        }

    }
    printf("%s \n", palavra);
    }
return 0;}
