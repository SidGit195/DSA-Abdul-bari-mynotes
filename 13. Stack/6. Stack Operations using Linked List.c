#include<stdio.h>
#include<stdlib.h>

struct Node {
    int data;
    struct Node *next;
}*top = NULL;

void push(int x){
    struct Node *t = (struct Node *)malloc(sizeof(struct Node));

    if(t==NULL)
        printf("STACK is full\n");
    else{
        t->data = x;
        t->next = top;
        top = t;
    }
}

int pop(){
    struct Node *p;
    int x = -1; 
  
    if(top == NULL)
        printf("STACK UNDERFLOW\n");
    else{
        p = top;
        top = top->next;
        x = p->data;
        free(p);
    }   
    return x;
}

void Display(){
    struct Node *p = top;

    while (p)
    {
        printf("%d ", p->data);
        p = p->next;
    }
    printf("\n");
}

int main(){
    push(3);
    push(311);
    push(132);

    Display();

    printf("%d ", pop());
    return 0;
}