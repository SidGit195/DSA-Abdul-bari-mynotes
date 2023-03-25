//Recursion
//--->When a function call itself, it is called recursive function & process called recursion
//Function tracing is based on a tree system

//I am writing here two codes, strongly suggest to you see output of boths on revision time

#include<stdio.h>

//(1)Switch on bulb
//(2)Go to next room
// void fun1(int n){
//     if(n>0){
//     printf("%d", n);
//     fun1(n-1);
//     }
// }

// int main(){
//     int x = 3;
//     fun1(x);
//     return 0;
// }


//(1)Go to next room
//(2)Switch on bulb
void fun2(int n){
    if(n>0){
    fun2(n-1);
    printf("%d", n);
    }
    // printf("1");     //help in understanding behavier of compiler
}

int main(){
    int x = 3;
    fun2(x);
    return 0;
}

//After performing this two codes, you will get an idea "how the recursion work"
//You can use copy-pen for output

//Not run only for to understand
// void fun(int n){
//     if(n>0){
//         1. execute at the calling time;
//         2. fun(n-1)*2;  // 2 also execute at the returening time
//         3. execute at the returning time;
//     }
// }