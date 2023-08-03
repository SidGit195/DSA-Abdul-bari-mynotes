#include <stdlib.h>
#include <stdio.h>
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

int maxa(struct Node *p){
    int m = INT_MIN;
    while(p){
        if(p->data > m)
            m = p->data;
        p = p->next;
    }
    return m;
}

int Rmax(struct Node *p){
    int x=0;
    if(p==0)
        return INT_MIN;
    x = Rmax(p->next);
    return x>p->data?x:p->data;
}

int main(){
    int A[] = {10, 17, 8, 91, 25};
    create(A,5);

    printf("%d\n", maxa(first));
    printf("%d\n", Rmax(first));
    return 0;
}