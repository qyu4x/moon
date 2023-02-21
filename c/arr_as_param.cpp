#include <iostream>
#include <stdio.h>

using namespace std;

// array will always be passed by address(pointer)
// 01
void funArr(int *A) { // pointer A will be independent with size 8 bytes
    for (int i = 0; i < 5; ++i) {
        cout<<A[i]<<endl;
        A[i] = 5-i; // this will impact the array in the main program
    }
}


// this will return array as pointer
// 02
int * funCreateArrInHeapM(int size) {
    int *arr;
    arr = (int *) malloc(size * sizeof(int)); // allocate array in heap memory

    for (int i = 0; i < size; ++i) {
        arr[i] = i+1;
    }
    return arr;
}

int main() {
    // 01
    int A[5] = {1, 2,3 ,4 ,5};
    funArr(A); // actual size is 20 bytes, will  only send the address

    for(int x:A) {
        cout<<x<<endl;
    }

    // 02
    // this will be the new array
    int *ptr, sz = 10;
    ptr = funCreateArrInHeapM(sz); // create new arr, which returns the address of new arr
    for (int i = 0; i < sz; ++i) {
        cout<<ptr[i]<<" ";
    }

    free(ptr);

    return 0;
}