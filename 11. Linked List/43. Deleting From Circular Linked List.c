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

int Length(struct Node *p){
    int len=0;
    do{
        len++;
        p = p->next;
    }while(p != Head);
    return len;
}

int Delete(struct Node *p, int index){
    struct Node *q;
    int x;

    if(index < 0 || index > Length(Head))
        return -1;

    if(index == 0){
        while(p->next!=Head)p=p->next;
        x = Head->data;
        if(p == Head){          // Single node in the circular linkedList
            free(Head);
            Head = NULL;
        }
        else{
            p->next = Head->next;
            free(Head);
            Head = p->next;
        }
    }
    else{
        for(int i=0; i<index-2; i++)
            p = p->next;
        q = p->next;
        p->next = q->next;
        x = q->data;
        free(q);
    }
    return x;
}

int main(){
    int A[] = {12, 8, 3, 19, 4};
    create(A, 5);

    return 0;
}