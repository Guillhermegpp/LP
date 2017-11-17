#include <stdio.h>
 
int main() {
 
    int codigo1 , codigo2, n1, n2;
    float v1, v2, total;
    scanf("%d %d %f", &codigo1 ,&n1, &v1);
    scanf("%d %d %f", &codigo2 ,&n2, &v2);
    total = (n1*v1)+(n2*v2);
    printf("VALOR A PAGAR: R$ %.2f\n", total);
 
    return 0;
}