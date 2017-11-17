#include <stdio.h>
int main(){
    double a,b,soma;
    scanf("%lf %lf",&a,&b);
    soma = ((b/a)-1.0)*100;
    printf("%.2lf%%\n",soma);
return 0;}
