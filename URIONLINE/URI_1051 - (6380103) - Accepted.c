#include <stdio.h>
 
int main() {
 
    float sal,tira,tira1,tira2;
    scanf("%f",&sal);
    if (sal <= 2000)
        printf("Isento\n");
    else if (sal > 2000.01 && sal <= 3000){
        tira = (sal - 2000) * 0.08;
        printf("R$ %.2f\n", tira);}
    else if (sal > 3000.01 && sal <= 4500){
        tira = 1000 * 0.08;
        tira1 = tira + ((sal - 3000)* 0.18);
        printf("R$ %.2f\n", tira1);}
    else if (sal > 4500){
        tira = 1000 * 0.08;
        tira1 = 1500* 0.18;
        tira2 = tira1 + tira + ((sal - 4500)*0.28);
        printf("R$ %.2f\n", tira2);}
 
    return 0;
}