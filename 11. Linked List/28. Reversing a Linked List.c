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

void ReverseElement(struct Node *p){
    int i=0, a[4];
    
    while(p){
        a[i] = p->data;
        p = p->next;
        i++;
    }
    p = first;
    i--;
    while(p){
        p->data = a[i];
        p = p->next;
        i--;
    }
}

int main(){
    int A[] = {10, 17, 8, 91};

    create(A,4);
    display(first);
    printf("\n");
    ReverseElement(first);
    display(first);
    return 0;
}