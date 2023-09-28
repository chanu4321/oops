#include <iostream>
using namespace std;

class MyClass {
  static int x;
  public:
    MyClass(){
        cout << "enter x: " << endl;
        cin >> x;
    }
    static void displayX();
};

int MyClass::x;

void MyClass::displayX() {
  cout << "The value of x is: " << x << endl;
}

int main() {
    
    cout << "Chaitanya Gupta" << endl;
    cout << "A2305222276" << endl;
    MyClass obj;
    obj.displayX();
    MyClass::displayX();
    return 0;
}