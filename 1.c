# LP
Exercicios de LP
1)
#include <stdio.h>
#include <stdlib.h>

int main() {
    int n,p;
    scanf("%d",&n);
    while (n != 0){
        p = n * n;
        printf("%d ao quadrado = %d\n",n, p);
        scanf("%d",&n);
    }
    return 0; }
