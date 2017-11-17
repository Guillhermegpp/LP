#include <stdio.h>
#include <stdlib.h>

int main(){
    int c,s,cont,i;
    int pa,pb;
    double g1,g2;
    scanf("%d",&s);
    for(c = 0;c<s;c++){
        i = 0;
        cont = 0;
        scanf("%d %d %lf %lf",&pa,&pb,&g1,&g2);
        while(pa <= pb){
        pa+= pa*(g1*0.01);
        pb+= pb*(g2*0.01);
        cont++;
        if (cont > 100){
            i = 1;
            break;
        }
        }
        if (i == 1)printf("Mais de 1 seculo.\n");
        else printf("%d anos.\n",cont);
    }
return 0;
}
