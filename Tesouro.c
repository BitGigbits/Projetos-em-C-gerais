#include <stdio.h>
#include <string.h>
#define MAX 250

//Projeto -> Existem tesouros submersos em que são definidos pelos pares (Profundidade, Quantidade de Ouro). 
//Coletar esses tesouros levam 9 * Profundidade de tempo em segundos. Existe um cilindro de ar que permite ficar exatamente t segundos submerso.
//Determinar a quantidade total de tesouro possível a ser coletado dado um conjunto de tesouros e uma entrada t de tempo.

int ouro[] = {25, 45, 75};
int prof[] = {4, 6, 8};
int t_sub = 108;
int memo[MAX][MAX];

int max(int x, int y){
    if (x > y){
        return x;
    }
    return y;
}

int treasure(int t, int n){
    if (memo[t][n] != -1){
        return memo[t][n];
    }
    if (t == 0 || n == 0){
        memo[t][n] = 0;
        return memo[t][n];
    }
    if (9*prof[n-1] > t){
        memo[t][n] = treasure(t, n-1);
        return memo[t][n];
    }
    memo[t][n] =  max(treasure(t, n-1), ouro[n-1] + treasure(t - 9*prof[n-1], n - 1));
    return memo[t][n];
}

int main(){

    for (int h = 0; h < MAX; h++){
        for (int j = 0; j < MAX; j++){
            memo[h][j] = -1;
        }
    }
    printf("%d\n", treasure(t_sub, 3));

    return 0;
}
