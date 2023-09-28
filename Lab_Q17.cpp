#include <iostream>
using namespace std;
class B;
class A {
    int x;
    public:
    A (int x) {
        this->x=x;
    }

    void friend swap (A &a1, B &b1);
};

class B {
    int y;
    public:
    B (int y) {
        this->y=y;
    }
    
    void friend swap (A &a1, B &b1);
};

void swap (A &a1,B &b1) {
    cout << "before swapping: " << a1.x << " " << b1.y << endl;
    int temp;
    temp=a1.x;
    a1.x=b1.y;
    b1.y=temp;
    cout << "after swapping: " << a1.x << " " << b1.y << endl;
}

int main() {
    cout << "Chaitanya Gupta" << endl;
    cout << "A2305222276" << endl;

    A a(3);
    B b(2);

    swap(a,b);

    return 0;
}