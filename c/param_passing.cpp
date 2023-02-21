#include <iostream>
#include <stdio.h>

using namespace std;


// pass by value
// suitable for values that will return value
int add(int x, int y) {
    int p;
    p = x + y;
    return p;
}

// will not affect the main program
void swapPasByValue(int x, int y) {
    int temp;
    temp = x;
    x = y;
    y = temp;
    cout << x << y << endl;
}

// pass by address
// the program will remain modular
// changes will affect main program
void swapPasByAddress(int *x, int *y) {
    int temp = *x;
    *x = *y; // dereference
    *y = temp;

    cout << *x << "  " << *y << endl;

}

// the program will be monolithic
// will not create a new variable in the stack
// just going as alias
// changes will affect main program
void swapPasByReference(int &x, int &y) {
    int temp = x;
    x = y;
    y = temp;

    cout << x << "  " << y << endl;
}

int main() {
    int a = 10;
    int b = 20;

//    swapPasByValue(a, b);
//    cout << a << "  " << b << endl;
//
//    swapPasByAddress(&a, &b);
//    cout << a << "  " << b << endl;

    swapPasByReference(a, b);
    cout << a << "  " << b << endl;
    return 0;
}