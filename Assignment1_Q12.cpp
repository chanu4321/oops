#include <iostream>
using namespace std;

void add(int x,int y,int z) {
    cout << "addition of " << x << " " << y << " " << z << " is " << x+y+z << endl; 
}
                   
int main() {
    add(2,3,4);
    return 0;
}