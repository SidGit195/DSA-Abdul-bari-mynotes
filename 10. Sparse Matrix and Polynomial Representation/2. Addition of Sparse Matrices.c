/*
# Addition of two Sparse Matrix:-
                                                              i
                  1  2  3  4  5  6                        0   1   2   3   4   5
                1|0  0  0  6  0  0|                    R| 5 | 1 | 2 | 3 | 3 | 5 |
                2|0  7  0  0  0  0|            A  ---> C| 6 | 4 | 2 | 2 | 4 | 1 |
        A  =    3|0  2  0  5  0  0|                     | 5 | 6 | 7 | 2 | 5 | 4 |
                4|0  0  0  0  0  0|
                5|4  0  0  0  0  0|
          

                                                              j
                  1  2  3  4  5  6                        0   1   2   3   4   5   6
                1|0  0  0  0  0  0|                     | 5 | 2 | 2 | 3 | 3 | 4 | 5 |
                2|0  3  0  0  5  0|            B  --->  | 6 | 2 | 5 | 3 | 6 | 4 | 1 |
        A  =    3|0  0  2  0  0  0|                     | 6 | 3 | 5 | 2 | 7 | 9 | 8 |
                4|0  0  0  9  0  0|
                5|8  0  0  0  0  0|
``````````````````````````````````````````````````````````````````````````````````````````````````````````
                                                    +

                  1  2  3  4  5  6                        0   1   2   3   4   5   6   7   8   9   
                1|0  0  0  6  0  0|                     | 5 | 1 | 2 | 2 | 3 | 3 | 3 | 3 | 4 | 5 |
                2|0  10 0  0  5  0|            C  --->  | 6 | 4 | 2 | 5 | 2 | 3 | 4 | 6 | 4 | 1 |
        A  =    3|0  2  2  5  0  7|                     |   | 6 | 10| 5 | 2 | 2 | 5 | 7 | 9 | 12|
                4|0  0  0  9  0  0|
                5|12 0  0  0  0  0|

*/                