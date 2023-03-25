#include<stdio.h>

struct rectangle{
    int length;
    int breadth;
};

// //Call by Value
// int area(struct rectangle r1){
//     return r1.length*r1.breadth;     //separate object is created
// }

//Call by reference
// int area(struct rectangle &r1){
//     return r1.length*r1.breadth;
// }

// int main(){
//     struct rectangle r = {10, 5};
    
//     printf("%d", area(r));
//     return 0;
// }


//Call by address
void changelength(struct rectangle *p, int l){
    p->length = l;
}

int main(){
    struct rectangle r = {10, 5};

    changelength(&r, 20);
    printf("%d", r.length);
    return 0;
}