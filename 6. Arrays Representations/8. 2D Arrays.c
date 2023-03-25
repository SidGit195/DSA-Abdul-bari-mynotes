// A[3][4]:-        3 = rows & 4 = columns

//(1) A[3][4] = {{1,2,3,4}, {2,3,4,5}, {3,4,5,6}}


// C++ notation
//(2) int *A[3];            //Array of pointers inside the stack
// A[0] = new int[4];
// A[1] = new int[4];
// A[2] = new int[4];
//
// A[1][2] = 15;
//
// C-notation
// int *B[3];
// B[0] = (int *)malloc(4*sizeof(int));
// B[1] = (int *)malloc(4*sizeof(int));
// B[2] = (int *)malloc(4*sizeof(int));


// C++ notation
//(3) int **A; 
// A = new int*[3];
// A[0] = new int[4];
// A[1] = new int[4];
// A[2] = new int[4];
//
// C-notation
// int **c;
// c = (int **)malloc(3*sizeof(int *));
// c[0] = (int *)malloc(4*sizeof(int));
// c[1] = (int *)malloc(4*sizeof(int));
// c[2] = (int *)malloc(4*sizeof(int));

// 2-D Array can be accessed by using nested loops

// jab code run hota hai na, memory to tab he allocate hote hai but compiler kya karta hai ke ek formula bna
// laita hai compile time mai uske unusar baad me memory allocate kar daita hai
// 
// 2-D -> 2d array hota to two dimensional hai but us se memory linearly he allocate hote hai

// Horner's rule used to reduce the number of multiplication (useful law) {also we this in recursion of fibonaci series.}
// which decreases time complaxcity


//see video 13 for Array formula
//for condition
//for row go rigth to left
//for column fo left to right
// Base_Address + (condn)*W