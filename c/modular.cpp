#include <iostream>
#include <stdio.h>

using namespace std;

struct Rectangle {
    int length;
    int breath;
};

void initialization(struct Rectangle *rectangle) {
    rectangle->length = 0;
    rectangle->breath = 0;

    printf("Please enter length and breath \n ");
    cin>>rectangle->length;
    cin>>rectangle->breath;
}

int areaR(struct Rectangle rectangle) {
    return rectangle.length * rectangle.breath;
}

int perimeter(struct Rectangle rectangle) {
    return 2 + (rectangle.length + rectangle.breath);
}

void printResult(int area, int perimter) {
    printf("Area %d \n Perimeter %d", area, perimter);
}

int main() {
    struct Rectangle rectangle;
    initialization(&rectangle);

    int area = areaR(rectangle);
    int perimter = perimeter(rectangle);

    printResult(area, perimter);


}