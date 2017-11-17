#include <stdio.h>
 
int main() {
 
    int s,cont,k,l;
    float n;
    scanf("%d",&s);
    for(l=0;l<s;l++){
        cont = 0;
        k = 2;
        scanf("%f",&n);
        while (n>1){
            n = n/k;
             ++cont;

        }

        printf("%d dias\n",cont);
    }
 
    return 0;
}