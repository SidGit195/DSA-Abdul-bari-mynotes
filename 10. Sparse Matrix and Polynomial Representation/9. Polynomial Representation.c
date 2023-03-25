/*
1. Polynomial Representation
2. Evaluation of Polynomial
3. Addition of two Polynomials

*/

#include<stdio.h>
#include<stdlib.h>

struct term{
    int coeff;
    int exp;
};

struct Poly{
    int n;                  // Number of non-zero elements.
    struct term *t;         
};

int main(){
    struct Poly p;
    printf("Number of Non-Zero elements");
    scanf("%d", &p.n);

    p.t = (struct term *)malloc(p.n*sizeof(struct term));

    printf("Enter Polynomial terms\n");
    for(int i=0; i<p.n; i++){
        printf("Enter term no. %d", i+1);
        scanf("%d%d", &p.t[i].coeff, &p.t[i].exp);
    }

    return 0;
}