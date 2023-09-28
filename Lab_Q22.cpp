#include <iostream>
using namespace std;

class Student {
    int rno;
    string name;
    public:
    void set() {
        cout << "enter rno " << endl;
        cin >> rno;
        cout << "enter name " << endl;
        cin >> name;
    }

    void get() {
        cout << "rno " << rno << endl;
        cout << "name " << name << endl;
    }
};

class Exam : public Student {
    int m[6];
    public:
    void set() {
        for (int i=0;i<6;i++){
        cout << "enter marks " << endl;
        cin >> m[i];
        }
    }
    int tm() {
        int totmks=0;
        for(int i=0;i<6;i++){
            totmks+=m[i];
        }

        return totmks;
    }

};

class Result: public Exam {
    int total_marks;
    public:
    void set () {
        Student::set();
        Exam::set();
        total_marks = tm();

    }

    void get () {
       Student::get();
       cout << "Total Marks: " << total_marks << endl;
    }
};
int main() {
    
    cout << "Chaitanya Gupta" << endl;
    cout << "A2305222276" << endl;

    Result r1;
    r1.set();
    r1.get();
    return 0;
}