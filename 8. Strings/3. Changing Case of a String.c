#include<stdio.h>

int main(){
    char a[] = "WELCOME";
    int i;
    // change upper case to lower case
    for(i = 0; a[i] != '\0'; i++){
        a[i] = a[i] + 32;           //concept  {lower case} - {upper case} = 32;
    }
    printf("%s", a);
    return 0;
}


int main(){
    char a[] = "w5LcoMe";
    for(int i=0; a[i] != '\0'; i++){
        if(a[i]>=65 && a[i]<=100)
            a[i] += 32;
        else if(a[i]>='a' && a[i]<=122)
            a[i] -= 32;
    }
    printf("%s", a);
    return 0;
}