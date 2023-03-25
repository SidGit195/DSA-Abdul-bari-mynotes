#include<stdio.h>

int loops_e(int x, int n){
    int s = 1;
    for(;n>0;n--){
        s = 1 + x/n*s;
    }
    return s;
    //O(n)
}

int recursion_e(int x, int n){
    static int s = 1;
    if(n==0)
        return s;
    s = 1 + x/n*s;

    return recursion_e(x, n-1);
}

int main(){
    //By using loops
    printf("%d\n", loops_e(2,2));
    
    //By using recursion
    printf("%d", recursion_e(2,2));
    return 0;
}