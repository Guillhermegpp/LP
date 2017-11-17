#include <stdio.h>
void med(int v[],double *media,int *moda){
    int c,soma=0,conta=0,cont=0,i;
    for(c=0;c<10;c++){
        soma+= v[c];
        conta = cont;
        cont = 0;
        for(i = 0;i<10;i++){
            if (v[c] == v[i])
                cont++;
        }
        if (cont > conta)
            *moda = v[c];
        }
    if (cont == 0)
        *moda = 404;
    *media = (double)soma/10;

    }

int main(){
int v[10],c,moda;
double media=0;
for(c=0;c<10;c++)
    scanf("%d",&v[c]);
med(v,&media,&moda);

printf("Media: %.2lf \nModa : %d\n", media,moda);

return 0;}
