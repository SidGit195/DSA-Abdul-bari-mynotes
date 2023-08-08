#include<stdio.h>
#include<stdlib.h>

struct stack {
    int size;
    int top;
    int *S;
};

void create(struct stack *st){
    printf("Enter size\n");
    scanf("%d", &st->size);
    st->top = -1;
    st->S = (int *)malloc(st->size*sizeof(int));
}

void Display(struct stack st){
    for(int i=st.top; i>=0; i--)
        printf("%d ",st.S[i]);
    printf("\n");
}

void push(struct stack *st, int x){
    if(st->top == st->size-1)
        printf("STACK OVERFLOW\n");
    else{
        st->top++;
        st->S[st->top] = x;
    }
}

int pop(struct stack *st){
    int x = -1;
    if(st->top == -1)
        printf("STACK UNDERFLOW\n");
    else{
        x = st->S[st->top];
        st->top--;
    }
    return x;
}

int peek(struct stack st, int pos){
    int x = -1;
    if(st.top + 1 - pos < 0)
        printf("INVALID POSITION");
    else
        x = st.S[st.top + 1 - pos];
    return x;
}

int stackTop(struct stack st){
    if(st.top == -1)
        return -1;
    else
        return st.S[st.top];
}

int isEmpty(struct stack st){
    if(st.top == -1)
        return 1;
    return 0;
}

int isFull(struct stack st){
    if(st.top == st.size - 1)
        return 1;
    return 0;
}

int main(){
    struct stack st;

    create(&st);

    push(&st, 3);
    push(&st, 31);
    push(&st, 13);

    // pop(&st);
    // printf("\n%d\n", peek(st, 2));
    // printf("\n%d\n", stackTop(st));
    // printf("\n%d\n", isEmpty(st));
    printf("\n%d\n", isFull(st));

    Display(st);

    return 0;
}