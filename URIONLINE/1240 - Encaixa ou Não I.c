#include <stdio.h>
#define TRUE 1
#define FALSE 0

int encaixa(int a, int b) {

    while (b != 0 && a % 10 == b % 10) {
        a = a/10;
        b = b/10;
    }

    if (b == 0)
        return TRUE;
    else
        return FALSE;
}

int main() {
    int a, b, s,c,subseq, maior, menor;

    scanf("%d", &s);
    for(c=0;c<s;c++){
    scanf("%d %d", &a, &b);

    subseq = FALSE;
    if (encaixa(a, b) == TRUE)
        printf("encaixa\n");
    else
        printf("nao encaixa\n");
}
  return 0;
}
