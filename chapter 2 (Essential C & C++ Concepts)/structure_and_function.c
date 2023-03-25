#include<stdio.h>

struct rectangle{
    int length;
    int breadth;
};

void initialize(struct rectangle *r1, int l, int b){
    r1->length = l;
    r1->breadth = b;
}

int area(struct rectangle r1){
   return r1.length*r1.breadth; 
}

void changelength(struct rectangle *r1, int n){
    r1->length = 30;
}

int main(){
    struct rectangle r;
    initialize(&r, 10, 5);
    area(r);
    printf("%d", area(r));
    changelength(&r, 20);
    return 0;
}