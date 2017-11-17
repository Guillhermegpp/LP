#include <stdio.h>
#include <string.h>

int main(){
int s,cont,qt,i,k,n;
char palavra[1000];
scanf("%d",&s);
for(cont = 0; cont < s;cont++){
    for (i = 0;i<100;i++) palavra[i]=0;
    scanf(" %[^\n]s",palavra);
    scanf("%d", &n);
    qt = strlen(palavra);
    for(i = 0;i < qt;i++)// Primeira Passada
         if(palavra[i] < 'A' + n)
            {
                palavra[i] = 'Z' - n + (palavra[i] - 'A') + 1;
            }
            else
            {
                palavra[i] = palavra[i] - n;
            }


    printf("%s\n", palavra);
}

return 0;}



