#include <stdio.h>
#include <stdlib.h>
#include <string.h>

long int const N = 10000;
int escadamemo[N];
int escadaKmemo[N];
int moedas[] = {1, 7, 17, 27, 33, 49};
int quantmoedas = 6;
int trocomemo[N];
int itens[4] = {700, 800, 900, 1100};
int weight[4] = {5, 9, 3, 10};

int max(int x, int y){
    if (x > y){
        return x;
    }
    return y;
}

int Mochila(int w, int n){
    if (w == 0 || n == 0){
        return 0;
    }
    return max(Mochila(w, n-1), itens[n-1] + Mochila(w - weight[n-1], n - 1));
}

int troco(int x){
    if (x == 0){
        return 0;
    }
    if (trocomemo[x] != -1){
        return trocomemo[x];
    }
    for (int i = quantmoedas-1; i > -1; i--){
        if (moedas[i] <= x){
            trocomemo[x] = 1 + troco(x - moedas[i]);
            break;
        }
    }
    return trocomemo[x];
}

int Escada(int n){
    escadamemo[0] = 1;
    escadamemo[1] = 1;

    if (escadamemo[n] == -1){
        escadamemo[n] = Escada(n-1) + Escada(n-2);
    }
    return escadamemo[n];

}

int EscadaK(int n, int k){
    if (n < 0){
        return 0;
    }
    if (n == 0){
        return 1;   
    }
    if (escadaKmemo[n] == 0){
        for (int i = 1; i <= k; i++){
            escadaKmemo[n] = escadaKmemo[n] + EscadaK(n-i, k);
        }
    }
    return escadaKmemo[n];
}

int Coelho(n){
    if (n <= 2){
        return 1;
    }else{
        return Coelho(n-1) + Coelho(n-2);
    }
}

void preenchevet(int vet[], int const n, int p){
    int i;

    for (i = 0; i < n; i++){
        vet[i] = p;
    }
}

int main(){
    int x, opt, opt2;

    preenchevet(escadamemo, N, -1);
    preenchevet(trocomemo, N, -1);

    do{
        system("clear");
        printf("Escolha o programa que deseja executar: ");
        printf("\n\n0 - Sair do programa\n1 - Coelhos\n2 - Escada\n3 - Troco\n4 - Escada com k passos\n");

        fflush(stdin);
        scanf("%d", &x);

        switch(x){
            case 0:
                printf("\n\nPressione qualquer outra tecla para sair.\n");
                break;
            case 1:
                printf("\nDigite quantos meses deseja ver na sequencia dos coelhos: \n\n");
                scanf("%d", &opt);
                printf("%d\n", Coelho(opt));
                break;
            case 2:
                printf("\nDigite a quantidade de degraus da escada: \n\n");
                scanf("%d", &opt);
                printf("%d\n", Escada(opt));
                break;
            case 3:
                printf("\nDigite o valor para calcular o minimo de moedas que se pode dar o troco: \n\n");
                scanf("%d", &opt);
                printf("%d\n", troco(opt));
                break;
            case 4:
                printf("Digite a quantidade de degraus da escada e passos maximos por degrau: \n\n");
                scanf("%d", &opt);
                fflush(stdin);
                scanf("%d", &opt2);
                printf("%d", EscadaK(opt, opt2));
                preenchevet(escadaKmemo, N, 0);
                break;
            default:
                printf("Erro. Tente Novamente.\n");
        }
        fflush(stdin);
        getchar();

    }while(x != 0);

    return 0;
}