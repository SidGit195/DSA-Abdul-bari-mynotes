#include<iostream>
using namespace std;

//Excessive Recursion:- Call for same parameters for many times.
int fib(int n){
    if(n <= 1)
        return n;
    return fib(n-1) + fib(n-2);
    // o(2^n)
}

int loop_fib(int n){
    int t0 = 0, t1 = 1, s;

    if(n<=1)
        return n;
    
    for(int i=2;i<=n;i++){
        s = t0 + t1;
        t0 = t1;
        t1 = s;        
    }
    return s;
    // O(n)
}

//By using memoization
int F[10];
void set(int n){
    for(int i{0}; i<10; i++){
        F[i] = n; 
    }
}

int memoization_fib(int n){
    if(n<=1){
        F[n] = n;
        return n;
    }
    else{
        if(F[n-2]==-1)
            F[n-2] = fib(n-2);
        if(F[n-1]==-1)
            F[n-1] = fib(n-1);
        
        return F[n-2] + F[n-1];
    } 
}

int main(){
    cout << fib(7) << endl;

    cout << loop_fib(7) << endl;

    set(-1);
    cout << memoization_fib(7) << endl;
    return 0;
}