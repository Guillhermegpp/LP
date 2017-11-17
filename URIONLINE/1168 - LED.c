#include <stdio.h>
#include <string.h>

int main(){
    int s,cont,i,k;
    char n[10000];
    scanf("%d",&s);
    while(s>0){
        scanf("%s",n);
        k = 0;
        for(i=0;i<strlen(n);i++){
        if (n[i] == '0') k+=6;
        if (n[i] == '1') k+=2;
        if (n[i] == '2') k+=5;
        if (n[i] == '3') k+=5;
        if (n[i] == '4') k+=4;
        if (n[i] == '5') k+=5;
        if (n[i] == '6') k+=6;
        if (n[i] == '7') k+=3;
        if (n[i] == '8') k+=7;
        if (n[i] == '9') k+=6;
        }


        printf("%d leds\n",k);
        s--;
    }
    return 0;
    }
