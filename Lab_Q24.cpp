#include <iostream>
using namespace std;

class A {
    public:
    virtual void print() {
        cout << "base class print" <<endl;
    }
    void show() {
        cout << "base class show" << endl;
    }
};

class B : public A {
    public:
    void print() {
        cout << "derived class print" << endl;
    }
    void show() {
        cout << "derived class show" << endl;
    }
};
int main() {
    cout << "Chaitanya Gupta" << endl;
    cout << "A2305222276" << endl;
    B b1;
    A *a1;
    a1=&b1;
    a1->print();
    a1->show();
    return 0;
}