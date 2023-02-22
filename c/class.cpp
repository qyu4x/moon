#include <iostream>
#include <stdio.h>

using namespace std;

class Rectangle {
private:
    int length;
    int breath;

public:
    Rectangle() {
        length = 0;
        breath = 0;
    }

    Rectangle(int l, int b) {
        length = l;
        breath = b;
    }

    int area() {
        return length * breath;
    }

    int perimeter() {
        return 2 * (length + breath);
    }

    void setLength(int length) {
        Rectangle::length = length;
    }

    int getLength() const {
        return length;
    }

    ~Rectangle() { // destructor, like free in c and delete in c++

    }

};

int main() {
    Rectangle rectangle(10, 10);
    cout<<rectangle.area()<<endl;
    cout<<rectangle.perimeter()<<endl;

    return 0;
}