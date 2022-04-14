#include <stdio.h>
#include <math.h>

int vet[10] = {5, 6, 12, 15, 9, 3, 19, 2, 14, 5};
int mm[2] = {0, 0};

void minmax(int n, int f){
    if (n > f){
        return;
    }
    if (n == f){
        mm[0] = vet[n];
        mm[1] = vet[n];
    }
    if (f == n+1){
        if (vet[f] > vet[n]){
            if (vet[f] > mm[1]){
                mm[1] = vet[f];
            }
            if (vet[n] < mm[0]){
                mm[0] = vet[n];
            }
        }
    }
    int d = floor((n + f)/2);
    minmax(n, d);
    minmax(d+1, f);
}

int main(){
    minmax(0, 9);

    printf("min: %d, max: %d\n", mm[0], mm[1]);
    return 0;
}