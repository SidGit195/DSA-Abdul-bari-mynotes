#include<iostream>
using namespace std;
void fun(int b[],int n){        // b[] is like a pointer to array a[]
    for(int i=0; i<n; i++){
        printf("%d\n", b[i]);
    }
    b[0] = 25;      //b[] is not able to change value of a[] bcz it is passed by value
}

int main(){
    int a[5] = {1,2,3,4,5};

    fun(a, 5);      //array always passed by address, a == &a[0]
    printf("\n");
    printf("%d", a[0]);     //Updated value of a is print
    return 0;
}