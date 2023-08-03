#include <stdlib.h>
#include <stdio.h>
#include <stdbool.h>
#include <limits.h>

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

bool CheckSorted(struct Node *p){
    int x = INT_MIN;
    while(p){
        if(p->data < x)
            return false;
        x = p->data;
        p = p->next;
    }
    return true;
}

int main(){
    int A[] = {10, 17, 18, 91, 100};

    create(A,5);
    display(first);

    printf("\n%d", CheckSorted(first));
    return 0;
}