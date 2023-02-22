#include <iostream>
#include <stdio.h>

using namespace std;

int main() {
    int length = 0, breath = 0;

    printf("Please enter length and breath \n ");
    cin >> length;
    cin >> breath;

    int area = length * breath;
    int pr = 2 * (length + breath);

    printf("Rectangle area is %d \n Breath is %d ", area, pr);


}