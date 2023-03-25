#include<stdio.h>

//my method
int fac(int n){
    if(n==0)
        return 1;
    return n*fac(n-1);      //We can also use here loops.
}

int ncr(int n, int r){
    return fac(n)/(fac(r)*fac(n-r));
}

//sir method
int C(int n, int r){
    if(r==0 || n==r)
        return 1;
    return C(n-1, r-1) + C(n-1, r);
}

int main(){
    int n, r;
    printf("How many items are present ?\n");
    scanf("%d", &n);
    printf("How many do you wanna select ?\n");
    scanf("%d\n", &r);
    //my method
    printf("Ans = %d\n", ncr(n,r));

    //Sir method
    printf("Ans = %d", C(n,r));
    return 0;
}