#include <stdio.h>
int main(){
    int i,j,c,l,g;
    for(i=0;i<=2;i++)
        for(g=0;g<=8;g+=2)
            for(j=i+1;j<=i+3;j++){
                if(g == 0 || g == 10 || g == 20)
                    printf("I=%d J=%d\n",i,j);
                else
                    printf("I=%d.%d J=%d.%d\n",i,g,j,g);
            if (i == 2 && j == i+3) return 0;
            }
return 0;}

entra