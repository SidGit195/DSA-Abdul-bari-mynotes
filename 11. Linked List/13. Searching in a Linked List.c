#include <stdlib.h>
#include <stdio.h>

struct Node
{
    int data;
    struct Node *next;
}*first = NULL;

void create(int A[], int n){
    struct Node *t, *last;
    first = (struct Node *)malloc(sizeof(struct Node));
    first->data = A[0];
    first->next =   NULL;
    last = first;

    for (int i = 1; i < n; i++)
    {
    t = (struct Node *)malloc(sizeof(struct Node));
    t->data = A[i];
    t->next = NULL;
    last->next = t;
    last = t;
    }
    
}

struct Node * LSearch(struct Node *p, int key){
    while(p){
        if(key == p->data)
            return p;
        p = p->next;
    }
    return NULL;
}

struct Node * RLSearch(struct Node *p, int key){
    if(p == NULL)
        return NULL;
    if(key == p->data)
        return p;
    RLSearch(p->next, key);
}

int main(){
    struct Node *temp;
    int A[] = {10, 17, 8, 91, 25};
    create(A,5);

    temp = RLSearch(first, 91);

    if(temp){
        printf("key is found & it's address is %d", temp);
    }
    else
        printf("key not found");
    return 0;
}

