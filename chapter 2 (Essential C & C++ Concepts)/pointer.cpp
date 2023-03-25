#include<cstdlib>
using namespace std;

int main(){
    int *p;
    p = (int *)malloc(5 * sizeof(int));     // for c language, 20 bytes memory provided by malloc always in heap
    p = new int[5];     // for c++
    return 0;
}