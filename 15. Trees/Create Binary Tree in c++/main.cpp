#include<iostream>
#include<stdio.h>
#include"Queuecpp.h"

using namespace std;

class Tree{
public:
    Node *root;
    Tree(){root=NULL;}
    void CreateTree();
    void PreOrder(Node *p);
    void InOrder(Node *p);
    void PostOrder(Node *p);
    void LevelOrder(Node *p);
    int Height(Node *root);
};

void Tree::CreateTree()
{
    Node *p, *t;
    int x;
    Queue q(100);

    printf("Enter root value: ");
    scanf("%d", &x);
    root = new Node;
    root->data = x;
    root->lchild = root->rchild = NULL;
    q.enqueue(root);

    while (!q.isEmpty())
    {
        p = q.dequeue();

        printf("Enter left child of %d: ", p->data);
        scanf("%d", &x);
        if (x != -1)
        {
            t = new Node;
            t->data = x;
            t->lchild = t->rchild = NULL;
            p->lchild = t;
            q.enqueue(t);
        }

        printf("Enter right child %d: ", p->data);
        scanf("%d", &x);
        if (x != -1)
        {
            t = new Node;
            t->data = x;
            t->lchild = t->rchild = NULL;
            p->rchild = t;
            q.enqueue(t);
        }
    }
}

void Tree::PreOrder(Node *p){
    if(p){
        printf("%d ", p->data);
        PreOrder(p->lchild);
        PreOrder(p->rchild);
    }
}

void Tree::InOrder(Node *p){
    if(p){
        InOrder(p->lchild);
        printf("%d ", p->data);
        InOrder(p->rchild);
    }
}

void Tree::PostOrder(Node *p){
    if(p){
        PostOrder(p->lchild);
        PostOrder(p->rchild);
        printf("%d ", p->data);
    }
}

void Tree::LevelOrder(Node *root)
{
    Queue q(100);

    printf("%d ", root->data);
    q.enqueue(root);

    while(!q.isEmpty()){
        root = q.dequeue();
        if(root->lchild){
            printf("%d ", root->lchild->data);
            q.enqueue(root->lchild);
        }
        if(root->rchild){
            printf("%d ", root->rchild->data);
            q.enqueue(root->rchild);
        }
    }
}

int Tree::Height(Node *root){
    int x=0, y=0;
    if(root == 0)
        return 0;
    x = Height(root->lchild);
    y = Height(root->rchild);
    if(x>y)
        return x+1;
    else 
        return y+1;
}

int main(){
    Tree t;
    t.CreateTree();
    cout << endl;
    
    cout << "PreOrder: ";
    t.PreOrder(t.root);
    cout << endl;

    cout << "InOrder: ";
    t.InOrder(t.root);
    cout << endl;

    cout << "PostOrder: ";
    t.PostOrder(t.root);
    cout << endl;

    cout << "LevelOrder: ";
    t.LevelOrder(t.root);
    cout << endl;

    cout << "Height of the tree is " << t.Height(t.root) << endl;

    return 0;
}