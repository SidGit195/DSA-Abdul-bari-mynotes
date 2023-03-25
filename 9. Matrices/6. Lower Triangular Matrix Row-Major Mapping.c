/*
#Lower Triangular Matrix
-> Lower elements hone chahiye , per ye to confirm hai ke upper elements must be zero

            
                    |A11  0     0    0    0 |
    M       =       |A21  A22   0    0    0 |
(Lower tringular)   |A31  A32  A33   0    0 |
                    |A41  A42  A43  A44   0 |
                    |A51  A52  A53  A54  A55|

        M[i,j] = 0      ; i<j
        M[i,j] = A      ; i>=j
    
        *Non-Zero Elements = 1+2+3+4+5......    = n(n+1)/2
        *Zero Elements = total(n^2) - Non-Zero  = n(n-1)/2


#ROW-MAJOR REPRESENTATION
A = |A11, A21 A22, A31 A32 A33, A41 A42 A43 A44, A51 A52 A53 A54 A55|
      0    1   2    3   4   5    6   7   8   9    10  11  12  13  14
Index(A[5][4])  =   [1+2+3+4] + 3   = 13

Index(A[i][j])  =   [i(i-1)/2]  + [j-1]

*/

 