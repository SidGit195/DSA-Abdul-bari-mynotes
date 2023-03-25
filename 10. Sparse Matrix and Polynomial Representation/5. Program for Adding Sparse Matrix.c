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

struct Sparse{                                         
    int m;                                                 
    int n;                                              
    int num;                                               
    struct Element *e;                                     
};                                                       

void Create(struct Sparse *s){
    printf("Enter Dimensions Row & Column\n");              
    scanf("%d %d", &s->m, &s->n);                           
    printf("Enter number of non-zero elements\n");          
    scanf("%d", &s->num);                                   

    s->e = (struct Element *)malloc(s->num*sizeof(struct Element));

    printf("Enter all Row, Column & element one by one\n");
    for(int y=0; y<s->num; y++){
        scanf("%d %d %d", &s->e[y].i, &s->e[y].j, &s->e[y].x);
    }
}

void Display(struct Sparse *s){
    int k=0;
    for(int u=0; u<s->m; u++){
        for(int v=0; v<s->n; v++){
            if(u==s->e[k].i && v==s->e[k].j){
                printf("%d ", s->e[k].x);
                k++;
            }
            else
                printf("0 ");
        }
        printf("\n");
    }
}

int Add(struct Sparse s1, struct Sparse s2){

    if(s1.m != s2.m || s1.n != s2.n)
        return 0;

    int k=0, v=0, u=0;
    struct Sparse *sum;

    sum = (struct Sparse *)malloc(sizeof(struct Sparse));
    sum->m = s1.m;  sum->n = s1.n;
    sum->e  = (struct Element *)malloc((s1.num + s2.num)*sizeof(struct Element));

    while(v<s1.num && u<s2.num){
    //Comparing Row
    if(s1.e[u].i < s2.e[v].i){
        sum->e[k] = s1.e[u];
        k++; u++;
    }
    else if(s1.e[u].i > s2.e[v].i){
        sum->e[k] = s2.e[v];
        k++; v++;
    }

    else{
        //Compare Column if row = same
        if(s1.e[u].j < s2.e[v].j){
            sum->e[k] = s1.e[u];
            k++; u++;
        }
        if(s1.e[u].j > s2.e[v].j){
            sum->e[k] = s2.e[v];
            k++; v++;
        }

        // if Both = same
        else{   
            sum->e[k] = s1.e[u];
            sum->e[k].x += s2.e[v].x;
            k++; u++; v++;
        }
    }
    }
    for(; u<s1.num; u++)sum->e[k++] = s1.e[u];
    for(; v<s1.num; v++)sum->e[k++] = s2.e[v];
    sum->num = k;
    Display(sum);
}

void freee(struct Sparse *s){
    free(s->e);
}

int main(){
    struct Sparse s1;
    struct Sparse s2;
    struct Sparse s3;
    Create(&s1);
    printf("\n----------------------------------------------\n");
    Create(&s2);
    printf("\n----------------------------------------------\n");

    printf("1st matrix: \n");
    Display(&s1);
    printf("\n\n");
    printf("2st matrix: \n");
    Display(&s2);
    printf("\n\n");

    printf("Sum of the 2 matrix is: \n");
    Add(s1, s2);

    freee(&s1);
    freee(&s2);
    return 0;
}