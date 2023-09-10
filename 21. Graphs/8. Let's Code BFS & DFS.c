#include<stdio.h>
#include "C:\Users\Siddharth Ojha\Desktop\DSA\Queue.h"


// BFS --> uses queue data structure
void BFS(int G[][7], int start, int n){        // first dimension doesn't required but seceond needed
    int i = start;
    int visited[7] = {0};

    printf("%d ", i);
    visited[i] = 1;
    enqueue(i);

    while (!isEmpty())
    {
        i = dequeue();

        for(int j=1; j<n; j++){
            if(G[i][j]==1 && visited[j]==0){
                printf("%d ", j);
                visited[j] = 1;
                enqueue(j);
            }
        }
    }
}        


// DFS --> uses stack data structure
void DFS(int G[][7], int start, int n){
    static int visited[7] = {0};

    if(visited[start] == 0){
        printf("%d ", start);
        visited[start] = 1;

        for(int j=1; j<n; j++){
            if(G[start][j] == 1 && visited[j] == 0){
                DFS(G, j, n);
            }
        }
    }
}

int main(){
    int G[7][7]={{0,0,0,0,0,0,0},
                 {0,0,1,1,0,0,0},
                 {0,1,0,0,1,0,0},
                 {0,1,0,0,1,0,0},
                 {0,0,1,1,0,1,1},
                 {0,0,0,0,1,0,0},
                 {0,0,0,0,1,0,0}};

    // BFS(G, 4, 7);
    DFS(G, 2, 7);
    return 0;
}   