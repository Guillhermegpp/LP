#include <stdio.h>
int main(){
    int s;
    scanf("%d",&s);
    while (s>0){
        char v[10];
            scanf("%s",v);
            if (strlen(v) == 5)
                printf("3\n");
            else{
                if ((v[0] == 'o' && v[1] == 'n') || (v[0] == 'o' && v[2] == 'e') || (v[1] == 'n' && v[2] == 'e') )
                    printf("1\n");
                else
                    printf("2\n");
            }
        s--;
    }
return 0;}
