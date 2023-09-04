#include<iostream>
using namespace std;

void Merge(int A[], int l, int m, int h){
    int i, j, k;
    int B[h+1];
    i = l; j = m+1; k = l;

    while(i<=m && j<=h){
        if(A[i]<A[j])
            B[k++] = A[i++];
        else
            B[k++] = A[j++];
    }

    for(; i<=m; i++)
        B[k++] = A[i];
    for(; j<=h; j++)
        B[k++] = A[j];

    for(int p=l; p<=h; p++)
        A[p] = B[p];
}

void RMergeSort(int A[], int l, int h){
    int mid;
    if(l<h){
        mid = (l+h)/2;
        RMergeSort(A, l, mid);
        RMergeSort(A, mid+1, h);
        Merge(A, l, mid, h);
    }
}

int main(){
    int A[] = {17, 2, 7, 11, 9, 6, 0, 5}, n=8;
    
    RMergeSort(A, 0, n-1);

    for(int i=0; i<n; i++)
        cout << A[i] << " ";
    cout << endl;

    return 0;
}