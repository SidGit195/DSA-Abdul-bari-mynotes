#include<stdio.h>

void swap(int *x, int *y){
    int temp = *x;
    *x = *y;
    *y = temp;
}

void Selection(int A[], int n){
    int j, k;
    for(int i=0; i<n-1; i++){
        for(j = k = i; j<n; j++){
            if(A[j] < A[k])
                k = j;
        }
        swap(&A[i], &A[k]);
    }
}

int main(){
    int A[] = {8, 6, 3, 2, 5, 4};

    Selection(A, 6);

    for(int i=0; i<6; i++)
        printf("%d ", A[i]);
    printf("\n");
    
    return 0;
}