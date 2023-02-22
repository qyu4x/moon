#include <iostream>
#include <stdio.h>

using namespace std;

// T is generic
template<class T>
class Rectangle {
private:
    T length;
    T breath;

public:
    Rectangle();
    Rectangle(T length, T breath);

    T area();
    T perimeter();

};

template<class T>
Rectangle<T>::Rectangle(T length, T breath) {
    this->length = length;
    this->breath = breath;
}

template<class T>
T Rectangle<T>::area() {
    return this->length * this->breath;
}

template<class T>
T Rectangle<T>::perimeter() {
    return 2 * (this->length + this->breath);
}


int main() {
    Rectangle<int> rectangleInt(10, 10);
    cout<<"Area: "<<rectangleInt.area()<<endl<<"Perimeter: "<<rectangleInt.perimeter()<<endl;

    Rectangle<char> rectangleChar('A', 'B');
    cout<<"Area: "<<(int)rectangleChar.area()<<endl<<"Perimeter: "<<(int)rectangleChar.perimeter()<<endl;
}