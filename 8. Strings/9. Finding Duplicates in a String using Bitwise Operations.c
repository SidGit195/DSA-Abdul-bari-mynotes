//****Something which is very new****
//Bitwise operator
//1) left shift <<
//2) Bits ORing  (Merging)
//3) Bits ANDing (Masking)
//* 1 Byte = 8 Bits

//Based on the case that bit are on or off

#include<stdio.h>

//Does not run why ?
int mian(){
    char a[] = "finding";
    int h=0;   // 1 int = 32 bit but required is only 26 bit (total alphabet)
    int x=0;
    
    for(int i=0; a[i]!='\0'; i++){
        x = 1;                          // 00001
        x = x << a[i] - 97;             // (lower case) - 97

        if(x&h > 0)
            printf("%c is duplicate", a[i]);
        else
            h = h|x;
    }

    return 0;
}