#include <iostream>
using namespace std;

class Student {
    string name;
    int age;
    string address;
    public:
    Student (string name = "unknown",int age = 0, string address = "not available"){
        this->name=name;
        this->age=age;
        this->address=address;
    }

    void setInfo(string name,int age){
        cin >> name;
        cin >> age;
        this->name=name;
        this->age=age;
    }

    void setInfo(string name,int age,string address){
        cin >> name;
        cin >> age;
        cin >> address;
        this->name=name;
        this->age=age;
        this->address=address;
    }

    void getInfo(){}
};
int main() {
    Student s[10];
    for (int i=0; i<10;i++){
        s[1].setInfo("mudit",10);
    }
    cout << "Chaitanya Gupta" << endl;
    cout << "A2305222276" << endl;
    return 0;
}