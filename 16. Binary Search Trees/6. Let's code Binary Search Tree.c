#include <stdio.h>
#include <stdlib.h>

struct Node
{
    struct Node *lchild;
    int data;
    struct Node *rchild;
} *root = NULL;

void Insert(int key)
{
    struct Node *t = root;
    struct Node *p, *r;

    if (root == NULL)
    {
        p = (struct Node *)malloc(sizeof(struct Node));
        p->data = key;
        p->lchild = p->rchild = NULL;
        root = p;
        return;
    }
    while (t != NULL)
    {
        r = t;
        if (t->data == key)
            return;
        else if (key < t->data)
            t = t->lchild;
        else
            t = t->rchild;
    }
    p = (struct Node *)malloc(sizeof(struct Node));
    p->data = key;
    p->lchild = p->rchild = NULL;

    if(key < r->data) r->lchild = p;
    else r->rchild = p;
}

void InOrder(struct Node *p){
    if(p){
        InOrder(p->lchild);
        printf("%d ", p->data);
        InOrder(p->rchild);
    }
}

struct Node * Search(int key){
    struct Node *p = root;
    while(p){
        if(p->data == key)
            return p;
        else if(p->data < key)
            p = p->rchild;
        else    
            p = p->lchild;
    }
    return NULL;
}

int main()
{
    struct Node *temp;

    Insert(15);
    Insert(2);
    Insert(7);
    Insert(81);
    Insert(21);
    Insert(41);

    InOrder(root);
    printf("\n");

    temp = Search(21);
    if(temp)
        printf("Element %d is found", temp->data);
    else
        printf("Element is not found");

    return 0;
}