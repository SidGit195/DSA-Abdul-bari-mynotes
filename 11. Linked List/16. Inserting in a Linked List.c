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

int count(struct Node *p){
    int c=0;
    while(p){
        c++;
        p = p->next;
    }
    return c;
}

void Insert(struct Node *p, int index, int x){
    
    if(index<0 || index>count(first))
        return;
    
    struct Node *t;
    t = (struct Node *)malloc(sizeof(struct Node));
    t->data = x;

    if(index == 0){
        t->next = first;
        first = t;
    }
    else{
        for(int i=0; i<index-1 && p; i++)
            p=p->next;
        if(p){
            t->next = p->next;
            p->next = t;
        }
    }
}

int main(){
    int A[] = {10, 17, 8, 91, 25};

    create(A,5);
    display(first);

    printf("\n");

    Insert(first, 2, 5);
    display(first);
    return 0;
}