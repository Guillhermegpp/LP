#include <stdio.h>
 
int main() {
 
    int n,c,g;
    scanf("%d",&n);
    printf("N[0] = %d\n",n);
    for (c = 1; c < 10; c++){
        g = n*2;
        printf("N[%d] = %d\n",c,g);
        n = g;
    }
 
    return 0;
}