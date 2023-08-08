#include<iostream>
using namespace std;

class Node {
public:
    int data;
    Node *next;
};

class Stack {
private:
    Node *top;
public:
    Stack(){top = NULL;}
    void push(int x);
    int pop();
    void Display();
};

void Stack::push(int x){
    Node *t = new Node;

    if(t == NULL)
        cout << "stack is full" << endl;
    else{
        t->data = x;
        t->next = top;
        top = t;
    }
}

int Stack::pop(){
    Node *p = top;
    int x = -1;

    if(top == NULL)
        cout << "stack is empty" << endl;
    else{
        x = p->data;
        top = top->next;
        delete p;
    }
    return x;
}

void Stack::Display(){
    Node *p = top;
    while (p)
    {
        cout << p->data << " ";
        p = p->next;
    }
    cout << endl;
}

int main(){
    Stack stk;

    stk.push(2);
    stk.push(21);
    stk.push(121);

    stk.Display();

    cout << stk.pop() << endl;
    return 0;
}