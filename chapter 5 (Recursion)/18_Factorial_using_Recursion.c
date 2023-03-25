#include<stdio.h>

int fac(int n){
    if(n==0)
    return 1;
    else 
    return fac(n-1)*n;
}

int main(){
    int x;
    printf("Factorial you want ?\n");
    scanf("%d", &x);
    printf("%d", fac(x));
    return 0;
}