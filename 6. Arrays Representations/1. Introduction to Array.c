//Single variable = scaler
//Array = vector (bcz it has dimension)
//Array = Collection of similiar data-types

#include<stdio.h>

int main(){
    // int a[5];
    // int a[] = {1,2,3};
    // int a[5] = {1,2}            //all the rest things initialized to 0;
    // int a[5] = {0};                 //all the value became 0.

    int a[5] = {1,2,3,4,5};
    printf("%d", a[2]);
    printf("%d",2[a]);
    printf("%d",*(a+3));
    return 0;
}