#include <stdio.h>
#define MAX 100

void maior(int A[MAX][MAX], int n, int *k, int *Lin, int *Col){
    int l,c,maior=0,maiorl,maiorc;
    for(l=0;l<n;l++)
        for(c=0;c<n;c++)
            if (A[l][c] > maior){
                maior = A[l][c];
                maiorl = l;
                maiorc = c;
            }
        A[maiorl][maiorc] = -1;

     *k = maior;
     *Lin = maiorl;
     *Col = maiorc;

}
int main(){
    int n, A[MAX][MAX],k,Lin,Col;
    int c,i;
    scanf("%d",&n);
    for(c=0;c<n;c++)
        for(i=0;i<n;i++)
            scanf("%d",&A[c][i]);

    printf("Elem  Lin  Col\n");
    for(c=0;c<n*n;c++){
        maior(A,n,&k,&Lin,&Col);
        printf(" %d  %d   %d\n",k,Lin,Col);
        }


return 0;
}


