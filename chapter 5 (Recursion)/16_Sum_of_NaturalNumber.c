#include<stdio.h>

// int sum(int n){
//     if(n==0){
//         return 0;
//     }
//     else{
//         return sum(n-1) + n;
//     }
// }

int main(){
    printf("%d",sum(10));
    return 0;
}

//It will be best if we use n(n+1)/2 instead of recursion
//best method
int sum(int n){
    return n*(n+1)/2;
}

//It will be also possible by using loops
int sum(int n){
    int i, s=0;
    for(i=0; i<=n; i++){
        s += i;
    }
    return s;
}
