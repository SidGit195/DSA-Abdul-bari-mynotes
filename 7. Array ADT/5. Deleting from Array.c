#include<stdio.h>
#include<stdlib.h>

struct Array
{
    int A[10];
    int size;
    int length;
};

int Delete(struct Array *arr, int index){
    int x=0;

    if(index>=0 && index<arr->length){
        x = arr->A[index];
        for(int i=index; i<arr->length; i++)
            arr->A[i] = arr->A[i+1];
        arr->length--;
        return x;
    }
    return 0;
}

int main(){
    struct Array arr = {{5,3,2,4,1}, 10, 5};

    printf("%d",Delete(&arr, 2));
    printf("\n%d",arr.A[3]);
    printf("\n%d",arr.A[4]);
    return 0;
}

// min time: O(1)
// max time: O(n)