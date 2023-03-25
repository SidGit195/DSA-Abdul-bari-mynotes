//Indirect Recursion:- Indirect recursion in C occurs when a function calls another function and if this function calls the first function again.
// Such functions are also called indirect recursive functions.

void funA(int n){
    if(n>0){
        printf("%d",n);
        funB(n-1);
    }
}

void funB(int n){
    if(n>1){
        printf("%d", n);
        funA(n/2);
    }
}