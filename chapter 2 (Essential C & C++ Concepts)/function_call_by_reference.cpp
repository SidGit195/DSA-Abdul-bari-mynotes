#include<iostream>
using namespace std;

int add(int &a, int &b){
    int temp;
    temp = a;
    a = b;
    b = temp;
}

int main(){
    int x, y, z;
    x = 10;
    y = 5;

    z = add(x, y);
    printf("%d\n%d", x, y);
    return 0;
}