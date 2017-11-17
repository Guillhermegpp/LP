//GUILHERME PINTO
#include <stdio.h>

typedef struct{
        int num;
        int den;
        }fracao;

void echo(fracao a){
        printf("%d/%d",a.num,a.den);}

fracao neg(fracao a){
    fracao n;
    n.num = -a.num;
    n.den = a.den;
    return n;
}

fracao soma(fracao a,fracao b){
    fracao frac;
    frac.num = a.num*b.den + b.num*a.den;
    frac.den = a.den*b.den;
    return frac;
}

fracao sub(fracao a,fracao b){
    fracao frac;
    frac.num = a.num*b.den - b.num*a.den;
    frac.den = a.den*b.den;
    return frac;
}

fracao div(fracao a,fracao b){
    fracao frac;
    frac.num = a.num*b.den;
    frac.den = a.den*b.num;
    return frac;
}

fracao mult(fracao a,fracao b){
    fracao frac;
    frac.num = a.num*b.num;
    frac.den = a.den*b.den;
    return frac;
}
fracao simplifica(fracao a){
    int menor,i;
    fracao simp;
    if (a.num <= a.den) menor = a.num; else menor = a.den;
    for(i=menor;i>1;i--){
        if (a.num%i == 0 && a.den%i == 0){
            simp.num= a.num/i;
            simp.den= a.den/i;
            break;
        }
    }
        return simp;
    }

int main(){
    int conta,s,maior,i;
    fracao a,b,frac,simp;
    char g;
    printf("Escolha as Opcoes:\nSomar(0) - Subtrair(1) - Multiplicar(2) - Dividir(3) - Negar(4)\n");
    scanf("%d",&s);
    if (s == 4){
        printf("Digite a fracao: (N/N)\n");
        scanf("%d/%d",&a.num,&a.den);
        frac = neg(a);
    }
    else{
    printf("Digite a primeira fracao: (N/N)\n");
        scanf("%d/%d",&a.num,&a.den);
    printf("Digite a segunda fracao: (N/N)\n");
        scanf("%d/%d",&b.num,&b.den);

    if (s == 0){//SOMA
        frac = soma(a,b);
    }
    else if(s == 1){//SUB
        frac = sub(a,b);
    }
    else if(s == 2){//MULT
        frac = mult(a,b);
    }
    else if(s == 3){//DIV
        frac = div(a,b);
    }

    }
    echo (frac);

    simp = simplifica(frac);
    if (simp.num != frac.num)
        {printf(" = ");echo (simp);}




return 0;
}
