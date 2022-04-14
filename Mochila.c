#include <stdio.h>
#include <string.h>
#define MAX 1000

int itens[3] = {100, 200, 300};
int weight[3] = {1, 2, 3};

int max(int x, int y){
    if (x > y){
        return x;
    }
    return y;
}

int Mochila(int w, int n, int mochila[][MAX]){
    if (mochila[w][n] != -1){
        return mochila[w][n];
    }
    if (w == 0 || n == 0){
        mochila[w][n] = 0;
        return mochila[w][n];
    }
    if (weight[n-1] > w){
        return Mochila(w, n-1, mochila);
    }
    mochila[w][n] =  max(Mochila(w, n-1, mochila), itens[n-1] + Mochila(w - weight[n-1], n - 1, mochila));
    printf("%d | ", mochila[w][n]);
    return mochila[w][n];
}

int main(){
    int mochila[MAX][MAX];

    for (int h = 0; h < MAX; h++){
        for (int j = 0; j < MAX; j++){
            mochila[h][j] = -1;
        }
    }

    int x = Mochila(4, 3, mochila);
    printf("%d", x);

    return 0;
}