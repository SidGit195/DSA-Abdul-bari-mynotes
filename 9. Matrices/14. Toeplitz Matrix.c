/*
# Toeplitz Matrix
--> 
                    |2  3  4  5  6|
            M   =   |7  2  3  4  5|
                    |8  7  2  3  4|j-i=2
                    |9  8  7  2  3|j-i=1
                    |10 9  8  7  2|i-j=0
                         8(i-j=2) 7(i-j=1)  

           # M[i,j] = M[i-1,j-1]         
    # Total Elements which we have to store = 2n-1

A[2n-1] = |2  3  4  5  6,  7  8  9  10|
           0  1  2  3  4   5  6  7  8
               ROW      |   COLUMN


    #Index(A[i][j])
            case 1) if i<=j     ; Index = j-i
            case 2) if i>j      ; Index = n+i-j+1
            
*/