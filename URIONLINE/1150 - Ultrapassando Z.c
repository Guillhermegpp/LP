#include <stdio.h>

int main() {

    int x,z=-1000,cont=1,k;
    scanf("%d",&x);
    while(z<=x){
        scanf("%d",&z);

    }k = x;
    while(k<z){
        k+=x;
        x++;
        cont++;

    }

    printf("%d\n", cont);


    return 0;
}
