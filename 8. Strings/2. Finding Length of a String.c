#include<stdio.h>

int main(){
    char *s = "welcome home";
    int i;
    for(i=0; s[i] != '\0'; i++){}
    printf("%d",i);
    return 0;
}
