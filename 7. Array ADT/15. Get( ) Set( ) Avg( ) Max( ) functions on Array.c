#include<stdio.h>

struct Array{
    int A[20];
    int size;
    int length;
};

int Get(struct Array arr, int index){
    if(index>=0 && index<arr.length)
        return arr.A[index];
    return -1;      
    // O(1)
}

int Set(struct Array *arr, int index, int x){
    if(index>=0 && index<arr->length)    
        arr->A[index] = x;
    // O(1)
}

int Max(struct Array arr){
    int max = arr.A[0];
    for(int i=1; i<arr.length; i++){
        if(arr.A[i]>max)
            max = arr.A[i];
    }
    return max;
    // O(n)
}

int Min(struct Array arr){
    int min = arr.A[0];
    for(int i=1; i<arr.length; i++){
        if(arr.A[i]<min)
            min = arr.A[i];
    }
    return min;
    // O(n)
}

// Sum using loops
int Sum(struct Array arr){
    int total = 0;
    for(int i=0; i<arr.length; i++)
        total += arr.A[i];
    return total;
    // O(n)
}

// Sum using recursion
int RSum(struct Array arr, int n){
    if(n<0)
        return 0;
    else
        return sum(arr ,n-1) + arr.A[n];
}

float Avg(struct Array arr)
{
    return (float)Sum(arr)/arr.length;
}

int main(){
    struct Array arr = {{4,3,7,2,8,1}, 20, 6};

    return 0;
}