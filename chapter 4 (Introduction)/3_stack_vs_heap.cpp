#include<stdio.h>
#include<stdlib.h>

int main(){
    int *p;     //for any variable memory is allocated in stack

    p = new int [5];    //syntax in c++        //new allocate memory in heap of an array of int 5 , here pointer stores address of 1st array , other we access by p++.
    p = (int *)malloc(5*sizeof(int));   //syntax in c

    delete [] p;    //request for deallocation of heap memory
    // if you not releasing heap memory, it will be still belonging to your program and that memory can not be used again so it causes loss of memory and the loss of memory is called as memory leak
    // if you continue do same thing in the program (i.e. not deallocating) for many times then at one stage - the heap memory may be full - there is no free space in heap memory
    // So whenever you look at the heap memory and if you don't needed a release the memory
    p = NULL;       // p = 0;
    return 0;
}