#include <stdio.h>
#include <stdlib.h>

//Insatisfeito com a complexidade do programa. Mas foi o que deu por agora.

int fatmemo[50];

int fat(int f){
    fatmemo[0] = 0;
    fatmemo[1] = 1;

    if (f == 1 || f == 0){
        return 1;
    }else{
        if(fatmemo[f] == -1){
            fatmemo[f] = f * fat(f-1);
            return fatmemo[f];
        }else{
            return fatmemo[f];
        }
    }
}

int comb(int n, int p){
    int resp = fat(n)/(fat(p)*fat(n - p));
    return resp;
}

int triangulo_pascal(int n){
    int mat[n][n];

    if (n == 1){
        return 1;
    }else{
        int control;
        for(int i = 0; i < n; i++){
            control = 0;
            while (control <= i){
                mat[i][control] = comb(i, control);
                printf("%3d ", mat[i][control]);
                control++;
            }
            printf("\n");
        }
    }
}

int main(){
    system("clear");
    int x = 8;
    int resp;

    for (int t = 0; t < 50; t++){
        fatmemo[t] = -1;
    }

    triangulo_pascal(8);

    return 0;
}