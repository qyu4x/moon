#include <iostream>
#include <stdio.h>

using namespace std;

int main() {

    int vv = 10;
    int &p = vv; // reference, you can mention (ALIAS)

    p = vv += 10; // change value vv and p to 20

    cout<<vv<<endl<<p<<endl;


    int y = 10;
    int &x = y;

    int z = 22;
    x = z; // change x, and y to 22

    cout<<y<<endl<<x<<endl<<z<<endl;


}