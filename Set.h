//
// Created by alber on 03/11/2022.
//

#ifndef BINARY_SEARCH_TREE_SET_H
#define BINARY_SEARCH_TREE_SET_H

#include <stdlib.h>
#include <stdio.h.>
#define INITIAL_SIZE 16
typedef struct set Set;

Set* set_new(int (*compare)(void* a, void* b));
Set* set_add(Set *s, void *element);
// Set* set_remove(Set *s, void *element);
int set_contains(Set *s, void *elements);
void imprimir(Set *s);

#endif //BINARY_SEARCH_TREE_SET_H
