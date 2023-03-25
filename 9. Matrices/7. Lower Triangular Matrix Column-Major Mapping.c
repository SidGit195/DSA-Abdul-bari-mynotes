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


#COLUMN-MAJOR REPRESENTATION
A = |A11 A21 A31 A41 A51, A22 A32 A42 A52, A33 A43 A53, A44 A54, A55|  
      0   1   2   3   4    5   6   7   8    9   10  11   12  13   14         
A[ROW][COLUMN]      // array notation to hamesha aisa he rahega ke phele row aayegi or baad me column wo change nhii hoga kabhi bhi

Index(A[5][4])  =   [5+4+3] + 1   =  13
Index(A[i][j])  =   [n + (n-1) + (n-2) + ...      ... + n-(j-2)]  +  (i-j)
                =   [n(j-1)  -  (1+2 ...   ..+(j-2))]             +  (i-j)
                
                =   [n(j-1)  -  (j-2)(j-1)/2]  +  (i-j)
 
*/

 