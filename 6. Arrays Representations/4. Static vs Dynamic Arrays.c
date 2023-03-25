//size of an array in c language is decided on compile time
//size of an array in c++ can be define compile time as well as run time 

//Requesting for dynamic memory allocation
#include<stdio.h>
#include<stdlib.h>

int main(){
    int *p;
    p = (int *)malloc(5*sizeof(int));       //request for memory allocation in heap
    p[0] = 5;                               //Pointer now act as an array

    free(p);    // must delete memory 
    return 0;
}