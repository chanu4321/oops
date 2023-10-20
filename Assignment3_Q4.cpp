#include <iostream>
using namespace std;
class A {
    public:
    friend void div ();
};
void div () {
    for (int i = 101; i < 200; i++) 
    {
        if (i % 9 == 0) 
        {
            cout << " " << i;
        }
    }
}
int main(){
    A a;
    div();
    return 0;
}