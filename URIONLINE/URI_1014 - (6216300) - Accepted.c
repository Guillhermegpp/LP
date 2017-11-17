#include <stdio.h>
 
int main() {
 
    double km, l , kml;
    scanf("%lf %lf", &km, &l);
    kml = km/l;
    printf("%.3lf km/l\n", kml);
 
    return 0;
}