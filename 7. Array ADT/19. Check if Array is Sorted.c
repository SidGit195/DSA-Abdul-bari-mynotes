#include<stdio.h>

struct Array{
    int A[20];
    int size;
    int lenght;
};

void Display(struct Array arr){
    for(int i=0; i<arr.lenght; i++)
        printf("%d ", arr.A[i]);
}

void InsertSort(struct Array *arr, int x){
    int i=arr->lenght-1;
    if(arr->lenght == arr->size)
        return;
    while(i>=0 && arr->A[i]>x){
        arr->A[i+1] = arr->A[i];
        i--;
    }
    arr->A[i+1] = x;
    arr->lenght++;
}

int isSorted(struct Array arr){
    for(int i=0; i<arr.lenght-1; i++)
        if(arr.A[i]>arr.A[i+1]){
            return 1;
        }
    return 0;
}

// - wale ek taraf or + wale ek taraf
void Rearrange(struct Array *arr){
    int i=0, j=arr->lenght-1;
    while(i<j){
        while(arr->A[i]<0)
            i++;
        
        while(arr->A[j]>=0)
            j--;
        
        if(i<j){
        int t = arr->A[i];
        arr->A[i] = arr->A[j];
        arr->A[j] = t;
        }
    }
}

int main(){
    struct Array arr = {{4,8,10,14,16,20,24,30,32}, 20, 8};
    InsertSort(&arr, 18);
    Display(arr);
    printf("%d", isSorted(arr));

    struct Array arr1 = {{-2,3,-5,-8,4,7}, 20, 6};
    Rearrange(&arr1);
    Display(arr1);
    return 0;
}