#include <stdio.h>
 
int main() {
 
    double x1, y1, x2, y2, soma;
    scanf("%lf %lf %lf %lf", &x1,&y1,&x2,&y2);
    soma = sqrt(pow(x2 - x1,2)+ pow(y2-y1,2));
    printf("%.4lf\n", soma);
 
    return 0;
}