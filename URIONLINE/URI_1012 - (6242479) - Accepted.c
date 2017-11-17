#include <stdio.h>
 
int main() {
 
   double a,b,c,ex_a,pi=3.14159, ex_b,ex_c,ex_d,ex_e;
    scanf("%lf %lf %lf", &a, &b, &c);
    ex_a = a*c*0.5;
    ex_b = pi * (c*c);
    ex_c = ((a+b)*c)/2;
    ex_d = b*b;
    ex_e = a*b;

    printf("TRIANGULO: %.3lf\n" , ex_a);
    printf("CIRCULO: %.3lf\n" , ex_b);
    printf("TRAPEZIO: %.3lf\n" , ex_c);
    printf("QUADRADO: %.3lf\n" , ex_d);
    printf("RETANGULO: %.3lf\n" , ex_e);
 
    return 0;
}