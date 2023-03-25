// same as "structure and parameter" but in pure c++
#include<iostream>
using namespace std;

class rectangle{
    private: 
    int length, breadth;

    public:
    rectangle(int l, int b){
        length = l;
        breadth = b;
    }

    // void initialize(int l, int b){
    //     length = l;
    //     breadth = b;
    // }

    int area(){
        return length*breadth;
    }

    void changelength(int nl){
        length = nl;
    }
};

int main(){
    rectangle r(10, 5);
    // r.initialize(10, 5);     //instead of this initialize function, it is recommanded to use constructor
    r.area();
    r.changelength(20);
    return 0;
}