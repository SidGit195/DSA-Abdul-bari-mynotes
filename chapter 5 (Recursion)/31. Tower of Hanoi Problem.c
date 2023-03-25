#include<stdio.h>

int H(int n){
    if(n==1)
        return 1;
    return 2*H(n-1) + 1;
}

int main(){
    int n;
    printf("Enter number of disk : ");
    scanf("%d", &n);

    printf("%d", H(n));
    return 0;
}


// H(n) = 2(n) - 1  ---> Best way {bcz no stack will form}