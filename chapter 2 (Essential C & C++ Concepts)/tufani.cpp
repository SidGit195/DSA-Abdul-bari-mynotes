#include<iostream>
using namespace std;

struct rectangle
{
    int length;
    int breadth;
};

int main(){
    struct rectangle *p;
    p->length = 10;
    p->breadth = 5;
    cout << p->length << endl;
    cout << sizeof(p) << endl;
    return 0;
}