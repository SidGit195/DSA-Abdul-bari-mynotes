#include<stdio.h>

// to count vowels & constants
// int main(){
//     char a[] = "How are you";
//     int i, vcount = 0, ccount = 0;

//     for(i=0; a[i]!='\0'; i++){
//         if(a[i]=='a'||a[i]=='A' ||a[i]=='e'||a[i]=='E' ||a[i]=='i'||a[i]=='I' ||a[i]=='o'||a[i]=='O' ||a[i]=='u'||a[i]=='U')
//             vcount++;
//         else if((a[i]>=65 && a[i]<=90) || (a[i]>=90 && a[i]<=122))
//             ccount++;
//     }
//     printf("%d\n", vcount);
//     printf("%d\n", ccount);
//     return 0;
// }

// to count words 
int main(){
    char a[] = "How are you";
    int wcount=0;
    for(int i=0; a[i]!='\0'; i++){
        if(a[i]==' ' && a[i-1]!=' ')
            wcount += 1;
    }
    printf("%d", wcount+1);
    return 0;
}