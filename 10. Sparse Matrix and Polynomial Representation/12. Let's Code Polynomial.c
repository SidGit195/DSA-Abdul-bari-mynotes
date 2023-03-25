/*
1. Polynomial Representation
2. Evaluation of Polynomial
3. Addition of two Polynomials

*/

#include<stdio.h>
#include<stdlib.h>
#include<math.h>

struct term{
    int coeff;
    int exp;
};

struct Poly{
    int n;              // no. of non-zero terms
    struct term *t;
};

void Create(struct Poly *p){
    printf("Enter number of all non-zero terms\n");
    scanf("%d", &p->n);

    p->t = (struct term *)malloc(p->n*sizeof(struct term));

    printf("Enter all terms i.e. Coefficient & Power\n");
    for(int i=0; i<p->n; i++){
        printf("Enter term no. %d\n", i+1);
        scanf("%d%d", &p->t[i].coeff, &p->t[i].exp);
    }  
}

void Display(struct Poly p){
    for(int i=0; i<p.n; i++){
        printf("%dx^%d", p.t[i].coeff, p.t[i].exp);
        if(i != p.n-1)
            printf(" + ");
    }
    printf("\n");
}

int Evaluate(struct Poly p){
    int x, sum=0;
    printf("Enter X:");
    scanf("%d", &x);
    for(int i=0; i<p.n; i++)
        sum += p.t[i].coeff*pow(x, p.t[i].exp);
    return sum;
}

struct poly *Add(struct Poly *p1, struct Poly *p2){
    int i, j, k;
    struct Poly *sum;
    sum = (struct Poly *)malloc(sizeof(struct Poly));
    sum->t = (struct term *)malloc((p1->n + p2->n)*sizeof(struct term));
    i=j=k=0;

    while(i<p1->n && j<p2->n){
        if(p1->t[i].exp > p2->t[j].exp)
            sum->t[k++] = p1->t[i++];
        else if(p1->t[i].exp < p2->t[j].exp)
            sum->t[k++] = p2->t[j++];

        else{
            sum->t[k] = p1->t[i];
            sum->t[k++].coeff += p2->t[j++].coeff;
        }
    }
    for(; i<p1->n; i++) sum->t[k++] = p1->t[i];
    for(; j<p2->n; j++) sum->t[k++] = p2->t[j];
    sum->n = k;

    return sum;
}

int main(){
    struct Poly p1, p2, *p3;

    Create(&p1);
    printf("\n"); 
    Display(p1);
    printf("\n");
    printf("%d\n", Evaluate(p1));
    printf("\n");

    Create(&p2);
    printf("\n");
 
    p3 = Add(&p1,&p2);
    // Display(*p3);

    return 0;
}


//A mistake which i not able to identify.
//you can see solution in 12. tufani (working)