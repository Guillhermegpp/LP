#include <stdio.h>
 
int main() {
 
    int n,j=60;
    printf("I=1 J=%d\n",j);
    for(n=4;j > 0;n+= 3){
        j-=5;
        printf("I=%d J=%d\n",n,j);
    }
 
    return 0;
}