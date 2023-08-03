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

int count(struct Node *p){
    int c=0;
    while(p){
        c++;
        p = p->next;
    }
    return c;
}

void display(struct Node *p){
    
    while(p!=NULL){
    printf("%d ", p->data);
    p = p->next;
    }
}

int del(struct Node *p, int index){
    struct Node *q=NULL;
    int x = -1;

    if(index < 0 || index > count(first))
        return -1;

    if(index == 1){
        x = p->data;
        first = first->next;
        free(p);
        return x;
    }
    else{
        for(int i=0; i<index-1; i++){
            q = p;
            p = p->next;
        }
            q->next = p->next;
            x = p->data;
            free(p);
            return x;
    }
}

int main(){
    int A[] = {10, 17, 8, 91, 25};

    create(A,5);
    display(first);
    printf("\n");

    del(first, 1);
    display(first);
    return 0;
}