#include<iostream>
using namespace std;

class Element{
public:
    int i, j, x;
};

class Sparse{
private:
    int m, n, num;
    Element *e;

public:
    void create();
    void Display(int m, int n);
    ~Sparse(){
        delete [] e;
    }
};

void Sparse::create(){
    int num;
    cout << "Enter number of Non-Zero Elements" << endl;
    cin >> num;
    this->num;

    e = new Element[num];
    
    cout << "Enter all such Rows, Columns with their Non-Zero elements" << endl;
        for(int v=0; v<num; v++){
            cin >> e[v].i >> e[v].j >> e[v].x;
        }
    cout << "\n" << endl;
}

void Sparse::Display(int m, int n){
    this->m = m;
    this->n = n;
    int k=0;

    for(int u=0; u<m; u++){
        for(int v=0; v<n; v++){
            if(u == e[k].i && v == e[k].j){
                cout << e[k].x << " ";
                k++;
            }
            else
                cout << "0 ";
        }
        cout << endl;
    }
}

int main(){
    int m, n;
    cout << "Enter Dimensions: Row & Column " << endl;
    cin >> m >> n;

    Sparse s;
    s.create();
    s.Display(m, n);
    return 0;
}