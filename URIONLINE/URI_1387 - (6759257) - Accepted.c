#include <stdio.h>

int main(){
    int fo,fa,soma;
    while (scanf("%d %d",&fo,&fa) != 0){
        if (fo == fa && fa == 0)return 0;
        soma = fo+fa;
        printf("%d\n",soma);
    }


    return 0;
}