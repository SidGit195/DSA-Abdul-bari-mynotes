#include<stdio.h>
#include<stdlib.h>

struct Node {
    char data;
    struct Node *next;
}*top = NULL;

void push(char x){
    struct Node *t = (struct Node *)malloc(sizeof(struct Node));

    if(t==NULL)
        printf("STACK is full\n");
    else{
        t->data = x;
        t->next = top;
        top = t;
    }
}

char pop(){
    struct Node *p;
    char x;
  
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

int isBalance(char *exp){
    for(int i=0; exp[i]!='\0'; i++){
        if(exp[i]=='(')
            push(exp[i]);
        else if(exp[i] == ')'){
            if(top == NULL)
                return 0;
            pop();
        }
    }
    if(top == NULL)
        return 1;
    else
        return 0;
}

int main(){
    char *exp = "((a+b)*(c-d))";

    printf("%d ", isBalance(exp));
    return 0;
}