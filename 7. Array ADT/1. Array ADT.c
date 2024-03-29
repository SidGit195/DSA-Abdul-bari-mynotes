//Array ADT(Abstract Data Type)

//Abstract Data Type means representation of data and the set of operations on data

//Data
//1) Array Space
//2) Size
//3) Length (no. of elements)

//Operations
//1) Display()
//2) Add(x)/Append(x)
//3) Insert(index, x)
//4) Delete(index)
//5) Search(index)
//6) Get(x)
//7) Set(index, x)
//8) Max()/Min()
//9) Reverse()
//10) Shift()/Rotate()


#include<stdio.h>
#include<stdlib.h>
struct Array
{
    int *A;
    int size;
    int length;
};
 
void Display(struct Array arr){
    printf("\nElements are:\n");
    for(int i=0; i<arr.length; i++)
        printf("%d ", arr.A[i]);
}

int main(){
    struct Array arr;
    int n;
    printf("Enter size of an array: ");
    scanf("%d", &arr.size);

    arr.A = (int *)malloc(arr.size*sizeof(int));
    arr.length = 0;

    printf("Enter number of numbers");
    scanf("%d", &n);

    printf("Enter all Elements\n");
    for(int i=0; i<n; i++)
        scanf("%d", &arr.A[i]);
    arr.length = n;

    Display(arr);
    free(arr.A);
    return 0;
}