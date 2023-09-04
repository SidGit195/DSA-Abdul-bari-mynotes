#include<stdio.h>
#include<stdlib.h>

int findMax(int A[], int n){
    int max = -10000;

    for(int i=0; i<n; i++){
        if(A[i] > max)
            max = A[i];
    }
    return max;
}

void CountSort(int A[], int n){
    int i, j, max, *c;

    max = findMax(A, n);
    c = (int *)malloc((max+1)*sizeof(int));

    for(i=0; i<max+1; i++)
        c[i] = 0;

    for(j=0; j<n; j++)
        c[A[j]]++;
    
    i=0; j=0;
    while(j < max+1){
        if(c[j] > 0){
            A[i++] = j;
            c[j]--;
        }
        else
            j++;
    }
    free(c);
}

int main(){
    int A[] = {8, 2, 18, 21, 0, 4, 2}, n=7;

    CountSort(A, n);

    for(int i=0; i<n; i++)
        printf("%d ", A[i]);
    printf("\n");

    return 0;
}