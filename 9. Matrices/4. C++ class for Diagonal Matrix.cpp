#include<iostream>
using namespace std;

class Diagonal
{
private:
    int n;
    int *A;
public:
    Diagonal(){
        n = 3;
        A = new int[3];
    }
    Diagonal(int n){
        this->n = n;                //****new use of this
        A = new int[n];
    }
    void set(int i, int j, int x);
    int get(int i, int j);
    void Display();
    ~Diagonal(){
        delete []A;     //Heap me jo bhi declare kiya hai us-se delete karna hai hamesha apne aap memory free nhii hote heap me
    }
};

void Diagonal::set(int i, int j, int x){
    if(i==j)
        A[i-1] = x;
}

int Diagonal::get(int i, int j){
    if(i==j)
        return A[i-1];
    else
        return 0;
}

void Diagonal::Display(){
    for(int i=0; i<n; i++){
        for(int j=0; j<n; j++){
            if(i==j)
                cout << A[i] << " ";
            else
                cout << 0 << " ";
        }
        cout << endl;
    }
}

int main(){
    Diagonal m(3);
    m.set(1,1,2);   m.set(2,2,4);   m.set(3,3,6);
    m.Display();
    return 0;
}   