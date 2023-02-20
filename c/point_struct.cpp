#include <iostream>
#include <stdio.h>
#include <stdlib.h>

using namespace std;

struct Rectangle {
    int length;
    int breath;
};

int main() {
    // normal
    struct Rectangle rectangleChan = {10, 10};
    cout << rectangleChan.length << endl;
    cout << rectangleChan.breath << endl;

    // with pointer
    struct Rectangle rectangleNya = {20, 20};
    struct Rectangle *rectangleNyaP = &rectangleNya;
    cout << (*rectangleNyaP).length << endl; // or use arrow
    cout << rectangleNyaP->length << endl;


    // create object of rectangle in heap memory
    //c
    struct Rectangle *rectangleHeapA;
    rectangleHeapA = (struct Rectangle *) malloc(sizeof(struct Rectangle));
    rectangleHeapA->length = 11;
    rectangleHeapA->breath = 21;

    cout << rectangleHeapA->length << endl;
    cout << rectangleHeapA->breath << endl;

    return 0;
}