#include<stdio.h>

void swap(int *u, int *v){
    *u = *u + *v;
    *v = *u  -*v;
    *u = *u - *v;
}

int Transposition(int *a, int l, int x){
    for(int i=0; i<l; i++){
        if(a[i]==x){
            swap(&a[i], &a[i-1]);
            return i-1;
        }
    }
    return -1;
}

int move_to_head(int *a, int l, int x){
    for(int i=0; i<l; i++){
        if(a[i] == x){
            swap(&a[i], &a[0]);
            return 0;
        }            
    }
    return -1;
}

int main(){
    int A[] = {1,2,3,4,5,37,132,21,9};

    //Transposition
    // printf("%d\n", Transposition(A, 9, 132));
    // printf("%d\n", A[5]);
    // printf("%d\n", A[6]);

    //Move to Front/Head
    printf("%d\n", move_to_head(A, 9, 21));
    printf("%d\n", A[0]);
    printf("%d\n", A[7]);

    return 0;
}