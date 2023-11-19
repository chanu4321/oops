#include <iostream>
using namespace std;

class A {
    public:
    A () {
        cout << "base class contructor called" << endl;
    }
};

class B  : public A  {
    public:
    B () {
        cout << "single inheritance class contructor called" << endl;
    }
};
 class C : public A, public B {
    public:
    C () {
        cout << "multiple inheritance class contructor called" << endl;
    }
};
// class D : public B {
//     public:
//     D () {
//         cout << "multilevel inheritance class contructor called" << endl;
//     }
// };
// class E : public A {
//     public:
//     E () {
//         cout << "hierarchical class contructor called" << endl;
//     }
// };
              
int main() {
    cout << "Chaitanya Gupta" << endl;
    cout << "A2305222276" << endl;

    //B::A a1;
    C::A a1;
    // D::A a1;
    // E::A a1;
    return 0;
}