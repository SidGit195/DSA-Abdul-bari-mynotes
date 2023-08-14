
void IPreOrder(struct Node *p){
    struct Stack stk;
    StackCreate(&stk, 100);

    while(p || !isEmptyStack(stk)){
        if(p){
            printf("%d ", p->data);
            push(&stk, p);
            p = p->lchild;
        }
        else{
            p = pop(&stk);
            p = p->rchild;
        }
    }
}


void IInOrder(struct Node *p){
    struct Stack stk;
    StackCreate(&stk, 100);

    while(p || !isEmptyStack(stk)){
        if(p){
            push(&stk, p);
            p = p->lchild;
        }
        else{
            p = pop(&stk);
            printf("%d ", p->data);
            p = p->rchild;
        }
    }
}

void IPostOrder(struct Node *p){
    struct Stack stk;
    StackCreate(&stk, 100);
    long int temp;

    while(p || !isEmptyStack(stk)){
        if(p){
            push(&stk, p);
            p = p->lchild;
        }
        else{
            temp = pop(&stk);
            if(temp>0){
                push(&st, -temp);
                t = ((struct Node *)temp)->rchild;
            }
            else{
                printf("%d ", (struct Node *)temp->data);
                t = NULL;
            }
        }
    }
}


void ILevelOrder(struct Node *p){
    Queue q;
    printf("%d ", p->data);
    enqueue(&q, p);

    while(!isEmpty(q)){
        p = dequeue(&q);
        if(p->lchild){
            printf("%d ", p->lchild->data);
            enqueue(&q, p->lchild);
        }
        if(p->rchild){
            printf("%d ", p->rchild->data);
            enqueue(&q, p->rchild);
        }
    }
}