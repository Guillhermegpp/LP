#include <stdio.h>

int main(){
int n,botas[10000],c,cont=0,i;
char num[10000];
while(scanf("%d",&n) != EOF){
cont = 0;
for(c=0;c<n;c++){
    scanf("%d %c",&botas[c],&num[c]);

}

for(c=0;c<n;c++)
    for(i=0;i<n;i++){
        if(botas[c] == botas[i] && num[c] != num[i]){
            cont++;
            botas[c] = NULL;
            botas[i] = NULL;
            break;
        }
    }printf("%d\n",cont/2);
}

return 0;
}