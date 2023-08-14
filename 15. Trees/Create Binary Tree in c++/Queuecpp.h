#include<iostream>
using namespace std;
#ifndef Queuecpp_h
#define Queuecpp_h

class Node{
public:
    Node *lchild;
    int data;
    Node *rchild;
};

class Queue{
private:
    int size;
    int front;
    int rear;
    Node **Q;

public:
    Queue(){front=rear=-1; size=10; Q=new Node*[size];}
    Queue(int size){front=rear=-1; this->size=size; Q=new Node*[this->size];}
    void enqueue(Node *x);
    Node* dequeue();
    void Display();
    int isEmpty(){return front==rear;}
};


void Queue::enqueue(Node *x){
    if(rear == size-1)
        cout << "Queue is full" << endl;
    else{
        rear++;
        Q[rear] = x;
    }
}

Node* Queue::dequeue(){
    Node* x = NULL;
    if(front == rear)
        cout << "Queue is empty" << endl;
    else{
        front++;
        x = Q[front];
    }
    return x;
}

void Queue::Display(){
    for(int i=front+1; i<=rear; i++)
        cout << Q[i] << " ";
    cout << endl;
}

#endif /*Queuecpp_h*/