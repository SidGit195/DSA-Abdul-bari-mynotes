#include<stdio.h>

// int fun(int n){
//     if(n>0){
//         return fun(n-1) + n;
//     }
//     return 0;
// } 

// int main(){
//     int a = 5;
//     printf("%d", fun(a));
//     return 0;
// }


int fun(int n){
    static int x = 0;       //May change but initialized once
    if(n>0){
        x++;
        return fun(n-1) + x;
    }
    return 0;
}
// int x = 0; 
int main(){
    int a = 5;
    
    printf("%d", fun(a));
    return 0;
}

// Here in this case same output of x declaring as global variable or static variable
// return ke baad wale things ko function egnore kar deta hai