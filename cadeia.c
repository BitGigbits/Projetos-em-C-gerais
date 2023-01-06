#include <stdio.h>

typedef struct{
    int value;
    struct chain *next;
}chain;

void main(){
    
    chain *p1 = (chain*)malloc(sizeof(chain));
    chain *p2 = (chain*)malloc(sizeof(chain));
    chain *p3 = (chain*)malloc(sizeof(chain));
    chain *p4 = (chain*)malloc(sizeof(chain));

    p1->value = 1;
    p1->next = p2;

    p2->value = 2;
    p2->next = p3;

    p3->value = 3;
    p3->next = p4;

    p4->value = 4;
    p4->next = NULL;

    chain *start = (chain*)malloc(sizeof(chain));
    start = p1;

    while (start != NULL){
        printf("Valor: %i\n", start->value);
        start = start->next;
    } // só para testar se deu tudo correto.

    free(start);
    free(p1);
    free(p2);
    free(p3);
    free(p4);
}