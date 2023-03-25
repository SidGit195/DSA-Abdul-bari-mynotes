#include<iostream>
using namespace std;

int main(){
    int a = 10;
    int &r = a;     //Reference in c++ , must be initialized when it is declared, r we pronounced as alias.     

    // Now simply a = r = 10;
    cout << a; //----------> 10
    r++;
    cout << r; //----------> 11
    cout << a; //----------> 11
    return 0;
}
 