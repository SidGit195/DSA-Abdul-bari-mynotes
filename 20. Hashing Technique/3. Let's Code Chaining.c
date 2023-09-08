#include<stdio.h>
#include "C:\Users\Siddharth Ojha\Desktop\DSA\chains.h"

int hash(int key){
    return key%10;
}

void Insert(struct Node *H[], int key){
    int index = hash(key);
    SortedInsert(&H[index], key);
}

int main(){
    struct Node *HT[10];
    struct Node *temp;

    for(int i=0; i<10; i++)
        HT[i] = NULL;

    Insert(HT, 12);
    Insert(HT, 22);
    Insert(HT, 42);

    temp = Search(HT[hash(22)], 22);

    printf("%d ", temp->data);
    return 0;
}