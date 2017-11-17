#include <stdio.h>
 
int main() {
 
    int n, a,m,d;
    scanf("%d", &n);
    a = n / 365;
    m = (n-(a*365))/30;
    d = (n -(a*365 + m*30))/1;

    printf("%d ano(s)\n", a);
    printf("%d mes(es)\n", m);
    printf("%d dia(s)\n", d);
 
    return 0;
}