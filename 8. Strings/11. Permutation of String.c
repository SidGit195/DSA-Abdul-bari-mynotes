#include<stdio.h>

int fac(int n){
    int t=1;
    for(int i=n; i>=1; i--){
        t *= i;
    }
    return t;
}

int main(){
    char c[] = "finding";
    int h[26] = {0};
    int ans, i=0, deno=1;

    for(i=0; c[i]!='\0'; i++){
        h[c[i]-97] += 1;
    }

    for(int j=0; j<26; j++){
        if(h[j]>1){
            deno *= fac(h[j]);
        }
    }
    ans = fac(i)/deno;

    printf("Total permutation of string = %d", ans);
    return 0;
}

//Brute force is a technique in which we find out all the possible permutations