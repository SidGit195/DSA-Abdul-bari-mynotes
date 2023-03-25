/*
#Upper Triangular Matrix
-> Upper elements hone chahiye , per ye to confirm hai ke Lower elements must be zero

            
                    |A11  A12  A13  A14  A15|
    M       =       | 0   A22  A23  A24  A25|
(Upper tringular)   | 0    0   A33  A34  A35|
                    | 0    0    0   A44  A45|
                    | 0    0    0    0   A55|

        M[i,j] = 0      ; i>j
        M[i,j] = A      ; i<=j
    
        *Non-Zero Elements = 5+4+3......        = n(n+1)/2
        *Zero Elements = total(n^2) - Non-Zero  = n(n-1)/2


#Column-MAJOR REPRESENTATION
A = |A11 A12 A13 A14 A15, A22 A23 A24 A25, A33 A34 A35, A44 A45, A55|
      0   1   2   3   4    5   6   7   8    9   10  11   12  13   14
Index(A[4][5])  =   [5+4+3] + 1   =   13

Index(A[i][j])  =   [1 + 2 + ..  ... + j-1]  +  (i-1)
Index(A[i][j])  =   [j(j-1)/2]  +  (i-1)

*/

 