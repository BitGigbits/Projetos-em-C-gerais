#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct Endereco{
    char ultnome[16];
    char prinome[11];
    char rua[30];
    char cidade[21];
    char estado[3];
    char cep[9];
};

struct Endereco agenda[10];
//Utilizando 10 posicoes pra facilitar o teste.


int compara(const void *a, const void *b){
    return strcmp (((struct Endereco *)a)->ultnome, ((struct Endereco *)b)->ultnome);
}

int main (){
    int i, TAM = 10;
    for (i = 0; i < TAM; i ++){
        printf("Digite o ultnome: ");
        fflush(stdin);
        fgets(agenda[i].ultnome, 16, stdin);
        printf("Digite o prinome: ");
        fflush(stdin);
        fgets(agenda[i].prinome, 11, stdin);
        printf("Digite a rua: ");
        fflush(stdin);
        fgets(agenda[i].rua, 30, stdin);
        printf("Digite a cidade: ");
        fflush(stdin);
        fgets(agenda[i].cidade, 21, stdin);
        printf("Digite o estado: ");
        fflush(stdin);
        fgets(agenda[i].estado, 3, stdin);
        printf("Digite o cep: ");
        fflush(stdin);
        fgets(agenda[i].cep, 9, stdin);
        system("cls");
    }
    qsort(agenda[0].ultnome, TAM, sizeof(struct Endereco), compara);
    for (i = 0; i < TAM; i++){
        printf("%s", agenda[i].ultnome);
        printf("\n");
    }

    return 1;
}
