#include <iostream>
#include <stdio.h>
#include <stdlib.h>

using namespace std;

struct Rectangle {
    int length;
    int breath;
};

struct RatingAnime {
    int rating[5];
    char title[30];
};

// pass by value
// value in main will not change
void changeLengthPassByValue(struct Rectangle rectangle) {
    rectangle.length = 30;

    cout << rectangle.length << endl << rectangle.breath << endl;

}

// pass by address
// the value in main func will be change
void changeLengthPassByAddress(struct Rectangle *rectangle) {
    rectangle->length = 30;

    cout << rectangle->length << endl;
    cout << rectangle->breath << endl;
}

// in the case of array the value will pass by value if using a structure
void changeValueArrayInStructure(struct RatingAnime ratingAnime) {
    ratingAnime.rating[0] = 1;
    cout << "anime : " << ratingAnime.title << endl << "has rating : " << ratingAnime.rating[0] << endl;

}

// make an object in the heap memory in the form of a structure and return it
struct Rectangle * createObjectRectangleHeapM(int length, int breath) {
    struct Rectangle *rectangle = (struct Rectangle *) malloc(sizeof(struct Rectangle));
    rectangle->length = length;
    rectangle->breath = breath;
    return rectangle;
}

int main() {

//    struct Rectangle rec1 = {10, 20};
//    changeLengthPassByValue(rec1);
//    cout<<rec1.length<<endl<<rec1.breath<<endl;

//    struct Rectangle rec2 = {10, 20};
//    changeLengthPassByAddress(&rec2);
//    cout << rec2.length << endl << rec2.breath << endl;


//    struct RatingAnime kaguyaSama = {{10, 8, 9, 7, 9}, "kaguya sama love is war"};
//    changeValueArrayInStructure(kaguyaSama);
//    cout << "anime : " << kaguyaSama.title << endl << "has rating : " << kaguyaSama.rating[0] << endl; // will never change

    struct Rectangle *rectangle = createObjectRectangleHeapM(10, 20);
    cout<<rectangle->length<<endl<<rectangle->breath<<endl;

    free(rectangle);


}