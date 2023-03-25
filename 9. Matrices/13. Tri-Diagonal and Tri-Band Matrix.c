/*
# Tri-Diagonal & Tri-Band Matrix
--> The elements which do not follow the condition must be zero.

                |A11 A12  0   0   0 |
        M   =   |A21 A22 A23  0   0 |
                | 0  A32 A33 A34  0 |
                | 0   0  A43 A44 A45|
                | 0   0   0  A54 A55| 

    #Conditions:-
    1) Main Diagonal Elements  =  i = j
    2) Lower  ''      ''       =  i - j  =  1
    3) Upper  ''      ''       =  i - j  = -1
    Sumation of All Conditions = |i - j| <= 1

            * M[i,j]    =   non-zero        ; if |i-j| <= 1
            * M[i,j]    =      0            ; if |i-j| >  1
            
    # Total non-zero elements   =   3n - 2

# Here, we do not store elements as Row-Wise or Column-Wise in an array bcz they do not stores uniform elements in each row or column.

# So here we store elements as diagonal wise:-
* A[3n-2]   =   |A21 A32 A43 A54, A11 A22 A33 A44 A55, A12 A23 A34 A45|
                  0   1   2   3    4   5   6   7   8    9   10  11  12

# Index(A[i][j]) = 
             case 1) if i-j = 1     ; index = i-2           --> Lower Diagonal Matrix      
             case 2) if i-j = 0     ; index = n-1 + i-1     --> Principal Diagonal Matrix
             case 3) if i-j = -1    ; index = 2n-1 + i-1    --> Upper Diagonal Matrix       

*/


/*
# Square-Band Matrix
--> When more than one diagonal line elements above or below principle diagonal elements but they are same above or below

*/