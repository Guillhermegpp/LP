#include <stdio.h>

int main(){
    int dia1, dia2, hr1, hr2, min1, min2, seg1, seg2, total1, total2, total, diaTot, hrTot, minTot, segTot;
    char d1[4], d2[4], pont1[2], pont2[2], pont3[2], pont4[2];

    scanf("%s %d", &d1, &dia1);

    scanf("%d %s %d %s %d", &hr1, &pont1, &min1, &pont2, &seg1);

    scanf("%s %d", &d2, &dia2);
    scanf("%d %s %d %s %d", &hr2, &pont3, &min2, &pont4, &seg2);

    total1 = dia1*60*60*24 + hr1*60*60 + min1*60 + seg1;
    total2 = dia2*60*60*24 + hr2*60*60 + min2*60 + seg2;
    total = total2 - total1;

    diaTot = total/(60*60*24);
    hrTot = (total%(60*60*24))/(60*60);
    minTot = ((total%(60*60*24))%(60*60))/60;
    segTot = ((total%(60*60*24))%(60*60))%60;

    printf("%d dia(s)\n", diaTot);
    printf("%d hora(s)\n", hrTot);
    printf("%d minuto(s)\n", minTot);
    printf("%d segundo(s)\n", segTot);

    return 0;
}

