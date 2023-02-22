#include <iostream>
#include <stdio.h>

using namespace std;


class Rectangle {
public:

    int length;
    int breath;

    void initilaization(int length, int breath) {
        this->length = length;
        this->breath = breath;
    }


    int area() {
        return this->length * this->breath;
    }

    int perimeter() {
        return 2 * (this->length + this->breath);
    }

};

int main() {
    Rectangle rectangle;

    int length = 0, breath = 0;
    cout << "Please enter length and breath" << endl;
    cin >> length >> breath;
    rectangle.initilaization(length, breath);

    int area = rectangle.area();
    int perimter = rectangle.perimeter();
    cout << "Area : " << area << endl;
    cout << "perimeter : " << perimter << endl;
}