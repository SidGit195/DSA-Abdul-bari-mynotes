/*
# Sparse Matrix:-
A sparse matrix is a matrix in which many or most of the elements have a value of zero. 
Example: 
        0 0 3 0 4            
        0 0 5 7 0
        0 0 0 0 0
        0 2 6 0 0

-> To save time & space again we store only non-zero elements.
# Two Ways:-
1) Co-ordinate list (3-column representation)                        2) Compressed sparse row


1) Co-ordinate list (3-column representation):-

#               ROW  |  COLUMN  |  ELEMENT (non-zero)
 TOTAL  ---->    8   |     9    |     8                           
                                                                        # SPARSE MATRIX
PARTICULAR -->   1   |     8    |     3                              1  2  3  4  5  6  7  8  9
 ELEMENTS        2   |     3    |     8                            1|0  0  0  0  0  0  0  3  0|
                 2   |     6    |     10                           2|0  0  8  0  0  10 0  0  0|
                 4   |     1    |     4                            3|0  0  0  0  0  0  0  0  0|
                 6   |     3    |     2                            4|4  0  0  0  0  0  0  0  0|
                 7   |     4    |     6                            5|0  0  0  0  0  0  0  0  0|
                 8   |     2    |     9                            6|0  0  2  0  0  0  0  0  0|
                 8   |     5    |     5                            7|0  0  0  6  0  0  0  0  0|
                                                                   8|0  9  0  0  5  0  0  0  0|
        Touple of 3-values.
                                                                        ---->  8 X 9


2) Compressed sparse row:-
--> take same above matrix

    A[3 8 10 4 2 6 9 5]     -->Do not change the order of elements, array of non-zero elements

 Row-array ----->   IA[0 1 3 3 4 4 5 6 8]
                       0 1 2 3 4 5 6 7 8

 Column-array -->   JA[8 3 6 1 3 4 2 5]   ---=> Column no. corresponding to elements.

--------------------------------
 8 x 9 = 72
         72 x 4 = 288        
But we use
 8 + 9 + 8 = 25
         25 x 4 = 100
            we save approx. 2/3 rd memory.

*/