#include <iostream>
using namespace std;
class Student {
    int rollno;
    string name;
    int marks[6];
    int sum=0;
    public: 
    void insert () {
        cout << "enter roll no. " << endl;
        cin >> rollno;
        cout << "enter name" << endl;
        cin >> name;
        for (int i=0;i<6;i++) {
            cout << "enter marks for subject " << i+1 << endl;
            cin >> marks[i];
            sum+=marks[i];
        }
    }

    void display () {
        cout << "roll no. is " << rollno << endl;
        cout << "name is " << name << endl;
        for (int i=0;i<6;i++){
            cout << "marks for subject " << i+1 << " " << marks[i] << endl;
        }
        float avg = (sum/6.0);
        cout << "avg marks is " << avg << endl;
    }
};

int main() {
    Student s1,s2,s3,s4,s5;

    s1.insert();
    s1.display();

    s2.insert();
    s2.display();

    s3.insert();
    s3.display();

    s4.insert();
    s4.display();

    s5.insert();
    s5.display();

    return 0;
}