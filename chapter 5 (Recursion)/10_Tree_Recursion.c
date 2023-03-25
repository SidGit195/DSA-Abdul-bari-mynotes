//Tree Recursion:-  If it is calling itself more than one time, then it is a tree recursion.

#include<stdio.h>

void fun(int n){
    if(n>0){
        printf("%d", n);
        fun(n-1);
        fun(n-1);
    }
}
int main(){
    int x = 2;
    fun(x);
    return 0;
}