#include <iostream>
using namespace std;

class Height {
    int feet;
    int inch;
    public:
    Height (int f=0,int i=0) {
        feet=f;
        inch=i;
    }
    Height operator + (Height const &obj) {
        Height res;
        res.feet=feet + obj.feet;
        res.inch=inch + obj.inch;
        if (res.inch>12) {
            res.feet++;
            res.inch-=12;
        }
        return res;
    }
    Height operator < (Height const &obj) {
        Height res;
        res.feet=obj.feet;
        res.inch=obj.inch;
        if (res.feet < feet) {
            cout << "1st height is greater" <<endl;
        }
        else if (res.inch < inch) {
            cout << "1st height is greater" <<endl;
        }
        else {
            cout << "2nd height is greater" <<endl;
        }
        return res;
    }
    Height operator == (Height const &obj) {
        Height res;
        res.feet=obj.feet;
        res.inch=obj.inch;
        if (res.feet == feet && res.inch == inch) {
            cout <<  "they are equal" <<endl;
        }
        else {
            cout << "they are unequal" <<endl;
        }
        return res;
    }
    void print() {
        cout << feet << "ft " << inch << "in" <<endl; 
    }
    Height operator *= (int num) {
        Height res;
        res.inch=(12*feet+inch)*num;
        res.feet=res.inch / 12;
        res.inch=res.inch % 12;
        return res;
    }
};
int main()
{
    cout << "Chaitanya Gupta" << endl;
    cout << "A2305222276" << endl; 
    Height c1(5,11);
    // Height c2(6,0);
    
    // Height c3=c1+c2;
    // c3.print();
    // Height c4 = c1 < c2;
    // Height c5 = c1 == c2;
    Height c6 = c1 *= 3;
    c6.print();
    return 0;
}