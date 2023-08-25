/*
#include <iostream>
using namespace std;

class circle {
    int radius;
    public:
    void setradius(int radius) {
        this->radius=radius;
    }
    void disp() {
        cout << "Radius of circle: " << radius << endl;
        cout << "Perimeter of circle: " << 2*3.14*radius << endl;
    }
    double area() {
        cout << "area of circle is " << 3.14*radius*radius << endl;
    }
};
                   
int main() {
    circle c1;
    c1.setradius(7);
    c1.area();

    int radius;
    cout << "enter radius value: " << endl;
    cin >> radius;
    cout << "area : " << 3.14*radius*radius << endl;
    return 0;
}
*/
#include <iostream>
using namespace std;

class circle {
    int radius;
    public:
    circle () {
        this->radius=1;
    }
    circle(int radius) {
        this->radius=radius;
    }
    circle(circle &c2) {
        this->radius=c2.radius;
    }
    void disp() {
        cout << "Radius of circle: " << radius << endl;
        cout << "Perimeter of circle: " << 2*3.14*radius << endl;
    }
    double area() {
        cout << "area of circle is " << 3.14*radius*radius << endl;
    }
};
                   
int main() {
    circle c0;
    c0.area();
    circle c1(7);
    c1.area();
    circle c2(c1);
    c2.area();

    return 0;
}