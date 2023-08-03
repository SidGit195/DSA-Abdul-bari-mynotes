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

void display(struct Node *p){
    
    while(p!=NULL){
    printf("%d ", p->data);
    p = p->next;
    }
}

void ReverseLinks(struct Node *p){
    struct Node *r = NULL, *q = NULL;
    while(p){
        r = q;
        q = p;
        p = p->next;
        q->next = r;
    }
    first = q;
}

int main(){
    int A[] = {10, 17, 8, 91, 25};

    create(A,5);
    display(first);
    printf("\n");
    ReverseLinks(first);
    display(first);
    return 0;
}