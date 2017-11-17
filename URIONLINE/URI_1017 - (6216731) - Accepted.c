#include <stdio.h>
 
int main() {
 
   double t,kmh, gasto;
    scanf("%lf %lf", &t,&kmh);
    gasto = (t * kmh) / 12;
    printf("%.3lf\n", gasto);
 
    return 0;
}