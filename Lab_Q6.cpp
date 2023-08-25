// area of circle, square, rectangle, triangle
#include <iostream>
#define pi 3.14
using namespace std;
                   
int main() {
    int ch,rad, side, length, breadth,base, height;
    cout<< "1 to find area of circle" << endl;
    cout<< "2 to find area of square" << endl;
    cout<< "3 to find area of rectangle" << endl;
    cout<< "4 to find area of triangle" << endl;
    cin >> ch ;
        switch (ch)
        {
        case 1:
            cout<< "enter radius: " << endl;
            cin >> rad;
            cout << "area of the circle is " << pi*rad*rad << endl;
            break;
        
        case 2:
            cout << "enter side: " << endl;
            cin >> side;
            cout << "area of square is " << side*side << endl;
            break;
        
        case 3:
            cout << "enter length and breadth: " << endl;
            cin >> length;
            cin >> breadth; 
            cout << "area of rectangle is " << length*breadth << endl;
            break;

        case 4:
            cout << "enter base and height: " <<endl;
            cin >> base;
            cin >> height;
            cout << "area of triangle is " << (base*height)/2 << endl;
            break;
        }
    return 0;
}