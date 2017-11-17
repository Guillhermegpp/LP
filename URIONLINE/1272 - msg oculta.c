#include <stdio.h>
#include <string.h>

int main(){
int s,cont,qt,i,k,j,posicao;
char palavra[1000],muda[1000];
scanf("%d ",&s);
for(cont = 0; cont < s;cont++){
    for (i = 0;i<100;i++){ palavra[i]=0;muda[i] = 0;}
    fgets(palavra, sizeof(palavra), stdin);
    qt = strlen(palavra);

    if (palavra[0] == ' ' && qt == 2){
        printf("\n");
        continue;
    }
    else{
    if (palavra[0] >= 'a' && palavra[0] <= 'z'){
        muda[0] = palavra[0];
        k = 1;}
    else k = 0;
    j = k;
    for(i=k;i<qt;i++)
            if (palavra[i-1] == ' ' && (palavra[i] >= 'a' && palavra[i] <= 'z')){
                muda[j] = palavra[i];
                j++;}

    printf("%s\n", muda);
    }
}

return 0;}


