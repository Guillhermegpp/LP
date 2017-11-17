#include <stdio.h>
 
int main() {
 
    int x,y,k,c;
    scanf("%d %d",&x,&y);
    for (c = 1;c<=y;c){
        for(k=1;k<=x;k++){
            if (c == y){
                printf("%d\n",c);return 0;
            }
            if (k == x)
                printf("%d\n",c);
            else
                printf("%d ",c);


        c++;}
    }
 
    return 0;
}