#include<iostream>
using namespace std;

struct rectangle
{
    int length;
    int breadth;
};

int main(){
    struct rectangle r {10, 5};
    cout << r.length << endl;

    struct rectangle *p = &r;
    //p.length = 15;      //Wrong syntax bcz "p" stores address not integer value
    // *p.length = 15;     //It seems that it is a correct but it is wrong syntax bcz dot operator has high precedence than * 
    (*p).length = 15;       // (*p).length == p->length
    cout << r.length << endl;

    
    return 0;
}