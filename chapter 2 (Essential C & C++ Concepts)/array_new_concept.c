#include<stdio.h>
int * fun(int n){
    int *p;
    p = (int *)malloc(n*sizeof(int));
    return(p);
}

int main(){
    int *a;
    a = fun(5);
    return 0;
}

//Did not understand