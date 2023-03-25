//For Anagram 1st we have to check that string are equal in alphabet 
//all letters must bhi present in one another.
//Two strings are said to be anagrams if they make a meaningful word by rearranging or shuffling the letters of the string
//ex:- decimal or medical

#include<stdio.h>

//M-1 -----> O(n^2)
int anagram(char a[], char b[]){ 
    int flag=1;
    for(int i=0; a[i]!='\0'; i++){
        for(int j=0; b[j]!='\0'; j++){
            if(a[i]==b[j] && b[j]!='0'){            //assuming string not containing zero previous 
                b[j] = '0';
            }
        }
    }

    for(int j=0; b[j]!='\0'; j++){
        if(b[j]!='0')
            flag = 0;
    }

    return flag;
}

int main(){
    char a[] = "decimal";
    char b[] = "medical";

    if(anagram(a, b) == 1)
        printf("string is anagram");
    else
        printf("string is not an anagram");
        
    return 0;
}


//M-2 (by Hash table) -----> O(n)
int main(){
    int flag=0;
    char a[] = "decimal";
    char b[] = "medical";

    int h[26] = {0};

    //assuming string are of equal length kyonki vo to dekh kar he bta denge na hum
    for(int i=0; a[i]!='\0'; i++){
        h[a[i]-97] += 1;
        h[b[i]-97] -= 1;
    }

    for(int i=0; i<26; i++){
        if(h[i]!=0)
            flag = 1;
    }

    if(flag == 1)
        printf("string is not an anagram");
    else
        printf("string is an anagram");

    return 0;
}


// if there is no dublicate in the string then for to check anagram we can also use bit approach.