/*
Diagonal Matrix:-
A square matrix is said to be a diagonal matrix 
if the elements of the matrix except the main diagonal are zero.

a[i,j] = 0     ; for all i not equal to j


            |3 0 0 0 0|
    M  =    |0 7 0 0 0|    --> A Diagonal Matrix
 (Matrix)   |0 0 4 0 0|
            |0 0 0 9 0|
            |0 0 0 0 6|


    A  =    |3 7 4 9 6|    --> A array which only stores the non-zero digonal elements.
 (Array)  


------------------------------------------------
code part

int A[5];

void set(int A[], int i, int j, int x){
    if(i==j)
        A[i-1] = x;
}

int get(int A[], int i, int j){
    if(i==j)
        return A[i-1];
    else
        return 0;
}
-------------------------------------------------
*/