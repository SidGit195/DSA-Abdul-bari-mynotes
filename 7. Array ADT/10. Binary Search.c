// Binary Search
// For binary search the array must be sorted
// h = high, l = low, m = mid 

#include<stdio.h>
struct Array
{
    int A[20];
    int size;
    int length;
};

// Binary search iterative method. & better method.
int BinarySearch(struct Array arr, int key){
    int l, mid, h;
    l = 0;
    h = arr.length-1;

    while(l<=h){
    mid = (l+h)/2;      //floor value automatically
        if(key == arr.A[mid])
            return mid;
        else if(key<arr.A[mid])
            h = mid-1;
        else
            l = mid+1;
    }

    return -1;
}

// Binary Search using recursion
int RBinarySearch(int a[], int l, int h, int key){
    int mid;

    if(l<=h){
        mid = (l+h)/2;
        if(key == a[mid])
            return mid;
        else if(key < a[mid])
            return RBinarySearch(a, l, mid-1, key);
        else
            return RBinarySearch(a, mid+1, h, key);
    }
    return -1;
}

int main(){
    struct Array arr = {{4,8,10,15,18,21,24,27,29,33,34,37,39,41,43}, 20, 15};

    printf("%d\n", BinarySearch(arr, 41));
    printf("%d", RBinarySearch(arr.A, 0, 14, 34));

    return 0;
}


// Make a binary tree
// Best min: O(1)
// Worst max: O(log(n))
// Time for unsuccessful search is O(log(n))
// Average case time is : O(log(n))
// E = I + 2n                              || E = path of all external nodes.   || I = path of all internal nodes.  || n = total real nodes.
// Approx. E = nlog(n).
// e = i + 1                               || e = all external nodes.           || i = all internal nodes.

// Average Successful time (n-nodes)   = 1 + I/n    = Approx. log(n)
// Average UnSuccessful time (n-nodes) = E/(n+1)    = Approx. log(n)
