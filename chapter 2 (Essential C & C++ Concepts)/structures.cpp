// structure is a collection of disimilar data-types under one name
// structure is a group of related data members
#include<iostream>
using namespace std;

struct rectangle
{
    int length;
    int breadth;
};


int main(){
    // struct rectangle r {2,3};
    // cout << r.length << endl;
    // cout << r.breadth << endl;

    struct rectangle r; 
    r.length = {2};
    r.breadth = {3};
    
    cout << r.length << endl;
    cout << r.breadth << endl;

    struct rectangle rec[50];    //array of structures
    rec[0] = {2,3};
    rec[1].length = 4;
    cout << rec[0].length << endl;
    
    // struct rectangle rec[50] = {{1,2}, {2,3}, {3,4}, ..............,{9,0}}
    return 0;
} 
