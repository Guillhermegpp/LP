#include <stdio.h>
 
int main() {
 
    int j ,n=5, i;
    for(i=1;i<=9;i+=2){
        n+=2;
        for(j=n;j>=n-2;j--){
        printf("I=%d J=%d\n",i,j);

        }
    }
 
    return 0;
}