#include<stdio.h>

//M-1 (using an array)
// int main(){
//     char a[] = "Siddharth";
//     char b[11];
//     int i;
//     for(i=0; a[i]!='\0'; i++){}
//     i = i-1;

//     int j=0;
//     for(j; i>=0; i--,j++){
//         b[j] = a[i];
//     }
//     b[j+1] = '\0';

//     printf("%s", b);
//     return 0;
// }


//M-2 (without using an array)
int main(){
    char a[] = "Siddharth";
    char tamp;

    int j=0;
    for(j; a[j]!='\0'; j++){}
    j = j-1;

    for(int i=0; i<j; i++,j--){
        tamp = a[i];
        a[i] = a[j];
        a[j] = tamp;
    }

    printf("%s", a);
    return 0;
}  