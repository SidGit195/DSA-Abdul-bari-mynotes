#include<stdio.h>
#include<stdlib.h>

struct Node {
    struct Node *prev;
    int data;
    struct Node *next;
}*first = NULL;

void create(int A[], int n){
    struct Node *t, *last;

    first = (struct Node *)malloc(sizeof(struct Node));
    first->data = A[0];
    first->prev = first->next = NULL;
    last = first;

    for (int i = 1; i < n; i++)
    {
        t = (struct Node *)malloc(sizeof(struct Node));
        t->data = A[i];
        t->prev = last;
        t->next = NULL;
        last->next = t;
        last = t;
    }
}

void Display(struct Node *p){
    while(p){
        printf("%d ", p->data);
        p = p->next;
    }
    printf("\n");
}

void Reverse(struct Node *p){
    struct Node *temp;

    while (p)
    {
        temp = p->next;
        p->next = p->prev;
        p->prev = temp;
        p = p->prev;
        if(p!=NULL && p->next == NULL)first = p;
    }
}

int main(){
    int A[] = {10, 20, 30, 40, 50};
    create(A, 5);

    Display(first);
    Reverse(first);
    Display(first);
    return 0;
}