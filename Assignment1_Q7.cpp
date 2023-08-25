#include <iostream>
using namespace std;

void volume(int side) {
    cout << "volume of cube: " << side*side*side <<endl;
}

void volume(int radius,int height) {
    cout << "volume of cylinder: " << 3.14*radius*radius*height << endl;
}

void volume(int length,int breadth,int height) {
    cout << "volume of rectangular box: " << length*breadth*height << endl;
}
                   
int main() {
    volume(3);
    volume(3,4);
    volume(3,4,5);
    return 0;
}