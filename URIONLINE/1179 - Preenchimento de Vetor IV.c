#include <stdio.h>
int main(){
    int c,i,par[15],impar[15];
    int j=0,k=0,comeca=0;
    for(c=0;c<15;c++){
        scanf("%d",&i);
        if (i%2 == 0){
            par[k] = i;
            k++;
            if (c == 0) comeca = 2;
        }
        else{
            impar[j] = i;
            j++;
            if (c == 0) comeca = 1;
        }
    }
    if (comeca == 2){
        if (k >=5 )
            for(c=0;c<5;c++)
            printf("par[%d] = %d\n",c,par[c]);
        else
            for(c=0;c<k;c++)
            printf("par[%d] = %d\n",c,par[c]);
        if (j >=5 )
            for(c=0;c<5;c++)
            printf("impar[%d] = %d\n",c,impar[c]);
        else
            for(c=0;c<j;c++)
            printf("impar[%d] = %d\n",c,impar[c]);
    }
    else{
        if (j >=5 )
            for(c=0;c<5;c++)
            printf("impar[%d] = %d\n",c,impar[c]);
        else
            for(c=0;c<j;c++)
            printf("impar[%d] = %d\n",c,impar[c]);
        if (k >=5 )
            for(c=0;c<5;c++)
            printf("par[%d] = %d\n",c,par[c]);
        else
            for(c=0;c<k;c++)
            printf("par[%d] = %d\n",c,par[c]);

    }
    for(c=5,i=0;c < j;c++,i++){
        if(c == 10)i = 0;
        printf("impar[%d] = %d\n",i,impar[c]);}
    for(c=5,i=0;c < k;c++,i++){
        if(c == 10)i = 0;
        printf("par[%d] = %d\n",i,par[c]);}


return 0;}
