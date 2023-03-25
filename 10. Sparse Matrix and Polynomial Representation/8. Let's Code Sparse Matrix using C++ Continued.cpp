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
    Sparse(int m, int n, int num){
        this->m = m;
        this->n = n;
        this->num = num;
        e = new Element[this->num];
    }

    ~Sparse(){
        delete []e;
    }

    Sparse operator+(Sparse &s);
//Concept of operator overloading
    friend istream & operator>>(istream &is, Sparse &s);
    friend ostream & operator<<(ostream &os, Sparse &s);
};

Sparse Sparse::operator+(Sparse &s){
    int i,j,k;
    if(m!=s.m || n!=s.n)
        return NULL;
    
    Sparse *sum = new Sparse(m,n,num+s.num);

    i=j=k=0;
    while(i<num && j<s.num){
        if(e[i].i < s.e[j].i)
            sum->e[k++] = e[i++];
        else if(e[i].i > s.e[j].i)
            sum->e[k++] = s.e[j++];

        else{
            if(e[i].j < s.e[j].j)
            sum->e[k++] = e[i++];
            else if(e[i].j > s.e[j].j)
            sum->e[k++] = s.e[j++];

            else{
                sum->e[k] = e[i];
                sum->e[k++].x = e[i++].x + s.e[j++].x;
            }
        }
    }
    for(; i<num; i++)sum->e[k++] = e[i];
    for(; j<s.num; j++)sum->e[k++] = s.e[j];
    sum->num = k;

    return *sum;
}

istream & operator>>(istream &is, Sparse &s){
    cout << "Enter all such Rows, Columns with their Non-Zero elements" << endl;
    for(int u=0; u<s.num; u++){
        cin >> s.e[u].i >> s.e[u].j >> s.e[u].x;
    }
    return is;
}

ostream & operator<<(ostream &os, Sparse &s){
    int k=0;
    for(int u=0; u<s.m; u++){
        for(int v=0; v<s.n; v++){
            if(s.e[k].i == u && s.e[k].j == v){
                cout << s.e[k].x << " ";
                k++;
            }
            else
                cout << "0 ";
        }
        cout << endl;
    }
    return os;
}

int main(){
    Sparse s1(5,5,5);
    Sparse s2(5,5,5);

    cin >> s1;
    cin >> s2;

    Sparse sum = s1+s2;

    cout << "First Matrix" << endl << s1;
    cout << "Second Matrix" << endl << s2;
    cout << "Sum Matrix" << endl << sum;
    return 0;
}