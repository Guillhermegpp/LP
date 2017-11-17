#include <stdio.h>
 
int main() {
 
    int i,k,j=10,g=1,c=0;
    double M[12][12], soma=0,media=0;
    char O;
    scanf("%c",&O);
    for(k = 0; k < 12;k++){
            for(i=0;i < 12;i++){
                scanf("%lf",&M[k][i]);
                }
    }
    for(k = 0; k <= 4;k++){
        for (i = g;i <= j; i++){
            soma+=M[k][i];
            c++;
        }
        j-= 1;
        g+= 1;
    }

    if(O == 'S') {
        printf("%.1lf\n",soma);
    }
    else if (O == 'M') {
        media = soma/c;
        printf("%.1lf\n",media);
    }
 
    return 0;
}