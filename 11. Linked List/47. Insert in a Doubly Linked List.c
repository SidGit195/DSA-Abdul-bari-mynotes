#include<stdio.h>
#include<stdlib.h>

struct Node{
    struct Node *prev;
    int data;
    struct Node *next;
}*first=NULL;

void create(int A[], int n){
    struct Node *t, *last;

    first = (struct Node *)malloc(sizeof(struct Node));
    first->data = A[0];
    first->prev = first->next = NULL;
    last = first;

    for(int i=1; i<n; i++){
        t = (struct Node *)malloc(sizeof(struct Node));
        t->data = A[i];
        t->prev = last;
        t->next = NULL;
        last->next = t;
        last = t;
    }
}

void Display(struct Node *p){
    while (p)
    {
        printf("%d ", p->data);
        p = p->next;
    }
    printf("\n");
}

int Length(struct Node *p){
    int len=0;
    while (p)
    {
        len++;
        p = p->next;
    }
    return len;
}

void Insert(struct Node *p, int index, int x){
    struct Node *t, *q;

    if(index < 0 || index > Length(first))
        return;

    t = (struct Node *)malloc(sizeof(struct Node));
    t->data = x;

    if(index == 0){
            t->prev = NULL;
            t->next = first;
            first->prev = t;
            first = t;
    }
    else{
        for(int i=0; i<index-1; i++)
            p = p->next;
        // q = p->next;
        t->next = p->next;
        t->prev = p;
        p->next = t;
        if(p->next)p->next->prev = t;
        p->next = t;
    }
}

int main(){
    int A[] = {8, 19, 12, 33, 71, 37};
    create(A, 6);

    Insert(first, 4, 4);
    Display(first);
    return 0;
}