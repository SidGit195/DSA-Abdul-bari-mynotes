#include<stdio.h>
#include<stdlib.h>

struct Node {
    int data;
    struct Node *next;
}*front=NULL, *rear=NULL;

void enqueue(int x){
    struct Node *t = (struct Node *)malloc(sizeof(struct Node));
    if(t == NULL)
        printf("Queue is full\n");
    else{
        t->data = x;
        t->next = NULL;
        if(front == NULL)
            front = rear = t;
        else{
            rear->next = t;
            rear = t;
        }
    }
}

int dequeue(){
    int x=-1;
    struct Node *p;

    if(front == NULL)
        printf("Queue is empty\n");
    else{
        p = front;
        front = front->next;
        x = p->data;
        free(p);
    }
    return x;
}

void Display(){
    struct Node *p = front;
    while (p)
    {
        printf("%d ", p->data);
        p = p->next;
    }
    printf("\n");
}

int main(){
    enqueue(3);
    enqueue(6);
    enqueue(9);
    enqueue(12);
    
    dequeue();
    
    Display();
    return 0;
}