//Gajab Concept
#include<stdio.h>

struct test
{
    int a[5];
    int n;
};

void fun(struct test t1){          //Everything is copied to t1
    printf("%d\n\n", t1.a[0]);
    t1.a[0] = 25;                  //This will not able to change t.a[0] bcz here passed by value takes place
}

int main(){
    struct test t = {{1,2,3,4,5}, 10};
    fun(t);
    printf("%d", t.a[0]);
    return 0;
}