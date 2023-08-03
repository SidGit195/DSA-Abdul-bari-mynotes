#include<stdio.h>
#include<stdlib.h>

struct Node
{
    int data;
    struct Node *next;
}*first=NULL;


void create(int A[], int n){
    struct Node *t, *last;
    first = (struct Node *)malloc(sizeof(struct Node));
    first->data = A[0];
    first->next = NULL;
    last = first;

    for(int i=1; i<n; i++){
        t = (struct Node *)malloc(sizeof(struct Node));
        t->data = A[i];
        t->next = NULL;
        last->next = t;
        last = t;
    }
}

int count(struct Node *p){
    int c = 0;
    while(p){
        c++;
        p = p->next;
    }
    return c;
}

int Rcount(struct Node *p){
    if(p)
        return Rcount(p->next) + 1;
    return 0; 
}

int Add(struct Node *p){
    int sum=0;
    while(p){
        sum += p->data;
        p = p->next;
    }
    return sum;
}

int RAdd(struct Node *p){
    if(p)
        return RAdd(p->next) + p->data;
    return 0;
}

int main(){
    int A[] = {32, 6, 9, 13, 16, 8};
    create(A, 6);

    printf("%d\n", count(first));
    printf("%d\n", Rcount(first));
    printf("%d\n", Add(first));
    printf("%d\n", RAdd(first));
    return 0;
}