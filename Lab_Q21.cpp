#include <iostream>
using namespace std;

class Base {
public:
  int public_member;
protected:
  int protected_member;
private:
  int private_member;
};

class Derived : public Base {
public:
  void access_members() {
    // Access public members
    cout << "public_member = " << public_member << endl;

    // Access protected members
    cout << "protected_member = " << protected_member << endl;

    // Try to access private members
    // This will produce an error
    // cout << "private_member = " << private_member << endl;
  }
};

                   
int main() {
    
    cout << "Chaitanya Gupta" << endl;
    cout << "A2305222276" << endl;
    Derived d;
    d.access_members();

    return 0;
}