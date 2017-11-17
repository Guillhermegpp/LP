#include <stdio.h>
int main(){
    int n,a,b,x,y,c;
    while (scanf("%d",&n) != 0){
        if (n == 0) return 0;
        a = 0;b=0;
        for(c = 0;c < n;c++){
            scanf("%d %d",&x,&y);
            if ( x > y) a++;
            else if (x < y) b++;}
        printf("%d %d\n",a,b);
    }
return 0;}
