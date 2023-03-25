#include<stdio.h>

float exp(int b, int p){
    if(b, p==0)
    return 1;
    else if(b, p<0){
    int n = -p;
    return (float)1/(exp(b,n-1)*b);
    }
    else
    return exp(b,p-1)*b;
}

int main(){
    int b, p;
    printf("Enter value:\n");
    scanf("%d",&b);
    printf("Enter power:\n");
    scanf("%d",&p);

    printf("%f", exp(b,p));

    return 0;
}