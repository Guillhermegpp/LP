#include <stdio.h>
 
int main() {
 
    float n;
int c, cont=0;
for(c =0; c < 6 ; c++){
    scanf("%f", &n);
        if(n > 0)
            cont+= 1;
}
printf("%d valores positivos\n", cont);
 
    return 0;
}