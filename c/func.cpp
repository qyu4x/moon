#include <iostream>
#include <stdio.h>

using namespace std;


int add(int a, int b) {
    int c;
    c = a + b;

    return c;
}

int main() {
    int z = 10, y = 20, p;
    p = add(z, y);

    cout<<p<<endl;
    return 0;

}