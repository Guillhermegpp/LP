#include <stdio.h>
int main(){
    char frase[] = {'L','I','F','E',' ','I','S',' ','N','O','T',' ','A',' ','P','R','O','B','L','E','M',' ','T','O',' ','B','E',' ','S','O','L','V','E','D'};
    int n,c;
    scanf("%d",&n);
    for(c=0;c<n;c++)
        printf("%c",frase[c]);
    printf("\n");
return 0;}
