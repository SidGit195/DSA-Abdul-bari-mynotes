//(1) Function is a piece of code which performe specific task
//(2) Function as a group of related instructions
#include<stdio.h>

int add(int a, int b){      //(5) function prototype , (a,b) = Formal parameter
    int c;                  //(6) declaration or defination of a function
    c = a+b;
    return c;
}

int main(){             //(3) Program starts from here
    int x,y,z;
    x = 2;
    y = 3;

    z = add(x,y);       //(4) Function Call , (x,y) = Actual parameter
    printf("%d", z);
    return 0;
}

//(7) Benefit of function is that the function will have its own activation card 
//    its separate set of variables for the debate inside the memory and when
//    it is called they are created and it is destroyed when their function terminates.

//(8) function cannot access the variables of main and main cannot access the variables
//    of the function & one function cannot access the variables of the another function