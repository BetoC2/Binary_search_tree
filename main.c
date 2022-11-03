#include <stdio.h>
#include "Set.h"

int compare(void *a, void *b){
    return *(int*)a - *(int*)b;
}

int main() {
    Set *s = set_new(compare);
    int numbers[100] = {10, 5, 20, 2, 6, 15, 25, 1, 3, 8, 22, 26};

    for(int i = 0; i < 12; i++)
    {
        set_add(s, numbers+i);
    }

    int target;
    for(int i = 0; i < 12; i++){
        printf("\nEsta %d:",set_contains(s,numbers+i));
    }
    target = 4;
    if(!set_contains(s, &target))
        printf("It works!\n");

    imprimir(s);

    return 0;
}