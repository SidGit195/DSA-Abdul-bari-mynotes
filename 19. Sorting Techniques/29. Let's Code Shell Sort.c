#include<stdio.h>

void ShellSort(int A[], int n){
    int gap, i, j, temp;

    for(gap=n/2; gap>=1; gap/=2){
        for(i=gap; i<n; i++){
            temp = A[i];
            j = i-gap;
            while(j>=0 && A[j]>temp){
                A[j+gap] = A[j];
                j = j-gap;
            }
            A[j+gap] = temp;
        }
    }
}

int main(){
    int A[] = {18, 0, 5, 13, 2, 7, 11}, n=7;

    ShellSort(A, n);

    for(int i=0; i<n; i++)
        printf("%d ", A[i]);
    printf("\n");

    return 0;
}

