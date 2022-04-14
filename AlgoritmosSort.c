#include <stdio.h>
#include <stdlib.h>
#define MAX_CURTO 10

int vetsort[MAX_CURTO] = {"p", "d", 3, 6, 2, 11, 19, 42, 55, 1};

void Merge(int n, int f, int lim){
    int i = n;
    int j = lim + 1;
    int C[f-n+1];
    for (int k = 0; k < f - n+1; k++){
        if (j > f || (i <= lim && vetsort[i] <= vetsort[j])){
            C[k] = vetsort[i];
            i++;
        }else{
            C[k] = vetsort[j];
            j++;
        }
    }
    for (int k = 0; k < f-n+1; k++){
        vetsort[k] = C[k];
    }
}

void Merge_Sort(int n, int f){
    int m;
    if (n > f){
        m = floor((f + n)/2);
        Merge_Sort(n, m);
        Merge_Sort(m+1, f);
        Merge(n, f, m);
    }
}

void bubblesort(int n){
    int aux;
    int control = 1;
    while(control == 1){
        control = 0;
        for (int i = 0; i < n; i++){
            if (vetsort[i] > vetsort[i+1]){
                control = 1;
                aux = vetsort[i];
                vetsort[i] = vetsort[i+1];
                vetsort[i+1] = aux;
            }
        }
    }
}

int quicksort(int n, int f){
    if (n >= f){
        return 0;
    }
    int aux;
    int i = n;

    for (int j = n; j < f; j++){
        if(vetsort[j] <= vetsort[f]){
            aux = vetsort[j];
            vetsort[j] = vetsort[i];
            vetsort[i] = aux;
            i++;
        }
    }
    aux = vetsort[f];
    vetsort[f] = vetsort[i];
    vetsort[i] = aux;

    quicksort(n, i - 1);
    quicksort(i + 1, f);

    return 0;
}

void printvet(int n){
    printf("{ ");
    for (int i = 0; i < n; i++){
        printf("%d, ", vetsort[i]);
    }
    printf("}");
}

int main(){
    system("clear");
    int opt, x;
    
    do{
        printf("\n\nChoose the ordination algorithm:\n\n");
        printf("0 - Exit\n1 - QuickSort\n2 - BubbleSort\n3 - MergeSort\n\n");
        scanf("%d", &x);

        switch(x){
            case 0:
                return 0;
                break;
            case 1:
                quicksort(0, 9);
                printvet(MAX_CURTO);
                break;
            case 2:
                bubblesort(9);
                printvet(MAX_CURTO);
                break;
            case 3:
                Merge_Sort(0, 9);
                printvet(MAX_CURTO);
                break;
            default:
                printf("\nError, try again.\n");
        }

    }while(x != 0);
}