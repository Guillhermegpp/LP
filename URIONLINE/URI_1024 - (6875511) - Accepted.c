#include <stdio.h>
#include <string.h>

int main(){
int s,cont,qt,i,k;
char palavra[1000],prim[1000],seg[1000];
scanf("%d",&s);
for(cont = 0; cont < s;cont++){
    for (i = 0;i<100;i++){ palavra[i]=0;prim[i] = 0;seg[i]=0;}
    scanf(" %[^\n]s",palavra);
    qt = strlen(palavra);
    for(i = 0;i < qt;i++){ // Primeira Passada
        if (palavra[i] >= 'A' && palavra[i] <= 'Z' || palavra[i] >= 'a' && palavra[i] <= 'z')
            prim[i] = palavra[i] + 3;
        else prim[i] = palavra[i];
    }
    prim[i] = '\0';
    for(i = qt-1,k = 0;i >= 0;i--,k++)// Segunda Passada
        seg[k] = prim[i];
    seg[k] = '\0';

    for(i = qt/2;i<qt;i++)// Terceira Passada
        seg[i] = seg[i]-1;

    printf("%s\n", seg);
}

return 0;}