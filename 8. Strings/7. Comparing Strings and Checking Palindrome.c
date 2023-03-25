#include<stdio.h>

// comparision of string
// we can also able to tell which string come 1st in dictionary by the help of ascii values.
// int main(){
//     char a[50], b[50];
//     printf("Enter two strings one by one\n");
//     gets(a);
//     gets(b);

//     int t=0, i=0;

//     for(i; a[i]==b[i]; i++){
//         if(a[i]=='\0')
//             t = 1;
//     }
    
//     if(t==1)
//         printf("Both string are same");
//     else{
//         printf("Strings differ at %dth position\n", i+1);
//     // better if you 1st check upper case or lower case
//         if(a[i]>b[i])
//             printf("1st string is greater than 2nd");
//         else
//             printf("2nd string is greater than 1st");
//     }


//     return 0;
// }


//Palindrome:- after reversing word remain same 
//ex:- nitin, madam.
//To check
//m-1
//1st we reverse string
//than compare each alphabet.
//m-2
//compare alphabets from bigging and end one by one


int main(){
    char c[40];
    printf("Enter a string: ");
    gets(c);
    int i=0, x=0;

    for(; c[i]!='\0'; i++){}
    i = i-1;

    for(int j=0; c[i]==c[j] && i>=0; i--,j++){}

    if(i+1==0)
        printf("word is a palindrome\n");
    else
        printf("word is not a palindrome\n");

    return 0;
}
