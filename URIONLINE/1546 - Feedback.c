#include <stdio.h>
int main(){
    int n,k,ks;
    scanf("%d",&n);
    while(n>0){
        scanf("%d",&k);
        while(k>0){
            scanf("%d",&ks);
            if (ks == 1)
                printf("Rolien\n");
            if (ks == 2)
                printf("Naej\n");
            if (ks == 3)
                printf("Elehcim\n");
            if (ks == 4)
                printf("Odranoel\n");
        k--;
        }

    n--;
    }
return 0;}
