#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#define MAX 1000

int memo[MAX];
int a[8] = {6, 2, 5, 1, 7, 4, 8, 3};
int lismax = 0;

int max(int x, int y){
    if (x > y){
        return x;
    }else{
        return y;
    }
}

int lis(int i){
    if (memo[i] != -1){
        return memo[i];
    }
    memo[i] = 1;
    for (int j = 0; j < i; j++){
        if (a[j] <= a[i]){
            memo[i] = max(memo[i], lis(j) + 1);
        }
    }
    lismax = max(lismax, memo[i]);
    return lismax;
}

int main(){
    system("clear");
    memset(memo, -1, MAX-1);
    memo[0] = 1;
    int u = 7;
    int yy = lis(u);
    printf("A maior subsequencia eh %d\n\n", yy);

    return 0;
}