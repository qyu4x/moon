//
// Created by MiyukiKoishiro on 2/19/2023.
//

#include <stdio.h>
#include <iostream>

using namespace std;

struct Rectangle {
    int length; // consume 4 byte
    int breath;
    char name; // consume 1 byte but take 4
};
// define global
struct Rectangle rectangleOne;

int main() {
    // define local directly
    struct  Rectangle rectangleTwo = {10, 12};
    // change value
    rectangleTwo.length = 10;
    rectangleTwo.breath = 110;

    cout<<rectangleTwo.length<<endl;
    cout<<rectangleTwo.breath<<endl;

    // size 12 but reality used 9 byte
    printf("%lu", sizeof(rectangleTwo));

    // define local
    struct Rectangle rectangleNya;
    rectangleNya.length = 10;
    rectangleNya.breath = 30;

    return 0;

}