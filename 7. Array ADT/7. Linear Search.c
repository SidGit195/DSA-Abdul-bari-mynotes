//linear search

#include<stdio.h>

int search(int *arr, int size, int x){
    for(int i=0; i<size; i++){
        if(x == arr[i])
            return i;
    }
    return -1;
}


int main(){
    int arr[] = {1,2,3,4,5,6,7,8,9,10};
    
    printf("%d", search(arr, 10, 6));
    return 0;
}

// min time: O(1)
// max time: O(n)
// Average time: O(n) ; (n+1)/2