#include <iostream>
using namespace std;

class shape {
    double radius;
    double length;
    double width;
    public: 
    shape (float radius) {
        this->radius=radius;
    }
    shape (float length, float width) {
        this->length=length;
        this->width=width;
    }
    ~shape () {}

    double circleArea() {
        return 3.14 *radius*radius;
        }

    double circlePerimeter() {
        return 2 * 3.14 * radius;
        }

    double rectangleArea() {
        return length * width;
        }

    double rectanglePerimeter() {
        return 2 * (length + width);
        }

    double squareArea() {
        return length*length;
        }

    double squarePerimeter() {
        return 4 * length;
        }
};
                   
int main() {
    shape circle(5);
    cout << "Circle area: " << circle.circleArea() << endl;
    cout << "Circle perimeter: " << circle.circlePerimeter() << endl;

    shape rectangle(4, 5);
    cout << "Rectangle area: " << rectangle.rectangleArea() << endl;
    cout << "Rectangle perimeter: " << rectangle.rectanglePerimeter() << endl;

    shape square(4,4);
    cout << "Square area: " << square.squareArea() << endl;
    cout << "Square perimeter: " << square.squarePerimeter() << endl;
    
    return 0;
}