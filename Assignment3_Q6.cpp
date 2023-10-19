#include <iostream>
#include <string>
using namespace std;

class Staff {
    int code;
    string name;
    public:
    void putd1() {
        cin >> code;
        cin >> name;
    }
    void getd1() {
        cout << code << endl;
        cout << name << endl;
    }
};

class Teacher : public Staff {
    string sub;
    string pub;
    public:
    void putd2() {
        putd1();
        cin >> sub;
        cin >> pub;
    }
    void getd2() {
        getd1();
        cout << sub << endl;
        cout << pub << endl;
    }
};

class Typist : public Staff {
    int speed;
    public:
    void putd3() {
        putd1();
        cin >> speed;
    }
    void getd3() {
        getd1();
        cout << speed << endl;
    }
};

class Officer : public Staff {
    string grade;
    public:
    void putd4() {
        putd1();
        cin >> grade;
    }
    void getd4() {
        getd1();
        cout << grade << endl;
        
    }
};

class Regular : public Typist {
    public:
    void putd5() {
        putd3();
    }
    void getd5() {
        getd3();
    }
};

class Casual : public Typist {
    int wages;
    public:
    void putd6() {
        putd3();
        cin >> wages;
    }
    void getd6() {
        getd3();
        cout << wages << endl;
    }
};

int main() {
    
    cout << "Chaitanya Gupta" << endl;
    cout << "A2305222276" << endl;
    Regular r1;
    r1.putd5();
    r1.getd5();

    return 0;
}