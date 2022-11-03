#include "Set.h"

typedef struct node{
    struct node* left;
    struct node* right;
    void* value;
} Node;

struct set{
    Node* root;
    int (*compare)(void *a, void *b);
};

Node* new_node(void* value){
    Node *node_new = malloc(sizeof(Node));
    node_new->value = value;
    node_new->left = NULL;
    node_new->right = NULL;
    return node_new;
}

Set* set_new(int (*compare)(void* a, void* b)){
    Set *new_set = malloc(sizeof(Set));
    new_set->root = NULL;
    new_set->compare = compare;
    return new_set;
}

void add_node_to_tree(Set *s, Node* current, void *element){

    if(s->compare(element, current->value) > 0){
        if(current->right){
            add_node_to_tree(s,current->right,element);

        }
        else
            current->right = new_node(element);
    }
    else if(s->compare(element, current->value) < 0) {
        if(current->left){
            add_node_to_tree(s,current->left,element);
        }
        else
            current->left = new_node(element);
    }

    return;
}

Set* set_add(Set *s, void *element){
    if(!s->root){
        s->root = new_node(element);
        return s;
    }

    add_node_to_tree(s,s->root, element);
    return s;
}

int set_contains(Set *s, void *element){

    return 0;
}
