#include<stdio.h>

void Insertion(int A[], int n){
    int x, j;

    for(int i=1; i<n; i++){
        j = i-1;
        x = A[i];
        while(j>-1 && A[j]>x){
            A[j+1] = A[j];
            j--;
        }
        A[j+1] = x;
    }
}

int main(){
    int A[] = {3, 9, 2, 7, 1, 6};

    Insertion(A, 6);

    for(int i=0; i<6; i++)
        printf("%d ", A[i]);
    printf("\n");

    return 0;
}