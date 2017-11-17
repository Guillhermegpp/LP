//GUILHERME PINTO
#include <stdio.h>

typedef struct{
    int dia,mes,ano;
    }data;

typedef struct{
    char nome[10],
        snome[10],
        rg[10],
        sal[10];
    data dn,daadm;
    }func;


int main(){
    func a[100];
    int qt,c;
    puts("Digite a Quantidade de funcionarios a serem cadastrados.");
    scanf("%d",&qt);
    for(c=0;c<qt;c++){
        printf("Nome: ");scanf("%s",a[c].nome);
        printf("Sobrenome: ");scanf("%s",a[c].snome);
        printf("Data Nascimento(dd/mm/aaaa): ");scanf("%d/%d/%d",&a[c].dn.dia,&a[c].dn.mes,&a[c].dn.ano);
        printf("RG: ");scanf("%s",a[c].rg);
        printf("Data de Admissao(dd/mm/aaaa): ");scanf("%d/%d/%d",&a[c].daadm.dia,&a[c].daadm.mes,&a[c].daadm.ano);
        printf("Salario: ");scanf("%s",a[c].sal);
    }
    for(c=0;c<qt;c++){
        printf("\nFuncionario %d\n",c+1);
        printf("Nome: %s\n",a[c].nome);
        printf("Sobrenome: %s\n",a[c].snome);
        printf("Data Nascimento: %d/%d/%d\n",a[c].dn.dia,a[c].dn.mes,a[c].dn.ano);
        printf("RG: %s\n",a[c].rg);
        printf("Data de Admissao: %d/%d/%d\n",a[c].daadm.dia,a[c].daadm.mes,a[c].daadm.ano);
        printf("Salario: %s\n",a[c].sal);
    }
return 0;}
