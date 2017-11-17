#include <stdio.h>

int main(int argc,char *argv[]){
    FILE *E;
    int c,cont=0;
    char ch;
    if (argc >= 2){
        E = fopen(argv[1],"r");
        if ((E!= NULL)){
            while ( (ch = fgetc(E))!= EOF)
                if (ch == ' '){cont++;};

        printf("%d palavras", cont+1);
        }
        else printf("ERRO de abertura\n");
        fclose(E);
    }
    else
    printf("uso: contapalavra <arquivo.tipo>\n");
return 0;}
