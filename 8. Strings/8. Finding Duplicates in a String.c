#include<stdio.h>

// //M-1 (Comaring with words)
// int main(){

//     return 0;
// }


// M-2 (HASH TABLE)
int main(){
    char c[] = "finding";
    int H[26] = {0};

    for(int i=0; c[i]!='\0'; i++){
        H[c[i]-97] += 1;  
    }

    for(int i=0; i<26; i++){
        if(H[i]>1){
            printf("%c = %d\n", i+97, H[i]);
        }
    }
    return 0;
}

//O(n)

//************************************************
//very important
// #include<stdio.h>

// int main(){
//     int h[26] = {0};     //assign all to zero
//     h[0] = 0;            //only h[0] assign to zero others contain garbage value
//     printf("%d\n", h[0]);
//     printf("%d", h[1]);
//     return 0;
// }
//
//************************************************
