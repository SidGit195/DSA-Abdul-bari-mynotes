// Reverse
// left/Right shift
// left/Rgiht rotate

#include<stdio.h>
#include<stdlib.h>

struct Array{
    int A[20];
    int length;
    int size;
};

void Display(struct Array arr){
    for(int i=0; i<arr.length; i++)
        printf("%d ", arr.A[i]);
}

void Reverse(struct Array *arr){
    int *B;

    B = (int *)malloc(arr->length*sizeof(int));
    for(int i=arr->length-1, j=0; i>=0; i--,j++)
        B[j] = arr->A[i];
    for(int i=0; i<arr->length; i++)
        arr->A[i] = B[i];
    free(B);
}

void SwapReverse(struct Array *arr){
    int t;
    for(int i=0, j=arr->length-1; i<j; i++,j--){
        t = arr->A[i];
        arr->A[i] = arr->A[j];
        arr->A[j] = t; 
    }
}

int main(){
    struct Array arr = {{2,6,8,7,3}, 5, 20};

    Reverse(&arr);
    Display(arr);
    SwapReverse(&arr);
    printf("\n");
    Display(arr);
    return 0;
}