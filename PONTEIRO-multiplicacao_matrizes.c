#include <stdio.h>

int main(){
  int n, i, j, k, A[50][50], B[50][50], C[50][50];
  printf("Digite o tamanho da matriz\n");
  scanf("%d", &n);
  printf("Digite os valores para a primeira matriz:\n");
    for (i=0; i<n; i++)
      for(j=0; j<n; j++)
        scanf("%d", &A[i][j]);

    printf("Digite os valores para a segunda matriz:\n");
    for (i=0; i<n; i++)
      for (j=0; j<n; j++)
        scanf("%d", &B[i][j]);

for (i=0;i<n; i++)
    for (j=0; j<n; j++)
        for (k=0; k<n; k++)
            C[i][j] = C[i][j] + (A[i][k] * B[k][j]);

printf("O Produto das duas matriz e':\n");
    for (i=0; i<n; i++) {
      for (j=0; j<n; j++)
        printf("%d ", C[i][j]);
      printf("\n");
    }

  return(0);
}
