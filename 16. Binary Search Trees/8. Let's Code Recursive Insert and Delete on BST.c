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

    if (key < r->data)
        r->lchild = p;
    else
        r->rchild = p;
}

void InOrder(struct Node *p)
{
    if (p)
    {
        InOrder(p->lchild);
        printf("%d ", p->data);
        InOrder(p->rchild);
    }
}

struct Node *Search(int key)
{
    struct Node *p = root;
    while (p)
    {
        if (p->data == key)
            return p;
        else if (p->data < key)
            p = p->rchild;
        else
            p = p->lchild;
    }
    return NULL;
}

struct Node *RInsert(struct Node *p, int key)
{
    struct Node *t = NULL;

    if(p == NULL){
        t = (struct Node *)malloc(sizeof(struct Node));
        t->data = key;
        t->rchild = t->lchild = NULL;
        return t;
    }

    if(p->data < key)
        p->rchild = RInsert(p->rchild, key);
    else if(p->data > key)
        p->lchild = RInsert(p->lchild, key);
    
    return p;
}

int Height(struct Node *p){
    int x, y;
    if(p==NULL) return 0;
    x = Height(p->lchild);
    y = Height(p->rchild);

    return x>y? x+1: y+1;
}

struct Node *InPre(struct Node *p){
    while(p && p->rchild != NULL)
        p = p->rchild;

    return p;
}

struct Node *InSucc(struct Node *p){
    while(p && p->lchild != NULL)
        p = p->lchild;

    return p;
}

struct Node *Delete(struct Node *p, int key){
    struct Node *q;

    if(p == NULL)
        return NULL;
    if(p->lchild == NULL && p->rchild == NULL){
        if(p == root)
            root = NULL;
        free(p);
        return NULL;
    }

    if(key < p->data)
        p->lchild = Delete(p->lchild, key);
    else if(key > p->data)
        p->rchild = Delete(p->rchild, key);
    else{
        if(Height(p->lchild) > Height(p->rchild)){
            q = InPre(p->lchild);
            p->data = q->data;
            p->lchild = Delete(p->lchild, q->data);
        }
        else{
            q = InSucc(p->rchild);
            p->data = q->data;
            p->rchild = Delete(p->rchild, q->data);
        }
    }

    return p;
}

int main()  
{
    struct Node *temp;

    root = RInsert(root, 15);
    RInsert(root, 2);
    RInsert(root, 7);
    RInsert(root, 81);
    RInsert(root, 21);
    RInsert(root, 41);

    InOrder(root);
    printf("\n");

    temp = Search(21);
    if (temp)
        printf("Element %d is found", temp->data);
    else
        printf("Element is not found");

    printf("\n");
    Delete(root, 21);
    printf("\n");
    InOrder(root);
    return 0;
}