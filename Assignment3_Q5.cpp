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
        this->name=name;
        this->age=age;
    }

    void setInfo(string name,int age,string address){
        this->name=name;
        this->age=age;
        this->address=address;
    }

    void getInfo(){
        cout << name << " " << age << " " << address << endl;
        cout << endl;
    }
};
int main() {
    Student s[10];
    string n,add;
    int a;
    for (int i=0;i<10;i++){
        cout << "enter name age address" << endl;
        cin >> n >> a >> add;
        s[i].setInfo(n,a,add);
    }
        
    for(int i=0;i<10;i++){
        s[i].getInfo();
    }
    cout << "Chaitanya Gupta" << endl;
    cout << "A2305222276" << endl;
    return 0;
}