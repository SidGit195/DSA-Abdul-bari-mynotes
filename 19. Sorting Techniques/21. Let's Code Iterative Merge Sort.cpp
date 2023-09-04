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

void IMergeSort(int A[], int n){
    int p, i, l, m, h;

    for(int p=2; p<=n; p=p*2){
        for(int i=0; i+p-1<n; i=i+p){
            l = i;
            h = i+p-1;
            m = (l+h)/2;
            Merge(A, l, m, h);
        }
    }
    if(p/2 < n)
        Merge(A, l, p/2, n-1);
}

int main(){
    int A[] = {17, 2, 7, 11, 9, 6, 0, 5}, n=8;
    
    IMergeSort(A, n);

    for(int i=0; i<n; i++)
        cout << A[i] << " ";
    cout << endl;

    return 0;
}