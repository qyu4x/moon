//
// Created on 2/19/2023.
//

#include <iostream>
#include <stdio.h>
#include <stdlib.h>

using namespace std;

// function declaration
void pointerInVariable();
void pointerInArray();
void pointerInHeapMemoryC();
void pointerInHeapMemoryCplus();

int main() {
    pointerInHeapMemoryCplus();
    return 0;
}

// function definition
// note size of pointer is always 8 byte, i.e for struct, int , float, double etc
void pointerInVariable() {
    int v = 10;
    int *p; // pointer v declaration
    p = &v; // assignment, store address of v in p

    printf("address of v is %d \n", p);
    printf("value of v is %d", *p); //this is dereferencing
}

void pointerInArray() {
    int A[5] = {1, 2, 3, 4, 5};
    int *p;
    p = A;
    //p = &A[0]; // store address of array A in variable pointer p(don't use &A), instead you can use &A[0]

    for (int i = 0; i < 5; ++i) {
        cout<<p[i]<<endl; // access value of array A with pointer, (don't use *A[i])
    }
}

void pointerInHeapMemoryC() {
    // create memory in heap, by default we always use stack for definition a variable
    int *p;
    p = (int *) malloc(5 * sizeof(int)); // 5 is length of array, sizeof(int) is 4 so size of heap memory is 5 * 4 = 20
    p[0] = 10; p[1] = 20; p[2] = 30; p[3] = 30; p[4] = 30;

    for (int i = 0; i < 5; ++i) {
        cout<<p[i]<<endl;
    }

    // don't forget to dealocate(remove memory in heap) memory
    free(p);
}

void pointerInHeapMemoryCplus() {
    int *p;
    p = new int[5];
    p[0] = 10; p[1] = 20; p[2] = 30; p[3] = 30; p[4] = 30;
    for (int i = 0; i < 5; ++i) {
        cout<<p[i]<<endl;
    }

    delete [ ] p; // free memory in c++, based on data type
}