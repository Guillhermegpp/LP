#include <stdio.h>
 
int main() {
 
    int n,cont;
    for(cont = 0;cont < 10;cont++){
        scanf("%d",&n);
        if (n <= 0){
            printf("X[%d] = 1\n",cont);
        }else
        printf("X[%d] = %d\n",cont,n);

    }
 
    return 0;
}