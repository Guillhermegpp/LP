#include <stdio.h>
int main(){
    int s,c,n;
    scanf("%d",&s);
    for(c=0;c<s;c++){
        scanf("%d",&n);
        if(n%2 == 0)
            printf("0\n");
        else printf("1\n");
    }
return 0;}
