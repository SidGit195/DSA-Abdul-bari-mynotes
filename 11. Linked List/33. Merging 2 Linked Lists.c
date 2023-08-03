#include <stdlib.h>
#include <stdio.h>

struct Node
{
    int data;
    struct Node *next;
}*first = NULL, *second=NULL, *third=NULL;

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

void create2(int A[], int n){
    struct Node *t, *last;
    second = (struct Node *)malloc(sizeof(struct Node));
    second->data = A[0];
    second->next =   NULL;
    last = second;

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

void Concatelinks(struct Node *p, struct Node *q){
    third = p;
    while(p->next!=NULL){
        p = p->next;
    }
    p->next = q;
}

int main(){
    int A[] = {10, 17, 8, 91, 25};
    int B[] = {6, 87, 2, 15, 32};

    create(A,5);
    create2(B,5);

    Concatelinks(first, second);
    display(third);
    printf("\n");
    display(first);
    return 0;
}