#include <stdio.h>
int main(){
    int n,c,ns,cont =0;
    scanf("%d",&n);
    for (c=0;c<5;c++){
        scanf("%d",&ns);
        if (ns == n) cont++;

    }
    printf("%d\n",cont);
return 0;}
