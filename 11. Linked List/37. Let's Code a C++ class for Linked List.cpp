#include <iostream>
using namespace std;

class Node
{
public:
    int data;
    Node *next;
};

class LinkedList
{
private:
    Node *first;

public:
    LinkedList() { first = NULL; }
    LinkedList(int A[], int n);
    ~LinkedList();

    void Display();
    void Insert(int index, int x);
    int Delete(int index);
    int Length();
};

LinkedList::LinkedList(int A[], int n)
{
    struct Node *t, *last;
    first = (struct Node *)malloc(sizeof(struct Node));
    first->data = A[0];
    first->next = NULL;
    last = first;

    for (int i = 1; i < n; i++)
    {
        t = (struct Node *)malloc(sizeof(struct Node));
        t->data = A[i];
        t->next = NULL;
        last->next = t;
        last = t;
    }
}

void LinkedList::Display()
{
    Node *p = first;

    while (p != NULL)
    {
        printf("%d ", p->data);
        p = p->next;
    }
    cout << endl;
}

int LinkedList::Length()
{
    Node *p = first;
    int len = 0;

    while (p)
    {
        len++;
        p = p->next;
    }
    return len;
}

void LinkedList::Insert(int index, int x)
{
    struct Node *t, *p = first;

    if (index < 0 || index > Length())
        return;

    t = new Node;
    t->data = x;
    t->next = NULL;

    if (index == 0)
    {
        t->next = first;
        first = t;
    }
    else
    {
        for (int i = 0; i < index - 1; i++)
            p = p->next;
        t->next = p->next;
        p->next = t;
    }
}

int LinkedList::Delete(int index){
    Node *p=first, *q=NULL;
    int x = -1;
    
    if(index < 0 || index > Length())
        return -1;
    if(index == 1){
        first = first->next;
        x = p->data;
        delete p;
    }
    else{
        for(int i=0; i<index-1; i++){
            q = p;
            p = p->next;
        }
        q->next = p->next;
        x = p->data;
        delete p;
    }
    return x;
}

LinkedList::~LinkedList(){
    Node *p = first;
    while (first)
    {
        first = first->next;
        delete p;
        p = first;
    }
    
}

int main()
{
    int A[] = {1,2,3,5,7};
    LinkedList s(A,5);

    s.Display();
    cout << endl;
    cout << s.Delete(2) << endl;
    cout << s.Length() << endl;
    s.Insert(2, 99);
    s.Display();
    return 0;
}