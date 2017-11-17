#include <stdio.h>
#include <string.h>

int main(){
    int n,s;
    scanf("%d",&s);
    while (s>0){
    char nome[100];
    scanf("%s",nome);
    scanf("%d",&n);
    if (strlen(nome) == 4 && (nome[0] == 'T' && nome[1] == 'h' && nome[2] == 'o' && nome[3] == 'r'))
        printf("Y\n");

    else printf("N\n");
    s--;

    }
return 0;}
