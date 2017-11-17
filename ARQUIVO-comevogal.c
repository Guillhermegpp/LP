#include <stdio.h>

int main(int argc,char *argv[]){
    FILE *E;
    char ch;
    if (argc >= 2){
        E = fopen(argv[1],"r");
        if ((E!= NULL)){
            while ((ch = fgetc(E))!= EOF)
                if (ch == 'a' ||
                    ch == 'e' ||
                    ch == 'i' ||
                    ch == 'o' ||
                    ch == 'u');
                else {
                    printf("%c",ch);
                }

        printf("\n");
        }
        else printf("ERRO de abertura\n");
        fclose(E);
    }
    else
    printf("uso: contapalavra <arquivo.tipo>\n");




return 0;}
