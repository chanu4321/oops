// hirarchichal inhaeritance square and cube

#include <iostream>
using namespace std;

class Num {
    private:
    int num;
    public:
        void getnum() {
            cout << "enter no " << endl;
            cin >> num;
        }
        int setnum() {
            return num;
        }
};

class Square : public Num {
    public:
    double num;
    void square () {
        num=setnum();
        cout << "square is " << num*num << endl;
    }
};

class Cube : public Num {
    public:
    int num;
    void cube () {
        num=setnum();
        cout << "cube is " << num*num*num << endl;
    }
};
                   
int main() {

    Square S;
    Cube C;

    S.getnum();
    S.square();

    C.getnum();
    C.cube();
    return 0;
}