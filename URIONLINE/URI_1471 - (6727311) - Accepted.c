#include <stdio.h>
#define MAX 10000

int main() {
    int n,r,rs[MAX],i,l,flag,h,p[MAX];

    while(scanf("%d %d",&n,&r) > 0){
        h = 1;
        for(i = 1;i <= r;i++){ rs[i]=0;p[i]=0;}

        for (i = 1;i <= r;i++)
            scanf("%d", &rs[i]);

        if (n == r) printf("*\n");
        else{
        for (i = 1;i<=n;i++){
            flag = 0;
            for (l = 1;l<=r;l++)
            if (i == rs[l]){
                flag = 1;
                continue;
            }
            if (flag == 0){
                p[h] = i;
                h++;
            }
        }
        for(i = 1; i < h;i++){
            printf("%d ",p[i]);
        }
        printf("\n");

        }


    }
return 0;}