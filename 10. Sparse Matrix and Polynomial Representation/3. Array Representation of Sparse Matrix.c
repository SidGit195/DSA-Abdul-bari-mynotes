/*
# Sparse Matrix:-
1. How to Represent
2. How to create
3. How to add

*/

#include<stdio.h>
#include<stdlib.h>

struct Element{
    int i;
    int j;
    int x;
};

struct Sparse{                                              //            1  2  3  4  5
    int m;                                                  //          1|0  0  7  0  0|
    int n;                                                  //    A  =  2|2  0  0  5  0|
    int num;     //No. of non-zero vaue                     //          3|9  0  0  0  0|
    struct Element *e;                                      //          4|0  0  0  0  4|
};                                                          //                4 X 5

void Create(struct Sparse *s){
    printf("Enter Dimensions Row & Column\n");              //               0      1   2   3   4   5
    scanf("%d %d", &s->m, &s->n);                           //            i| 4  |   1 | 2 | 2 | 3 | 4 |   
    printf("Enter number of non-zero elements\n");          //     A  =   j| 5  |   3 | 1 | 4 | 1 | 5 |   
    scanf("%d", &s->num);                                   //            x| 5  |   7 | 2 | 5 | 9 | 4 |   

    s->e = (struct Element *)malloc(s->num*sizeof(struct Element));

    printf("Enter all Row, Column & element one by one\n");
    for(int y=0; y<s->num; y++){
        scanf("%d %d %d", &s->e[y].i, &s->e[y].j, &s->e[y].x);
    }
}

void Display(struct Sparse s){
    int k=0;
    for(int u=0; u<s.m; u++){
        for(int v=0; v<s.n; v++){
            if(u==s.e[k].i && v==s.e[k].j){
                printf("%d ", s.e[k].x);
                k++;
            }
            else
                printf("0 ");
        }
        printf("\n");
    }
}

void freee(struct Sparse *s){
    free(s->e);
}

int main(){
    struct Sparse s;
    Create(&s);
    Display(s);
    freee(&s);
    return 0;
}