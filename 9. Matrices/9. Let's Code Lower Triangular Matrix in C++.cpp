#include<iostream>
using namespace std;

class Matrix{
public:
    int *A;
    int n;

public:
    Matrix(){
        n = 3;
        A = new int[3]; 
    }
    Matrix(int n){
        this->n = n;
        A = new int[n];
    }
    void set_lowertriangular(int i, int j, int k);
    int get_lowertriangular(int i, int j);
    void Display();
    ~Matrix(){
        delete []A;
    }
};

void Matrix::set_lowertriangular(int i, int j, int k){
    if(i>=j)
        A[i*(i-1)/2 + j-1] = k;
}


int Matrix::get_lowertriangular(int i, int j){
    if(i>=j)
        return A[i*(i-1)/2 + j-1];
    else
        return 0;
}

void Matrix::Display(){
    for(int i=1; i<=n; i++){
        for(int j=1; j<=n; j++){
            if(i>=j)
                cout << A[i*(i-1)/2 + j-1] << " ";
            else
                cout << "0 ";
        }
    }
}

int main(){
    int n;
    cout << "Enter Dimension of the Matrix: " << endl;
    cin >> n;

    Matrix m(n);
    
    int x;
    cout << "Enter all elements of the Lower triangular matrix" << endl;
    for(int i=1; i<=n; i++){
        for(int j=1; j<=n; j++){
            cin >> x;
            m.set_lowertriangular(i,j, x);
        }
    }

    m.Display();
    return 0;
}

