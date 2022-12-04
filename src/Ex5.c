#include <stdio.h>
#include <string.h>
#include <stdlib.h>


typedef struct cadastro_est
{
    char nome[101];
    char placa[8];
    char cor[21];
    char turno;
} cadastro;

void leitura(cadastro *vet, int *tam)
{
    int i, loop=1, cont=0;
    for(i=0; i<*tam; i++)
    {
        if(loop==1)
        {
            printf("\n\nvehicle %d:\n", i + 1);
            printf("name: ");
            fflush(stdin);
            fgets(vet[i].nome, 100, stdin);
            printf("color: ");
            fflush(stdin);
            fgets(vet[i].cor, 20, stdin);
            printf("plaque: ");
            fflush(stdin);
            fgets(vet[i].placa, 7, stdin);
            printf("shift: ");
            fflush(stdin);
            scanf("%c", &vet[i].turno);
            printf("\ncontinue -1- stop -0-\n->");
            scanf("%d", &loop);
            cont++;
        }
        else if(loop==0)
        {
            i=*tam;
        }
    }
    *tam = cont;
}

void imprecao(cadastro *vet, int *tam)
{
    int i;
    printf("\nInfo: \n");
    for(i=0; i<*tam; i++)
    {
        printf("\n\tvehicle %d:\n",i+1);
        printf("name: %s"
               "color: %s"
               "plaque: %s"
               "\nshift: %c",vet[i].nome,vet[i].cor,vet[i].placa,vet[i].turno);
    }
}

int main()
{
    printf("Welcome! Enter to 100 vehicle.");
    getchar();
    cadastro x[100];
    int tam;
    tam =100;
    leitura(x,&tam);
    imprecao(x,&tam);


    free(x);

    return 0;
}
