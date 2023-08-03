#include<stdio.h>
#include<stdlib.h>

struct Node{
    int data;
    struct Node *next;
}*Head;

void create(int A[], int n){
    struct Node *t, *last;
    Head = (struct Node *)malloc(sizeof(struct Node));
    Head->data = A[0];
    Head->next = Head;
    last = Head;

    for(int i=1; i<n; i++){
        t = (struct Node *)malloc(sizeof(struct Node));
        t->data = A[i];
        t->next = last->next;
        last->next = t;
        last = t;
    }
}

void Display(struct Node *p){
    do{
        printf("%d ", p->data);
        p = p->next;
    }while(p!=Head); 
    printf("\n");
}

void RDisplay(struct Node *h){
    static int flag = 0;
    if(h != Head || flag == 0){
        flag = 1;
        printf("%d ", h->data);
        RDisplay(h->next);
    }
    flag=0;
}

int main(){
    int A[] = {12, 8, 3, 19, 4};
    create(A, 5);

    RDisplay(Head);
    return 0;
}