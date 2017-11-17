#include <stdio.h>
int main(){
    int c,s;
    char materia[1000];
    scanf("%d",&s);
    for(c=0;c<s;c++)
        scanf(" %[^\n]s",materia);
    printf("Ciencia da Computacao\n");
return 0;}
